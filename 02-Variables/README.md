#Objectifs: 
-Learn to declare variables and use them in the right way, and know how it works and why they were invented

#Documentation:

  #Variables:
  -We use variables to stock values in, variables take a space in memory temporarily during the execution of the program, and take
  a specific type of values (int, float, char, string, boolean...etc), so in our variables declaration we should respect the type
  of values to choose for these variables

  -Variables help us to easily access, update, and manipulate data, so they are important!!!

  The syntax of variables declaration in c is:
  type_values  value_name;

  #scanf() and printf() functions:

---printf():The printf() is a heather file stdio.h function, that is used to print (write, display) a content 
(sentences, values ..etc) and also can display variables 
in order to display variables we use:

%d:For integer variables
%f:For float variables
%c:For characters
%s:For strings

---scanf():The scanf() is a heather file stdio.h function, used to read and scan values entered by users to replace them in
variables.
  After this scan the entered value is replaced in the variable memory space specified in scanf() function by (&) symbol who
 refers to address.

 In this function, we specify the type of variable, and the variable name, the syntax used is like the following:

 scanf("%type_variable",&variable_name); 
 
 In the variable_name section we should respect the exact name given to our variable!!!.

 --Here is an exemple of a program that read a student grade average, and display it:

<img width="1366" height="741" alt="variables-exo1" src="https://github.com/user-attachments/assets/e1299e25-52d6-467a-afd0-d026e6c104d6" />

  
