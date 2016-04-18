#include<stdio.h>
#include<conio.h>
main()
{
   long a,b,c,d,e,x;
   scanf("%ld",&x);
   a=x/10000;
   b=x%10000/1000;
   c=x%1000/100;
   d=x%100/10;
   e=x%10;
   if(a==e&&b==d)/*个位等于万位并且十位等于千位*/
    printf("this number is a Palindrome number\n");
   else
    printf("this number is not a Palindrome number\n");
   getch();
}
