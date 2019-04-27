/*Script to read the score of each "N" person using vectors and print the ones
that are above de average */
#include <stdio.h>

int main() {
    int N=5, sum, average, i, score[N];
    for (i=0; i<N; i++){
        printf("Type the grade %d\n",i+1);
        scanf("%d\n", &score[i]);
        printf("%d\n",score[i] );
    }
    average = sum/N;
    printf("Scores above average (%d) are:\n",average);
    for (i=0; i<N; i++){
        if(score[N]>average){
            printf("Score[%d]:%d\n",i+1, score[N]);
        }
    }
    return 0;
}
