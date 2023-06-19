#!/bin/bash
gcc -c -fpic *.c
gcc -o -shared liball.so *.o
