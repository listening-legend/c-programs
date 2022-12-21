#include <stdio.h>
int n, a[100],element;
void bin_search(int number,int a[],int element,int min,int max)
{int position=(min+max)/2;
if(a[position]==element)
{printf("position of %d is %d.",element,position+1);
 return;}
else if(a[position]>element)
 max=position-1;
else if (a[position]<element)
 min=position+1;
bin_search(number,a,element,min,max);}
void main()
{int i,min,max;
 printf("Enter the no of elements in the array: ");
 scanf("%d",&n);
printf("Enter the elements in the array:\n");
for(i=0;i<n;i++)
        {printf("Enter the element %d:",i+1);
         scanf("%d",&a[i]);}
 printf("Enter the element to be searched: ");
 scanf("%d",&element);
 min=0;
 max=n;
 bin_search(n,a,element,min,max);}