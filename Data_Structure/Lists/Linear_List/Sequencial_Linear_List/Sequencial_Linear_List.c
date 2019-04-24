#include <stdio.h>
#define MAX 50

typedef int KEYKIND;

typedef struct{
    KEYKIND key;
}REGIS;

typedef struct{
    REGIS A[MAX];
    int nreElem;
}LIST;
