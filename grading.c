#include <stdio.h>
int main()
{
    int q1,q2,standing,lecture,exam,lab,item1,item2;
    printf("______MIDTERM PERIOD______\n\n");
    printf("Enter quiz 1: ");
    scanf("%d", & q1);
    printf("number of q1 items: ");
    scanf("%d", & item1);
    printf("\nEnter quiz 2: ");
    scanf("%d", & q2);
    printf("number of q2 items: ");
    scanf("%d",& item2);
    printf("class standing Grade: ");
    scanf("%d", & standing);
    printf("Lecture Grade: ");
    scanf("%d", & lecture);
    lecture = q1 + q2;
    printf("Exam Grade: ");
    scanf("%d", & exam);
    printf("Midterm Lab Grade: ");
    scanf("%d", & lab);
    printf("______grade output_____\n\n");
    printf("QUIZ-1 score [%d/%d] \n",q1,item1);
    printf("QUIZ-2 score [%d/%d] \n",q2,item2);
    printf("Class standing Grade: [%d%]\n", standing);
    printf("Lecture Grade: [%d%]\n",lecture);
    printf("Exam grade: [%d%]\n", exam);
    printf("Midterm Lab Grade: [%d%]\n\n", lab);
    printf("______________________________\n");
    return 0;  
}
