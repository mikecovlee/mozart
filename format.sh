rm -rf ./mozart/*.gch
rm -rf ./tests/*.gch
astyle -A4 -N -t ./mozart/*
astyle -A4 -N -t ./tests/*
rm -rf ./mozart/*.orig
rm -rf ./tests/*.orig