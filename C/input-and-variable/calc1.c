#include <stdio.h>

int main(){
    int price;

    printf("请输入金额：");
    scanf("%d",&price);
    
    int change = 100 - price;

    printf("找您%d元\n",change);

    return 0;
}