#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if(!(number & (number-1)))
        printf("The number %d is a power of 2", number);
    else printf("The number %d is not a power of 2", number);

    return 0;
}