#include <stdio.h>

int main(){
    int num_in, i, num_out;
    scanf("%d",&num_in);

    num_out = (num_in / 16) * 10 + num_in % 16;
    printf("%d",num_out);
    
}