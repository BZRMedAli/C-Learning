#Objectifs:
-In this chapter we will learn to manipulate conditions (if...else) statements, and we will learn to use them in our 
C program by giving a program example and also learnning the appropriate syntax declaration.

#Documentation:

-The objective of conditions used in a programming language is to define a program decisions in a situation,
(example:if x is bigger than 20, print error) so we compare a variable value to a reference in order to make a decision by the program.

  -So we use conditions to manipulate a problem effectively, and stay coherent so we ensure to have logical variable values
  avoid variable value that can cause errors in our program execution and allow the program to choose a decision
  Based on the data.

#If..else Statements:

  In order to explain a condition in C programming language we use:
  
  -if: To describe a condition (example:(if(x==10 then an instructions block
  -else:To describe an instructions block of the conditions before are not satisfied.
  -else if:To describle another condition if the previous one is unsatisfied then an instructions block.

  #Syntax used:

  --In order to describe conditions in C programming language, we follow the next syntax:

  if (condition 1) {
  Instructions_block;
  }else if (condition 2){
  Instructions_block_2;
  }else if (condition 3){
  Instruction_block_3;
  } .....................
  .....................
  }else{
  Instruction_block_n;
  }

-Here is an example of a program that checks the student's average grade and decides if the student is postponed or acceptable
or pretty good, good, very good

Such that:
  -Postponed: if moy<10
  -Acceptable: if 10<=moy and moy<12
  -Pretty good: if 12<=moy and moy<14
  -Good: if 14<=moy and moy<16
  -Very good: if 16<=moy

--Here is a picture of my proposed program to solve that:
   
<img width="1366" height="741" alt="01" src="https://github.com/user-attachments/assets/49ce9eb0-39ed-46b9-acdb-640774c7ac50" />

--First case (Postponed):

<img width="1366" height="741" alt="02" src="https://github.com/user-attachments/assets/bd087eef-d28b-4aa5-a4c1-5055a90ae725" />

--Second case (Acceptable):

<img width="1366" height="741" alt="03" src="https://github.com/user-attachments/assets/a448d4b7-eb81-4b3c-8cf7-4fb8631287e3" />

--Third case (Pretty good):

<img width="1366" height="741" alt="04" src="https://github.com/user-attachments/assets/ac4f5167-5e55-43c8-afdd-c2513487a7f7" />

--Fourth case (Good):

<img width="1366" height="741" alt="05" src="https://github.com/user-attachments/assets/47a07678-d675-424d-806f-24c50ec01645" />

--Fifth case (Very good):

<img width="1366" height="741" alt="06" src="https://github.com/user-attachments/assets/df1255e9-1441-408b-b6d6-c005f87d6839" />






  

