#include <stdio.h>

int main() {
    int n, XOR = 0;
    scanf("%d", &n);
    while(n % 2 == 0)
    {
        printf("n must be odd/uneven\n");
        scanf("%d", &n);
    }
    for(int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        XOR = XOR ^ a;
    }

    printf("The number which doesn't have a pair is %d", XOR);
}