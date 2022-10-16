#include <stdio.h>

int main() {
    float km = 100000, m = 100,process;
    int choice,cm;
    printf("_________ CONVERTER ________\n\n");
    printf("[Enter the number]\n");
    scanf("%d",& cm);
    printf("[%d cm] \n", cm);
    printf("__________choose what process__________\n");
    printf("[1] cm - kilometer | [2] cm - meter\n\n");
    printf("please select what process:\n");
    scanf("%d",& choice);
    switch(choice)
{
    case 1:
    process = cm / km;
    printf("____________________________\n");
    printf(" answer [ %.2f kilometer] ", process);
    break;
    case 2:
    process = cm / m;
    printf("____________________________\n");
    printf(" answer  [ %.2f meter] ", process);
    break;
default:
    printf("error");
}
    return 0;
}
