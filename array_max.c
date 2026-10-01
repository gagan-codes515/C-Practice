#include<stdio.h>
int main(){
  int n,i;
printf("kitne elements chaiye:");
scanf("%d", &n);
int arr{n};
printf("elements daalo :\n");
for(i=0;i< n; i++){
scanf("%d", &arr{i});
}
int max = arr{0};
for(i =1; i< n; i++){
if(arr{i} > max){
max = arr[i];
}
}
printf("sabse bada elements hai: %d", max);
return 0;
}
