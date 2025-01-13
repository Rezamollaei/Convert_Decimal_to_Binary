#include <stdio.h>


void binary(int n){
    int p=1 ;
    for( ; 2*p <= n ; p = p*2);
    while (p > 0){
        if ( p <= n) {
            printf("1");
            n = n -p;
        }
        else printf("0");
        p = p/2;

    }
    printf("\n");


}
int main(void) {
    int v;
    printf("Insert positive number: ");
    scanf("%d",&v);
    printf("Binary conversion: ");
    binary(v);
// function call
    return 0;
}