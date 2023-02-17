#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    t = 31;
    if (t > 10) {
        printf("www");
        if (t > 20) {
            printf("123");
        }
        if (t > 30) {
            printf("ddd\nt = %d", t);
        }
    } else {
        printf("ggg");
    }

    return 7;
}