#include<stdio.h>
int main(){
  int num,originalNum,reverseNum=0,remainder;
printf("enter a number:");
scanf("%d",&num);
originalNum=num;
while(num !=0){
remainder=num% 10;
reversedNum=reversedNum* 10 + remainder;
num /=10;
}
if(originalNum==reversedNum){
printf("%d is a palindrone number.\n",originalNum);
}else{
printf("%d is not a palindrone number.\n",originalNum);
}
return 0;
}
