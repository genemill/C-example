#include<stdio.h>
#include<conio.h>
void main()
{
   char letter;
   printf("please input the first letter of someday\n");
   while((letter=getch())!='Y')
   {
       switch(letter)
       {
           case 'S':printf("please input second letter\n");
           if((letter=getch())=='a')
            printf("Saturday\n");
           else if((letter=getch())=='u')
            printf("Sunday\n");
            else printf("data error\n");
           break;
           case 'F':printf("Friday\n");break;
           case 'M':printf("Monday\n");break;
           case 'T':printf("please input second letter\n");
           if((letter=getch())=='u')
            printf("Tuesday\n");
           else if((letter=getch())=='h')
            printf("Thursday\n");
           else printf("data error");
           break;
           case 'W':printf("Wednesday\n");break;
           default:printf("data error");
       }
   }
   getch();
}
