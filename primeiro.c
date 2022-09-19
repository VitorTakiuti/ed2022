#include <stdio.h>

int main() {
    char c = 'A';
    unsigned int x = 4294967295;
    long int l = 42949672950;

    c++;

    printf("Alo mundo!\n");
    printf("X é: %u \t%p\tTam:%d\n", x, &x, sizeof(x) );
    printf("L é: %ld \t%p\tTam:%d\n", l, &l, sizeof(l) );   
    printf("C é: %d %c\t%p\tTam:%d\n", c, c, &c, sizeof(c) );
    return 0;
}

#include <stdio.h>

int main() {
    int q, val;
    int acum=0;

    printf("Quantos valores? ");
    scanf("%d", &q);

    printf("Lendo %d valores\n", q);

    for(int i=0; i < q; i++ ) {
        scanf("%d", &val);
        acum += val;
    }

    printf("%f", (float)acum/q  );
