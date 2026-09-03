#include<stdio.h>
int main(){
  int n,i;
long fact=1;
printf("number daal:");
scanf("%d",&n);
for(i=1;i<=n;i++){
fact=fact*i;
}
printf("factorial=%ld",fact);
return 0;
}
