#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    //define struct
    struct profile{
        char name[40];
        int age;
        float height;
        float weight;
        char nickname[10];
    }typedef profile; //Removes the need of using the word "struct" before declare the variable

    profile end_info;

    end_info.age = 19;

    scanf("%f\n",&end_info.height);
    strcpy(end_info.name, "Heictor Costa");

    printf("%d\n",end_info.age);

    printf("%s\n",end_info.name);
    printf("%f\n",end_info.height );
    return 0;
}
