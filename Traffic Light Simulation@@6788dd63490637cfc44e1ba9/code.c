#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case (ch=='R'):
            printf("Stop\n");
            break;
        case (ch=='G'):
            printf("Go\n");
            break;
        case (ch=='Y'):
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }
    return 0;
}