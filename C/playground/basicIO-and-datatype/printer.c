#include <stdio.h>
#include <math.h>
int main(){
    printf("abc\r");
    printf("1");
    /*output is "1bc"，参考打字机的原理
    shell一般会给\n加回车，光标复位；而\r是在不换行的情况下光标复位。*/
}