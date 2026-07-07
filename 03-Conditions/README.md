#Objectifs:
-In this chapter we will learn to manipulate conditions (if...else) statements, and we will learn to use them in our 
c program by giving a program example and also learn the appropriate syntaxe declaration.

#Documentation:

-The objectifs of conditions using in a programming language are to define a program decisions in a situation,
(example:if x is bigger than 20 print error) so we compare a variable value to a reference in order to choose a decision

  -So we use conditions to manipulate a problem effictively, and stay coherent so we ensure to have logical variables values and
  avoid variables values that can cause errors in our program execution and allow the program to choose a decision
  based on the datas.

#If..else Statements:

  In order to explain a condition in c programming language we use:
  
  -if: To describe a condition (example:(if(x==10 then an instructions block
  -else:To describe an instructions block of the conditions before are not satisfied.
  else if:To describle an other condition if the previous one is unsatisfied then an instructions block.

  #The syntax:

  --In order to describe condition in c programming language we follow the next syntax:

  if (variable_name Comparison_Operator value) {

  Instructions_block
  }else if (condition 2){
  Instructions_block_2
  }else if (condition 3){
  Instruction_block_3}.
  .....................
  .....................
  }else{
  Instruction_block_n;}


-Here is an example of a program that checks the student average grade, and decide if the student is postponed,  acceptable
or pretty good, good, very good

Such that:
  Postponed: if moy<10
  Acceptable: if 10<=moy and moy<12
  Pretty good: if 12<=moy and moy<14
  Good: if 14<=moy and moy<16
  Very good: if 16<=moy

Here is the 
   

  

