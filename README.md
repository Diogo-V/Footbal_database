# Description:
Program that simulates a management system of a database for football games. <br />
Interaction with the program is done trough a set of commands and must be given in a specific format. <br />

# How to use:
1º Compile c file <br />
2º Read Guidelines.md for an explanation in how to give input to the program and what it will do <br />
3º Open terminal inside same folder as compiled project and type: ./football < "input_file_name".in > output.out <br />

# Compiling:
Open terminal in same folder as project and type: gcc -g -fsanitize=address -ansi -Wall -Wextra -pedantic -Werror -o football *.c <br />

# Performing tests:
1º Unzip tests.zip <br />
2º Compile c file <br />
3º Run test.sh using command: ./test.sh football <br />
