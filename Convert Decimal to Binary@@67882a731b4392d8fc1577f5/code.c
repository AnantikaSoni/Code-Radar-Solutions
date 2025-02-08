#include <stdio.h>
int main(){
    int n, bin=0,rem=0,place=1;
    scanf("%d",&n);
    while(n){
        rem = num%2;
        num = num/2;
        bin = bin + (rem * place);
        place =  place *10;
        printf("%d\n",bin);
    }
    return 0;
}