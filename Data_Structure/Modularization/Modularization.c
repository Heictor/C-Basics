#include <stdio.h>

int main(float a, float b /*variables on scope will be local variables*/)
{
    float result;
    a = 5;
    b = 9;
    result = a+b;
    printf("The result of %f with %f is %f\n",a,b,result );
    return 0;
}

void outro() {
    float a = 5;
    printf("%f\n",a);
    return;
}
