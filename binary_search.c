#include<stdio.h>
int binarysearch(int arr[],int n, int key){
  int low =0, high =n-1, mid;
while(low <= high){
mid =( low+high)/2;
if (arr[mid] == key){
return mid;
}
else if( arr[mid] < key){
low = mid +1;
}
else{
high =mid-1;
}
}
return -1;
}
int main(){
  int n, key, result;
printf("enter size of arrar:");
scanf("%d", &n);
int arr[n];
printf("enter %d elements in sorted order:\n", n);
for(int i=0; i< n; i++){
scanf('%d", &arr[i]);
  }
  printf("enter elements to search :");
scanf("%d", &key);
result = binarysearch(arr,n,key);
if(result!=-1){
printf("elements %d found at index %d\n", key, result);
}else{
printf("elements %d not found in array\n',key);
  }
  return 0;
}
