#Objectif: --Learn the differences basic commandes of c programming language, and how to display a message on the screen like 
Hello, World!

#Documentation:

#Headers Files

--First, in order to start programming we should insert the headers files stdio.h (standard input/output) and 
  stdlib.h (standard library) (.h for heathers) in our program and this before compilation, the role of that is to associate 
  the c main program with functions like (printf, scanf, malloc,...etc)

--in order to do that we use the following instructions:

#include<stdio.h>: Allows us to use printf() and scanf() functions in the main c program #include<stdlib.h>: Allows us to use
library functions such as malloc() and free() in our c program

#Main function:

--Difference between the 2 main function declarations:

1-int main(void):Here the program don't accept the command-line arguments (no arguments)
2-int main (int args, char *argv[]): Here the program accepte the command-line arguments (accept inputs)

int main(void) { Here we are in the main program section in which we declare variabels, write instructions ...etc

return 0:Indicates that the program terminated without errors, such that a return of 0 means that no errors occured during
the execution and a return of value different to 0 means that there are errors occured in the program}
