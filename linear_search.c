#include <stdio.h>
void main()
{int i,j,num,elements[100],var;
 printf("Enter the number of elements: ");
 scanf("%d",&num);
 for(i=0;i<num;i++)
 {printf ("Enter the element %d : ",i+1);
  scanf("%d",&elements[i]);}
 printf ("enter the number to be searched: ");
 scanf("%d",&var);
 for(i=0;i<num;i++)
 if (elements[i]==var)
   printf("the position of the element %d is %d: ",var,i+1);
  }
