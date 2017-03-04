del /Q /F .\headers\*.gch
del /Q /F .\tests\*.gch
astyle -A4 -N -t .\headers\*
astyle -A4 -N -t .\tests\*
del /Q /F .\headers\*.orig
del /Q /F .\tests\*.orig