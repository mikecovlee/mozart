rm -rf ./headers/*.gch
rm -rf ./tests/*.gch
astyle -A4 -N -t ./headers/*
astyle -A4 -N -t ./tests/*
rm -rf ./headers/*.orig
rm -rf ./tests/*.orig