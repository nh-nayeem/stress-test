$iter = Read-Host -Prompt 'Number of iterations'

$scriptPath = split-path -parent $MyInvocation.MyCommand.Definition
cd $scriptPath
g++ -std=c++17 gen.cpp
Copy-Item a.exe gen.exe
g++ -std=c++17 brute.cpp
Copy-Item a.exe brute.exe
g++ -std=c++17 sol.cpp
Copy-Item a.exe sol.exe


for($i = 0; $i -lt $iter; $i++){

    cmd /c '.\gen.exe > input.txt'

    cmd /c '.\sol.exe < ./input.txt > output.txt'

    cmd /c '.\brute.exe < ./input.txt > brute_out.txt'
    $out = Get-Content output.txt
    $brute = Get-Content brute_out.txt
    if(Compare-Object -ReferenceObject $out -DifferenceObject $brute){
        Write-Host "Brute Failled, check log.txt for for info"
        $inp = Get-Content input.txt
        "input: `n" + $inp + "`n`n`n`n`nCorrect output: `n" + $brute + "`n`n`n`nYour output: `n" + $out | Out-File -FilePath log.txt
        return
    }

}
"Brute Passed" | Out-File -FilePath log.txt
Write-Host "Brute Passed"