#include "stdio.h"
#include "conio.h"
main()
{
 int a,b,num1,num2,temp;
 printf("please input two numbers:\n");
 scanf("%d %d",&num1,&num2);
 if(num1<num2){temp=num1;num1=num2;num2=temp;}/*交换两个数，使大数放在num1上*/
 a=num1;b=num2;
 while(b!=0){temp=a%b;a=b;b=temp;}/*利用辗除法，直到b为0为止*/
 printf("GCD:%d\n",a);
 printf("LCM:%d\n",num1*num2/a);
 getch();
 return 0;
}
