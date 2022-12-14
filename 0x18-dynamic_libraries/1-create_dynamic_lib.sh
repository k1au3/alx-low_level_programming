#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LDLIBRARY-PATH=.:$LD_LIBRARY_PATH
