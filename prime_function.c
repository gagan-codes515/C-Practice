#include<stdio.h>
int isprime(int n){
  int i;
if(n <=1){
return 0;
}
for(i = 2; i < n; i++){
if(n % i ==0){
return 0;
}
}
return 1;
}
int main(){
  int num;
printf("number daalo :");
scanf("%d", &num);
if(isprime(num)){
printf("prime hai");
  }
  else{
printf("prime nahi hai");
  }
return 0;
}
