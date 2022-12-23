#include<stdio.h>
const int m=3;
const int n=3;
 

void print(int arr[m][n]){
int i,j;
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d ",arr[i][j]);}
printf("\n");
}
}
void scan(int arr[m][n]){
int i,j;
 printf("enter the elements");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&arr[i][j]);
}



int main()
{
   int b[m][n];
    scan(b);
    print(b);
    return 0;
}