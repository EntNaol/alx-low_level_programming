#!/bin/bash
gcc -C *.c
ar -rcs liball.a *.o
ranlib liball.a
