#include <stdio.h>
int main()
{
    float input1, input2,answer;
    int choice;
    char repeat = 'y';
    printf("\ncoded by: mrt ervn\n\n");
    while(repeat == 'y')
    {
        printf("\n____________select what method____________\n\n");
        printf("[1] add [2] subtract [3] multiply [4] divide\n\n");
        printf("choice: ");
        scanf("%d",& choice);
        printf("__________________________________________\n\n");
        switch(choice)
        {
            case 1: 
                    printf("");
                    scanf("%f", & input1);
                    printf("\n     +");
                    printf("\n");
                    scanf("%f",& input2);
                    answer = input1 + input2;
                    printf("______\n");
                      printf("%.2f",answer);
            break;
            
             case 2: 
                    printf("");
                    scanf("%f", & input1);
                    printf("\n   -");
                    printf("\n");
                    scanf("%f",& input2);
                            if(input1 < input2)
                            {
                                answer = input2 - input1;
                                 printf("______\n");
                                printf("%.2f", answer);
                            }
                            else if(input1 > input2)
                            {
                                answer = input1 - input2;
                                printf("______\n");
                                printf("%.2f",answer);
                            }
            break;
            
             case 3: 
                    printf("");
                    scanf("%f", & input1);
                    printf("\n*");
                    printf("\n");
                    scanf("%f",& input2);
                    answer = input1 * input2;
                    printf("______\n");
                      printf("%.2f",answer);
            break;
            
             case 4: 
                    printf("");
                    scanf("%f", & input1);
                    printf("\n/");
                    printf("\n");
                    scanf("%f",& input2);
                    answer = input1 / input2;
                    printf("______\n");
                      printf("%.2f",answer);
            break;
            
            default:
            printf("\ninvalid choice!");
              
         return 1;
    }
            printf("\n\ntry again? y/n\n");
            printf("choice: ");
            scanf(" %c", & repeat);
                if(repeat != 'y')
                {
                    printf("code terminated\n");
                    return 1;
                }
    }
return 0;    
}
