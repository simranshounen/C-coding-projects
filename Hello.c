# include <stdio.h>

int sum(int a,int b);
void PrintTable(int n);

int main(){
    int n;
    printf("enter your number: ");
    scanf("%d",&n);

    PrintTable(n);


    return 0;
}

  int sum(int x, int y){
    return x, y;
  }
   
  void PrintTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d\n",i*n);
    }
  }