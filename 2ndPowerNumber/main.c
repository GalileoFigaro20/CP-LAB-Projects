#include <stdio.h>

int main() {

    int number;
    scanf("%d", &number);
    printf("Method no. 1 : \n");

    ///Method no.1 : AND operator
    if(!(number & (number-1)))
        printf("The number %d is a power of 2", number);
    else printf("The number %d is not a power of 2", number);

    int i = 1;
    while(i < number)
    {
        i = i <<1;
    }

    printf("\n\n");
    printf("Method no. 2 :  \n");

    ///Method no.2 : BITSHIFT operator
    if(i == number)
        printf("The number %d is a power of 2", number);
    else printf("The number %d is not a power of 2", number);

    return 0;
}