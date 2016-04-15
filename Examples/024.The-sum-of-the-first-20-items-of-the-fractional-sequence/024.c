#include<stdio.h>
#include<conio.h>
main()
{
    int n,t,number=20;
    float a=2,b=1,s=0;
    for(n=1;n<=number;n++)
    {
        s=s+a/b;
        t=a;a=a+b;b=t;/*t的作用是把前一个分数分子作为后一个分数分母*/
    }
    printf("sum is %9.6f\n",s);
    getch();
}
