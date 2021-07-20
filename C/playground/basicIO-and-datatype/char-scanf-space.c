#include <stdio.h>
int main(){
    int i;
    char c;
    scanf("%d %c",&i,&c);
    printf("i=%d,c=%d,c='%c'\n",i,c,c);
    //char能在scanf处直接输入吗？
    scanf("%d%c",&i,&c);
    printf("i=%d,c=%d,c='%c'",i,c,c);
}