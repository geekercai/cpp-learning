#include <stdio.h>
int main(){
    printf("hello world\n");
    int i;

    for(i=1; i<=9; i=i+1){ //用分号隔开，终止条件应该是“范围”。
        printf("%8f\n",i); //不能直接输出数字，不能用f打印整形.
    }
}