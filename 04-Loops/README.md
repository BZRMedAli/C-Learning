  # Objective:
  
 -In this chapter we will learn what is the purpose of loops in programming, why they are so important and what problems they solve.
 -Also, we learn how to use them by giving real programming examples like little exercises to practise them well.

  # Documentation:

 -In the beginning of programming years, engineers found problems in manipulating problems effectively, and sometimes even
 if the instruction was done before they were obligated to do it a lot of times, (like printing hello world 10 times), so they
 said if we used an instruction line before in the program so we don't have to repeat it many times it's a waste of time, so they found a way to solve that by presenting loops (for,while,do...while), so with this we can avoid writing the same line of code many times, saving time and also having better code.
 
 -Inside the loops we define a block of code to present it to the program, with this, we can repeat this block as many times as we want. 
 
 -Also loops help us control errors by combining them with conditions, so for example we can define a loop that repeats an instruction while the condition is not satisfied (so the user doesn't respect the condition), so the program will execute the block of code while the user doesn't repeat the condition specified.
 
  # Loops:

  We have 2 types of loops:
  -for:Here the incrementation is automatic and for this loop we declare the starting point and the end with the steps at once.
  
  -while:Here the program executes this loop if only the condition is correct (satisfied) and here we should increment the variable
  Inside while in the while code block. Also, there is a variant of the while loop which is the (do...while) loop in which we put the condition at the end, so at least the program executes this section 1 time if the condition is unsatisfied.

  # Syntax:

  Example: If we take the variable_name as i so we will have:

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

Here is an exercise in which we will use while, for and do..while:
  For example we will try to realise a program that allows to the user to give the number of repetitions (n), printing the message (Hello, World!) n times:

# -for loop with n=10:
  

  <img width="1366" height="742" alt="Capture d’écran du 2026-07-08 22-19-00" src="https://github.com/user-attachments/assets/00144f91-aded-4ebd-9879-82e1a1f81519" />



  # -while loop with n=5:

 <img width="1366" height="742" alt="Capture d’écran du 2026-07-08 22-25-45" src="https://github.com/user-attachments/assets/e73fb8e8-00db-4108-b7bb-07edcff5f81d" />



# -do---while loop with n=3:

<img width="1366" height="742" alt="Capture d’écran du 2026-07-08 22-34-29" src="https://github.com/user-attachments/assets/6317bdb8-f657-4382-94f5-1ead6cfe5909" />


-But in this case we can't control the input of the users so they can enter for example -3 who is incorrect for n because it is declared like an integer. Here come the conditions combined with a loop to solve this problem. Here is an example of that:

<img width="1365" height="737" alt="Capture d’écran du 2026-07-08 23-00-35" src="https://github.com/user-attachments/assets/723b83ca-eefd-44d8-85d2-80823bbefcb4" />


-So like we see here, the i entered is -2 first, then -5 then -10, the program executes the loop, while i isn't a positive value.
-When i is 0 the process returnes 0 so there is no error detected, and the loop was not executed at this point. So here comes the powerful reason behind using loops combined with conditions.



  

  


