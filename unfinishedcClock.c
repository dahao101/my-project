#include <stdio.h>
int main ()
{
    int hour, minutes, seconds;
    printf("************set time************\n");
    printf("set time: ");
    scanf("%d",&hour);
     if (hour>12)
    {
        while(hour, hour >13)
        {
        printf("error! please set to 12 hours system\n");
        printf("set time: ");
        scanf("%d", & hour);
        hour++;
        }
    printf("set minute: \n");
    scanf("%d", &minutes);
    if (minutes>60)
    {
        while(minutes, minutes >60)
        {
        printf("error! minutes don't excede 60!\n");
        printf("set minute: ");
        scanf("%d", & minutes);
        minutes++;
        }
    printf("set second: \n");
    scanf("%d", & seconds);
    while(seconds, seconds >60)
        {
        printf("error! seconds don't excede 60!\n");
        printf("set seconds: ");
        scanf("%d", & seconds);
        seconds++;
        }
        while(1)
        {
            if(hour>12)
            {
                hour++;
                hour = 0;
            }
            if(minutes>59)
            {
                minutes ++;
                minutes = 0;
            }
            if(seconds>59)
            {
                seconds++;
                seconds=0;
            }
        }
        printf("%d,%d,%d",hour,minutes,seconds);
    return 0;
    }
    