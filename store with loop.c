#include <stdio.h>
int main()
{
    //I used if else statement with  for loop
    int shirt = 150, short1 = 200, sleeve = 500;
    int choice, process;
    int money, change, discount;
    char exit;
    printf("___________________________________________\n\n");
    do{
    printf("[please choose a product]\n\n\n");
    printf("(1) [shirt]  ₱150 \n(2) [short]  ₱200\n(3) [sleeve] ₱500\n\n");
    printf("____________________________________________\n: ");
    scanf("%d", & choice);
    }
    while (choice >= 4);
    {
    printf("_____________________________________________\n\n");
    }
    switch(choice)
    {
        case 1: 
        do
        {
         printf("enter your money: ");
         scanf("%d", &money);
        }
        while (money < shirt);
        {
           printf("________________________________________\n");
            process = money - shirt;
            printf("Total payable amount:                  [%d]\n\n", shirt);
            printf("______________________________________\n");
            printf("total change:                           [%d]\n\n", process);
             printf("===========THANKYOU FOR PURCHASING=============\n\n");
        }
        break;
    
         case 2: 
         printf("enter your money: ");
         scanf("%d",& money);
         do
        {
         printf("enter your money: ");
         scanf("%d", &money);
        }
        while (money < short1);
        {
           printf("------------------------------------------------\n");
            process = money - short1;
            printf("Total payable amount:                  [%d]\n\n", short1);
            printf("------------------------------------------------\n");
            printf("total change:                           [%d]\n\n", process);
             printf("===========THANKYOU FOR PURCHASING=============\n\n");
        }
        break;
    
         case 3: 
         printf("enter your money: ");
         scanf("%d",& money);
         do
        {
         printf("enter your money: ");
         scanf("%d", &money);
        }
        while (money < sleeve);
        {
           printf("------------------------------------------------\n");
            process = money - sleeve;
            printf("Total payable amount:                  [%d]\n\n", sleeve);
            printf("------------------------------------------------\n");
            printf("total change:                           [%d]\n\n", process);
             printf("===========THANKYOU FOR PURCHASING=============\n\n");
        }
        break;

        default: 
        printf("invalid!");
    }
     return 0;
}
