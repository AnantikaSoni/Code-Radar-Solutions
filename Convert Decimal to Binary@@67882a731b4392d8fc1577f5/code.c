#include <stdio.h>
int main(){
    long long int n, bin=0,rem=0,place=1;
    scanf("%lld",&n);
    while(n){
        rem = n % 2;
        n = n / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    printf("%lld\n",bin);
    return 0;
}