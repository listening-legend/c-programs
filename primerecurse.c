#include <stdio.h>
void prime(int i)
{int j,r; 
if (i <= 1) {
    return;
}
for(j=2;j<i;j++)
 {if(i%j==0)
  return;
  }
  printf("%d, ", i);
}

void main()
{int n1,n2,i;
printf("Enter the upper limit: ");
scanf("%d",&n2);
printf("Enter the lower limit: ");
scanf("%d",&n1);
for(i=n1;i<n2;i++)
prime(i);}