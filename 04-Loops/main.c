//For loop

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,i;
    printf("Give a number of repetitions you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("Hello, World! \n");    //We use \n to break a line in C
    }
    return 0;
}	

//While loop

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,i;
    printf("Give a number of repetitions you want:");
    scanf("%d",&n);
    i=1;    //We initialise i to 1 to start from 1 into n chosen by the user
    while (i<=n){
    printf("Hello, World! \n");
    i++;
    }

    return 0;
}

//do...while loop

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,i;
    printf("Give a number of repetitions you want:");
    scanf("%d",&n);
    i=1;    
    do{
    printf("Hello, World! \n");
    i++;
    }while (i<=n);  //Here we set the condition in the end

    return 0;
}

//Controling error with loop

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Give a number of repetitions you want:");
    scanf("%d",&n);

    if (n<0){
    do{
    printf("The entry should be positive:");
    scanf("%d",&n);
    }while(n<0);
    }
    
    return 0;
}



