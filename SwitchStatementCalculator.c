#include <stdio.h>
int main()
{
int add, subtract, multiply, divide,choice;
float value1, value2;
printf("**********calculator************\n");
printf("[1] ");
scanf("%d\n", & value1);
printf("[2] ");
scanf("%d" & value2);
printf("**********************************\n\n");
printf("[1] addition [2] subtraction \n[3] multiplication [4] division");
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
}

return 0;
}
