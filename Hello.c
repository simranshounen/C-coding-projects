# include<stdio.h>

int main() {
 int n;
 printf("enter your number: ");
 scanf("%d",&n);

 for(int i=10; i>=1; i--){
  printf("%d\n",n*i);
 }
 int sum =0;
 for(int i= 5; i<=50; i++){
  sum += i;
 }
 printf("sum is %d",sum);

return 0;
}