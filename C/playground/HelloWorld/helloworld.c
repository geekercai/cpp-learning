#include <stdio.h>
int main(){
    printf("hello world\n");
    int i,z;

    for(i=1; i<=9; i=i+1){ //用分号隔开，终止条件应该是“范围”。
        printf("%d\n",i); //不能直接输出数字，不能用f打印整形.
    }
    printf("\n");
    //z = ++i;
    //printf("%d\n",z);//output:11
    //printf("\n");
    //z = i++;
    printf("%d\n",i);
    printf("%d\n",i);//output:10 循环之后i又完成了一次自增，但不符合循环条件故没有打印。


}