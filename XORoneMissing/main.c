#include <stdio.h>

int main() {
    int n, XOR1 = 0, XOR2 = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n-1; i++)
    {
        int d;
        scanf("%d", &d);
        XOR2 = XOR2 ^ d;
    }

    for(int i = 1; i <= n; i++)
    {
        XOR1 = XOR1 ^ i;
    }

    printf("The missing number from 1 to %d is %d", n, XOR1 ^ XOR2);
}