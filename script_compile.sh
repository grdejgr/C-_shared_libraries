#!/bin/bash
cd Partie1/

#Create the shared libraries
echo "Creating the shared libraries"
g++ -c -fPIC class.cpp -o class.o
g++ -shared -o libclass.so class.o
g++ -c -fPIC classB.cpp -o classB.o
g++ -shared -o libclassB.so classB.o

#Create the architecture
echo "Creating the architecture"
mv *.so ../Lib/
cp *.h ../Headers/

#Compile
echo "Compiling"
cd ..
g++ -o my_program topology.cc -L/home/most/Documents/tmp/TestSO/Lib/ -lclass -lclassB

echo "Running the program"
LD_LIBRARY_PATH=/home/most/Documents/tmp/TestSO/Lib ./my_program
