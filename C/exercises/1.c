#include <stdio.h>
int main(){
    double cmeters, inch;
    int foot,inch_out;

    scanf("%lf",&cmeters);
    inch = ((cmeters / 100) / 0.3048)*12;
    
    foot = inch / 12;
    inch_out = inch - (foot * 12);
    printf("%d %d",foot,inch_out);
}