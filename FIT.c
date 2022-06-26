#include <stdio.h>

int main(void) {
    // your code goes here
    int day = 5, i, t = 0, x = 0, outputs[10], arrCounter = 0;
    scanf("%d", &t);
    if (t > 0 && t <= 10) {
        for (i = 1; i <= t; i++) {
            scanf("%d", &x);
            if (x > 0 && x <= 10) {
                outputs[arrCounter] = x * 2 * day;
                arrCounter++;
            }
        }
        for (i = 0; i < arrCounter; i++) {
            printf("%d \n", outputs[i]);
        }
    }
    return 0;
}