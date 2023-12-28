# include<stdio.h>

int main(){
    // FILE *ptr;
    // ptr = fopen("demo.txt","r");
    // char c = fgetc(ptr);
    // printf("The value of my character is %c\n", c);
    FILE *ptr;
    ptr = fopen("putdemo.txt", "w");
    putc('c',ptr);
    return 0;
} 