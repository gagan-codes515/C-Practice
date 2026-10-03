#include<stdio.h>
int main(){
  int n,i;
printf("enter numbers of elements:");
scanf("%d", &n);
int arr[n];
printf("enter %d elements; \n", n);
for(i= 0; i< n; i++){
scanf("%d", &arr{i});
}
printf("reversed array is :");
for(i = n -1; i >= 0; i--){
printf("%d", arr[i]);
}
return 0;
}
