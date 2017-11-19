del /Q /F .\mozart\*.gch
del /Q /F .\tests\*.gch
astyle -A4 -N -t .\mozart\*
astyle -A4 -N -t .\tests\*
del /Q /F .\mozart\*.orig
del /Q /F .\tests\*.orig