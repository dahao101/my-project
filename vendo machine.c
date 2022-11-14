#include <stdio.h>
int main() {
     int  choice,money, coke = 35, sprite = 55, royal = 50, dew = 40;
     float change;
     char repeat = 'y';
     
    printf("____________________vendo machine__________________________\n\n");
    while (repeat == 'y')
    {
    printf("[1] coke P35 [2] sprite P55 \n[3] royal P50 [4] mountain dew P40\n\n");
    printf("input choice: ");
    scanf("%d", & choice);
    printf("___________________________________________________________\n\n");
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        printf("[invalid choice]");
    }
        switch(choice)
        {
                case 1:
                printf("Thankyou for purchasing coke! \n\n");
                printf("enter money: P");
                scanf("%d", & money);
                if (money >= coke)
                {
                change = money - coke;
                printf("\n\nYour change is P%.2f", change);
                }
                else if (money < coke)
                {
                    printf("insufficient money!");
                }
                break;
         
        case 2:
                printf("Thankyou for purchasing sprite! \n\n");
                printf("enter money: P");
                scanf("%d", & money);
                if (money >= sprite)
                {
                change = money - sprite;
                printf("\n\nYour change is P%.2f", change);
                }
                else if (money < sprite)
                {
                    printf("insufficient money!");
                }
                break;
            case 3:
                printf("Thankyou for purchasing royal! \n\n");
                printf("enter money: P");
                scanf("%d", & money);
                if (money >= royal)
                {
                change = money - royal;
                printf("\n\nYour change is P%.2f", change);
                }
                else if (money < royal)
                {
                    printf("insufficient money!");
                }
                break;
            
            case 4:
                printf("Thankyou for purchasing mountain dew! \n\n");
                printf("enter money: P");
                scanf("%d", & money);
                if (money >= dew)
                {
                change = money - dew;
                printf("\n\nYour change is P%.2f", change);
                }
                else if (money < dew)
                {
                    printf("insufficient money!");
                }
                break;
    }
                printf("\n\nprogram by: mrt ervn\n\n");
                printf("do you want to repeat? y/n\n");
                printf("choice: ");
                scanf(" %c", &repeat);
    }
printf("thankyou try again!");
 return 0;
}
