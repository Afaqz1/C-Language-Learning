# include<stdio.h>
int occurance(char st[], char c){
    char *ptr = st;
    int count = 0;
    while(*ptr !='\0'){
        if (*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}

int main(){
    char st[] = "Afaq888888";
    int count = occurance(st, '8');
    printf("Occurance = %d", count);
    return 0;
}