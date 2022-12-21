#include <stdio.h>
int num,elements[100],var;

void linear(int num,int elements[],int var, int i) {
    if (elements[i]==var) {
        printf("the position of the element %d is %d: ",var,i+1);
        return;}
    
    linear(num,elements,var,++i);}

void main() {
    int i,j;
    printf("Enter the number of elements: ");
    scanf("%d",&num);

    for(i=0;i<num;i++) {
        printf ("Enter the element %d : ",i+1);
        scanf("%d",&elements[i]);}

    printf ("enter the number to be searched: ");
    scanf("%d",&var);
    linear(num,elements,var,0);
    }