#include<stdio.h>
#include<conio.h>
void hello_world(void)
{
   printf("Hello,world!\n");
}
void three_hellos(void)
{
    int counter;
    for(counter=1;counter<=3;counter++)
        hello_world();/*调用此函数*/
}
void main(void)
{
    three_hellos();/*调用此函数*/
    getch();
}
