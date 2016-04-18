#include<stdio.h>
#include<conio.h>
main()
{
    float n,s=0,t=1;
    for(n=1;n<=20;n++)
    {
        t*=n;//t=t*n
        s+=t;//s=s+t
    }
    printf("1+2!+3!+...+20!=%e\n");
    getch();
}
