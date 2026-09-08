#include<stdio.h>
int main(){
    int i=0;
    char s[100];
    scanf("%s",s);
    while(s[i]!='\0'){
        printf("%c",s[i]);
        printf("\n");
        i++;
    }
    return 0;
}