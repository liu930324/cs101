#include <stdio.h>

int round_func(float f){
    return ((f*2+1)/2);
}
int main(){
    float f =9.18;
    int n=round_func(f);
    printf("%d",n);
    
    return 0;
}
