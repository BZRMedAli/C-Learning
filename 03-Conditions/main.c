#include <stdio.h>
#include <stdlib.h>

int main()
{
float moy;
printf("Give a student grade average between 0 and 20:");  //To control the input
scanf("%f",&moy);

if(moy<10){
printf("Postponed");}
else if(moy <12){
printf("Acceptable");}
else if(moy<14){
printf("Pretty good");}
else if(moy<16){
printf("Good");}
else{
printf("Very good");}

return 0;
}
