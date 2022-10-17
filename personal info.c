#include <stdio.h>
int main() {
    int year,day,gender,status,strand,birthday,age;
    int now = 2022;
    float ave;
    char first[20],last[20],mid[20],city[20],bar[20],street[20],school[20],month[20];

printf("___________________________________\n");
printf("please enter your name: \n\n");
printf("\[Last name]-");
scanf("%s", last);
printf("\[First name]-");
scanf("%s", first);
printf("\[middle name]-");
scanf("%s", mid);
printf("___________SET YOUR BIRTH DATE___________\n");
   printf("[Month]-");
   scanf("%s", month);
   printf("\[Day]-");
   scanf("%d",& day);
   printf("\[Year]-");
   scanf("%d",& year);
   printf("______What's your Gender?______\n");
   printf("[1] Male [2] Female\n");
   printf("select number of your choice: ");
   scanf("%d",& gender);
   printf("_______CIVIL STATUS______\n");
   printf("[1] Single [2] Married\n");
   printf(" : ");
   scanf("%d",& status);
   printf("_________HOME ADDRESS_______\n");
   printf("[City]- ");
   scanf("%s", city);
   printf("\[barangay]- ");
   scanf("%s", bar);
   printf("\[street]- ");
   scanf("%s",  street);
   printf("________SCHOOL GRADUATED_________\n");
   printf("abbreviation : ");
   scanf("%s", school);
   printf("________H-S STRAND________\n");
   printf("[1] STEM [2] HUMMS [3] TVL [4] GAS\n");
   printf(" : ");
   scanf("%d",& strand);
   printf("_______GEN AVERAGE______\n");
   printf(": ");
   scanf("%f",&  ave);
  printf("__________________________________\n\n");
  printf("Name: %s, %s, %s.\n", last,first,mid);
  age = now - year;
printf("Birth date: %s,%d,%d  age: %d\n",month,day,year,age);
  switch(status)
  {
      case 1:
      printf(" Civil status: Single\n");
break;
case 2:
printf("Civil status: Married\n");
break;
  }
printf("Home address: %s, %s %s\n",street,bar,city);
printf("School Graduated: %s \n", school);
switch(strand)
{
    case 1:
    printf("H-S STRAND: [STEM] \n");
    break;
    case 2: 
    printf("H-S STRAND: [HUMMS] \n");
    case 3:
    printf("H-S STRAND: [TVL] \n");
    break;
    case 4:
    printf("H-S STRAND: [GAS] \n");
    break;
}
printf("General Average: %.2f % \n",ave);
printf("________________________________\n");
    return 0;
}