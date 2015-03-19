#!/bin/bash

# Run "chmod +x ./compile.sh" to compile the script
  # Done only once
# use "./compile.sh FILENAME" to run a cpp file

file="$1"

g++ $file.cpp -o $file;
./$file
