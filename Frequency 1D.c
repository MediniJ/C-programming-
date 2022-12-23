#include<stdio.h>

int main()
{ int n,c;
printf("Enter the size");
scanf("%d",&n);
    int a[n],f[n];
    printf("Enter the array");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    f[i]=0;
    }
    
    for(int i=0;i<n;i++){
    if(f[i]==0){
    c=0;
    for( int j= i; j<n;j++){
    if(a[i]==a[j]){
    c++; 
    
    f[j]=-1;
    }
    }
    
    printf("%d %d  ",a[i],c);
    } 
    }
    return 0;
}