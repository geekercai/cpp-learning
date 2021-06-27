#include <stdio.h>
int main(){
    int num_in, x1num, x10num, x100num;
    scanf("%d",&num_in);
    x1num = num_in % 10; //得到个位数
    x10num = (num_in / 10) % 10; //得到十位数
    x100num = num_in / 100;

    int num_out = x1num * 100 + x10num * 10 + x100num;
    printf("%d",num_out);
}