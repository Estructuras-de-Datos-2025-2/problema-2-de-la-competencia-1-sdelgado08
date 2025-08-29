#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    int *p;

    scanf("%d", &n);
    p = (int *)malloc(n*sizeof(int)); 

    //ARREGLO
    for(i=0; i<n; i++){
        scanf("%d", p+i);
    }

    //ARREGLO INVERTIDO
    for(i = n-1; i >= 0; i--){
        printf("%d ", *(p+i));
    }

    free(p);
    return 0;
}
