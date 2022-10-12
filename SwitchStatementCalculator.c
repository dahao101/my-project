#include <stdio.h>
int main()
{
int add, subtract, multiply, divide,choice;
float value1, value2;
printf("**********calculator************\n");
printf("[1] ");
scanf("%f", & value1);
printf("[2] ");
scanf("%f", & value2);
printf("**********************************\n\n");
printf("******select what process******\n");
printf("[1] addition [2] subtraction \n[3] multiplication [4] division\n\n");
scanf("%d", & choice);
switch(choice)
{
case 1: 
add = value1 + value2;
printf(" = [%d]", add);
break;
case 2: 
subtract = value1 - value2;
printf(" = [%d]", subtract);
break;
case 3:
multiply = value1 * value2;
printf(" = [%d]", multiply);
break;
case 4:
divide = value1 / value2;
printf(" = [%d]", divide);
break;
  default:
    printf("invalid choice!!");
}
return 0;
}
