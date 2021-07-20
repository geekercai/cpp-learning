#include <stdio.h>

int main(){
    if (1+1!=2)
        if (1+2!=3)
            printf("first");
        else
            printf("first false");
    else
        printf("second false");
    
}

//作为良好的编程习惯，if-else后面应该加上大括号，防止误解。