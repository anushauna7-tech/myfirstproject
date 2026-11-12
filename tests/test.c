#include <stdio.h>
#include <assert.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    assert(add(5, 3) == 8);
    assert(add(10, 20) == 30);

    printf("All tests passed!\n");

    return 0;
}