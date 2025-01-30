#include <stdio.h>
int main()
{
    int n;
    scnaf("%d",&n);
    printf("Hexadecimal: %X\n",n);
    printf("Octal: %o\n",n);
    return 0;
}