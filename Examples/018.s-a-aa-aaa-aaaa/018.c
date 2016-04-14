#include "stdio.h"
#include "conio.h"
main()
{
 int a,n,count=1;
 long int sn=0,tn=0;
 printf("Please input a and n\n");
 scanf("%d %d",&a,&n);
 printf("a=%d,n=%d\n",a,n);
 while(count<=n)
 {
  tn=tn+a;
  sn=sn+tn;
  a=a*10;
  ++count;
 }
 printf("a+aa+...=%ld",sn);
 getch();
 return 0;
}
