#include<stdio.h>
#include<conio.h>
main()
{
    printf("%d",age(5));
    getch();
}
age(n)
int n;
{
    int c;
    if(n==1)c=10;
    else c=age(n-1)+2;
    return(c);
}

或者

#include<stdio.h>
#include<conio.h>
age(n)
int n;
{
    int c;
    if(n==1)c=10;
    else c=age(n-1)+2;
    return(c);
}
main()
{
    printf("%d",age(5));
    getch();
}
