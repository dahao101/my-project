#include <stdio.h>
int main()
{
int choice;
float value1, value2,divide,multiply,subtract,add;
printf("________[select what process]_______\n\n");
printf("[1] addition [2] subtraction \n[3] multiplication [4] division\n\n");
scanf("%d", & choice);
printf("_____________________________\n");
printf("Input\n");
printf(" ");
scanf("%f", & value1);
if (choice == 1)
{
    printf("+\n");
}
else if(choice == 2)
{
    printf("-\n");
}
else if(choice == 3)
{
    printf("×\n");
}
else if(choice == 4)
{
    printf("÷\n");
}
printf(" ");
scanf("%f", & value2);
printf("________\n");
switch(choice)
{
case 1: 
add = value1 + value2;
printf("  %.2f", add);
break;
case 2: 
if(value1 > value2)
{
subtract = value1 - value2;
printf(" %.2f", subtract);
}
else if(value1 < value2)
{
    subtract = value2 - value1;
    printf(" %.2f", subtract);
}
break;
case 3:
multiply = value1 * value2;
printf("  %.2f", multiply);
break;
case 4:
if(value1 < value2 )
{
    divide = value2 / value1;
    printf("  %.2f", divide);
}
else if(value1 > value2)
{
divide = value1 / value2;
printf(" %.2f", divide);
}
break;
  default:
    printf("invalid choice!!");
}
return 0;
}
