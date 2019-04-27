#include <stdio.h>/* code */

// "*" Used on pointers to return the variable's content
// "&" Used on pointers to return the variable's memory adress
int main(int argc, char const *argv[]) {
    int *pNumber;
    int Number = 5;
    pNumber = &Number;
    printf("%d\n",Number);
    printf("%d\n",*pNumber);
    printf("%p\n",&pNumber); //%p to print adress

    struct pStruct{
        int i;
        float f;
    }typedef pStruct;


    return 0;
}
