#include <stdio.h>
void search(int n,int m[],int element) {
    int max,min;
    min=0;
    max=n;
    while(1) {
        int position= (min + max)/2;
        if (m[position]==element) {
            printf("position of %d is %d", element, position+1);
            return;}
        else if(element<m[position])
            max=position-1;
        else if (element>m[position])
            min=position+1;
} }
void main() {
    int n,m[100],element,i;
    printf("Enter the no of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        {printf("Enter the element %d:",i+1);
        scanf("%d",&m[i]);}
    printf("Enter the number to be searched: ");
    scanf("%d",&element);
    search(n,m,element);}