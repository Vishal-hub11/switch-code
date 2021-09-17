#include<stdio.h>
#include<conio.h>
void main()
{

   int day ;
   printf("enter the day of number ");
   scanf("%d",&day);
   switch(day)
   {
   case 7:
    printf("SUNDAY");
    break;
    case 6:
    printf("SATURDAY");
    break;
    case 5:
    printf("FRIDAY");
    break;
    case 4:
    printf("THURSDAY");
    break;
    case 3:
    printf("WEDNESDAY");
    break;
    case 2:
    printf("TUESDAY");
    break;
    case 1:
    printf("MONDAY");
    break;
    default:

printf("invalid input");

break;

   }
getch();

}
