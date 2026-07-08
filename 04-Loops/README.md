  # Objective:
  
 -In this chapter we will learn what is the purpose of loops in programming, why they are so importants and what problems they solve.
 -And also we learn how to use them by giving a real programming examples like a little exercices to practise them well.

  # Documentation:

 -In the beginning of programming years, enginners found problems in manipulating problems effictively, and sometime even
 if the instruction was done before they were obligated to doing it a lot of time, (like printing helloworld 10 times), so they
 said if we used an instruction line before in the program so we don't have to repeat it many times it's lost of time, so they found a way to solve that by presenting loops (for,while,do...while), so with this we can avoid writing the same line of code many times so saving time and also having a better code.
 
 -Inside the loops we define a code block to presente it to the program, with this we can repeat this block as many time as we want. 
 
 -Also loops helping us controling errors by combaning them with conditions, so for example we can define a loop who reapets an instruction while the condition is not satisfied (so the user don't respect the condition), so the program will execute the block of code while the user don't repeact the condition specified.
 
  # Loops:

  We have 2 types of loops:
  -for:Here the incrementation is automatic and for this loop we declare the starting point and the end with the steps at ones.
  
  -while:Here the program execute this loop if only the condition is correct (satified) and here we should increment the variable
  inside while in the while code bloc. Also there is a variant of while loop which is the (do...while) loop in which we put the condition in the end so at least the program execute this section 1 time if the condition is unsatisfied.

  # Syntax:

  example:If we take the variable_name is i so we will have:

1-for:

for(i=initial_value;i<=final_value; i_increments){
Code_for_section;
}

2-while:

while(i<specified_value){
Code_while_section;
i_increments;
}

3-do..while:

do{
code_do_section
i_increments;
}while(entering_condition);

Here is an exercice in which we will use while, for and do..while:
  For example we will try to realise a program that allow to the user to give the number of repitition (n),printing the message (Hello, World!) n times:

# -for loop with n=10:
  

  <img width="1366" height="742" alt="Capture d’écran du 2026-07-08 22-19-00" src="https://github.com/user-attachments/assets/00144f91-aded-4ebd-9879-82e1a1f81519" />



  # -while loop with n=5:

 <img width="1366" height="742" alt="Capture d’écran du 2026-07-08 22-25-45" src="https://github.com/user-attachments/assets/e73fb8e8-00db-4108-b7bb-07edcff5f81d" />



# -do---while loop with n=3:

<img width="1366" height="742" alt="Capture d’écran du 2026-07-08 22-34-29" src="https://github.com/user-attachments/assets/6317bdb8-f657-4382-94f5-1ead6cfe5909" />


-But in this case we can't control the input of users he can entry for example -3 who is incorrect for n because we declared n to be an integer, here comes the conditions combined with loop to solve this problem, here is an example for that:

<img width="1366" height="742" alt="Capture d’écran du 2026-07-08 22-48-38" src="https://github.com/user-attachments/assets/d500c12f-a0bd-4846-b597-854985e3de76" />

-So like we see here in entered -2 first, then -5 the -10, the program execute the loop while i didn't entered a positive value
when i entered 0 the process returned 0 so there is any error detected, here comes the powerful point of using loops combined with conditions



  

  


