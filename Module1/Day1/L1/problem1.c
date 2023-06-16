
#include <stdio.h>

int findMax(int a, int b) {
    int big;

    if (a > b) {
        big = a;
    } else {
        big = b;
    }
    return big;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int ans = findMax(a, b);
    printf("The maximum number is: %d\n", ans);

    return 0;
}
