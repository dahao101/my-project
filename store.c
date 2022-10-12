#include <stdio.h>
int main()
{
    int tshirt = 150, short1 = 200, polo = 300, sleeve = 500,choice;
    float money,proc, exchange;
    char con,ans,y,n,yes,no;
    printf("****************GAISANO MALL******************\n\n");
    printf("============HELLO WELCOME TO GAISANO==========\n");
    printf("if you want to continue type [y] if no type [n]\n");
    scanf("%s",& con);
    if (con = y)
    {
       printf("************welcome to the store************\n\n");
       printf("[1] polo  [2] short\n[3] t-shirt [4] long-sleeve\n\n");
       printf("please select what product you want to buy!\n");
       scanf("%d", & choice);
       switch (choice)
       {
           case 1: 
           printf("the polo is %d\n",polo);
           printf("do you want to buy?\n");
           scanf("%s", & ans);
           if (ans = yes)
           {
           printf("enter your money \n");
           scanf("%f", &money);
           
           for (money = 0; money <= 300; money++)
           {
               printf("your money is not enough!\n");
               printf("enter your money again! \n");
               scanf("%f", & money);
           }
           exchange = polo - money;
           printf("your change is %.2f\n", exchange);
          printf("thank you for choosing gaisano mall\n");
       }
       else if(ans != yes)
       {
           printf("try again!\n");
       }
       break;
       
       case 2: 
           printf("the short is %d\n",short1);
           printf("do you want to buy?\n");
           scanf("%s", & ans);
           if (ans = yes)
           {
           printf("enter your money \n");
           scanf("%f", &money);
           for (money = 0; money <= 200; money++)
           {
               printf("your money is not enough!\n");
               printf("enter your money again! \n");
               scanf("%f", & money);
           }
           exchange = short1 - money;
           printf("your change is %f\n", exchange);
          printf("thank you for choosing gaisano mall\n");
       }
       else if(ans != yes)
       {
           printf("try again!\n");
       }
       break;
       
       case 3: 
           printf("the t-shirt is %d\n",tshirt);
           printf("do you want to buy?\n");
           scanf("%s", & ans);
           if (ans = yes)
           {
           printf("enter your money \n");
           scanf("%f", &money);
           for (money = 0; money <= 150; money++)
           {
               printf("your money is not enough!\n");
               printf("enter your money again! \n");
               scanf("%f", & money);
           }
           exchange = tshirt - money;
           printf("your change is %f", exchange);
          printf("thank you for choosing gaisano mall\n");
       }
       else if(ans != yes)
       {
           printf("try again!\n");
       }
       break;
       case 4: 
           printf("the long-sleeve is %d\n",sleeve);
           printf("do you want to buy?\n");
           scanf("%s", & ans);
           if (ans = yes)
           {
           printf("enter your money \n");
           scanf("%f", &money);
           for (money = 0; money <= 500; money++)
           {
               printf("your money is not enough!\n");
               printf("enter your money again! \n");
               scanf("%f", & money);
           }
           exchange = sleeve - money;
           printf("your change is %f", exchange);
          printf("thank you for choosing gaisano mall\n");
       }
       else if(ans != yes)
       {
           printf("try again!\n");
       }
       break;
           }}
    else if (con != y)
    {
     printf("thankyou for coming!");
    }
     return 0;
    }