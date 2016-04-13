#include "stdio.h"
#include "conio.h"
#include "math.h"
main()
{
 int m,i,k,h=0,leap=1;
 printf("\n");
 for(m=101;m<=200;m++)
 {
  k=sqrt(m);
  for(i=2;i<=k;i++)
  if(m%i==0)
  {
   leap=0;
   break;
  }
  if(leap)
  {
   printf("%-4d",m);/*-4d表示左对齐，占4位*/
   h++;
   if(h%10==0)
    printf("\n");
  }
  leap=1;
 }
 printf("\nThe total is %d",h);
 getch();
 return 0;
}
