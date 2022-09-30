#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -cr libmy.a *.o