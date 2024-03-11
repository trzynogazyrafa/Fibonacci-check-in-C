#include <stdio.h>
#include <stdlib.h> 

int isFibonacci(int n) {
    int a = 0, b = 1, c;
    while (a <= n) {
        if (a == n)
            return 1;
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

int main() {
      int i;
    int N;
    printf("Podaj ilość liczb do sprawdzenia: ");
    scanf("%i", &N);
    int *tab=malloc(N*sizeof(int));
    printf("Podaj liczby do sprawdzenia: ");
    for (i=0;i<N;i++){
    scanf("%i", &tab[i]);
      }
      for(i=0;i<N;i++) {
            if (isFibonacci(tab[i])) {
        printf("%i: TAK\n", tab[i]);
            } else {
        printf("%i: NIE\n", tab[i]);
            }
      }
    return 0;
}
