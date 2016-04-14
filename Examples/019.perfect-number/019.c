#include "stdio.h"
#include "conio.h"
main()
{
  static int k[10];
  int i,j,n,s;
  for(j=2;j<1000;j++)
  {
    n=-1;
    s=j;
    for(i=1;i<j;i++)
    {
      if((j%i)==0)
      {
        n++;
        s=s-i;
        k[n]=i;
      }
    }
    if(s==0)
    {
      printf("%d is a perfect number",j);
      for(i=0;i<n;i++)
      printf("%d,",k[i]);
      printf("%d\n",k[n]);
    }
  }
  getch();
  return 0;
}
