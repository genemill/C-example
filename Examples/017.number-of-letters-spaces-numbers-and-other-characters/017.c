#include "stdio.h"
#include "conio.h"
main()
{
 char c;
 int letters=0,space=0,digit=0,others=0;
 printf("Please input some characters\n");
 while((c=getchar())!='\n')
 {
  if(c>='a'&&c<='z'||c>='A'&&c<='Z')
   letters++;
   else if(c==' ')
    space++;
    else if(c>='0'&&c<='9')
     digit++;
  else
   others++;
 }
 printf("All in all:char=%d space=%d digit=%d others=%d\n",letters,space,digit,others);
 getch();
 return 0;
}
