#include <stdio.h>

int main(void) {
  //Declare Matrix
  int Matrix[8][4];//Matrix made of 8 lines and 4 columns
  int Vector[8]; /*Vector is nothing more than a unidimensional matrix*/

  //Acessing elements inside the Vector
  Vector[2] = 7;
  printf("%d\n", Vector[2]);

  //Acessing elements inside the Matrix
  Matrix[0][2] = 12;
  printf("%d\n", Matrix[0][2]);

  //Vector fullfiling
  int i = 0;
  //From 1 to 5
  for(i=0; i<8; i++)
  printf("\n");

  //From 5 to 1
  for(i=0; i<5; i++)
    Vector[i] = 5-i;

  //Using constants to define the length of a vector
  #define MAX_LENGTH 5
  double LargeVector[MAX_LENGTH];
  for(i=0; i<MAX_LENGTH; i++)
    LargeVector[i] = MAX_LENGTH - i;

  //Copying data from a vector to another
  double LargeVector2[MAX_LENGTH], copy[MAX_LENGTH];
  for(i=0; i<MAX_LENGTH; i++)
    copy[i] = LargeVector2[i];

  //Reading data from a Vector
  double Vet1[MAX_LENGTH];
  for(i=0; i<MAX_LENGTH; i++)
    scanf("%lf", &Vet1[MAX_LENGTH]);
  //Finding the greatest value inside vector
  double great;
  great = Vet1[i];
  for(i=0; i<MAX_LENGTH; i++)
    if (Vet1[i] > great)
      great = Vet1[i];
    printf("The greatest element is: %lf\n",great);
  return 0;
}
