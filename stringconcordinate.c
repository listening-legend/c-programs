#include<stdio.h>
void main()
{char a[100],b[100],result[500];
int i,j=0,r=0;
 printf("Enter the first string: ");
 scanf("%s",a);
 printf("Enter the second string: ");
 scanf("%s",b);
 for(i=0;a[i]!='\0';i++)
  {result[j]=a[i];
   j++;
   r=j;}
  for(i=0;b[i]!='\0';i++)
   {result[r]=b[i];
    r++;}
  result[r]='\0';
  puts(result);}