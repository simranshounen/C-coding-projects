# include<stdio.h>

int main() {

for(int i=1; i<=10; i++){
  if(i==3){
    break;
  }
    printf("%d\n",i);
  
}
printf("end");

int n;
printf("enter your number: ");
scanf("%d",&n);
printf("%d\n",n);

if(n % 2 != 0){
  printf("odd\n");
}else{
  printf("even\n");
}
while(1){
  printf("thank you\n");
  break;
}

return 0;
}