/*Script to read the score of each "N" person using vectors and print the ones
that are above de average */
#include <stdio.h>

int main() {
    int N=5, sum, average, i;
    int score[N];
    for (i=0; i<N; i++){
        printf("Type the grade %d\n",i+1);
        scanf("%d\n", &score[i]);
        sum += score[i];
    }
    return 0;
}
