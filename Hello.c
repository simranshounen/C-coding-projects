# include<stdio.h>

void Hello();
void goodbye();
void namaste();
void konnichiwa();

int main() {  

    printf("enter 4 character : ");
    char ch;
    scanf("%c",& ch);

    if(ch == 'i'){
        namaste();
    }else if(ch == 'j'){
        konnichiwa();
    }else if(ch == 'e'){
        Hello();
    }else{
        goodbye();
    }

return 0;
}

void Hello(){
    printf("HELLO!\n");
}

void goodbye(){
    printf("Goodbye:)\n");
}

void namaste(){
    printf("namsate\n");
}

void konnichiwa(){
    printf("Konnichiwa :)\n");
}

