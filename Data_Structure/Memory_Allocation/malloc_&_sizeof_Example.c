#include <stdio.h>
#include <malloc.h>
#define maxHeight 200

struct WHght{
    int weight;
    int height;
}typedef WHght;

int main(){
    WHght* firstPerson = (WHght*) malloc(sizeof(WHght));;
    firstPerson->weight = 72;
    firstPerson->height = 176;

    printf("weight: %i, height: %i.\n",
    firstPerson->weight,firstPerson->height);
    if(firstPerson->height>maxHeight){
        printf("Height above max limit.\n");
    }else{
        printf("Height minor the max limit.\n");
    }
    return 0;
}
