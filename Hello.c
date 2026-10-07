# include<stdio.h>

int main() {
int n ;
printf("enter your number");
scanf("%d",&n);

int sum = 0;
for(int  j=n; j>=1; j--){
  sum += j;
   printf("%d\n",j);
}
printf("sum is %d",sum);
for(int i=1; i<=10; i++){
  printf("%d\n",i*n);
}

// for(int i=n; i>=1; i--){
//   printf("%d\n",i);
// }
return 0;
}