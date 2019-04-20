#include <stdio.h>/* code */

// "*" Used on pointers to return the variable's content
// "&" Used on pointers to return the variable's memory adress
int main() {
    int x = 30;
    printf("Value of x: %i\n", x);
    int* y = &x; //y will be a pointer of x's memory adress
    *y = 50; //The content which y is pointing will now be replaced by 50
    printf("New value of x: %i\n", x);
    return 0;
}
