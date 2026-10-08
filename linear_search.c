#include<stdio.h>
int main(){
  int n,i, key, found =0;
printf("enter number of elements:");
scanf("%d", &n);
int arr[n];
printf("enter %d elements:", n);
for(i =0;i<n; i++){
scanf("%d", &arr[i]);
}
printf("enter elements to search:");
scanf("%d", & key);
for(i= 0; i < n;i++){
if(arr[i] ==key){
printf("elements %d founds at position %d\n", key, i+1);
found =1;
break;
}
}
if(found ==0){
printf("elements %d not found\n", key);
}
return 0;
}
