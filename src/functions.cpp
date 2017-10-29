#include <stdlib.h>
#include <math.h>

const float FINAL = 2.0;

float zigmoid(int x) {
  return x/(0.5 + abs(x));
};

double cost(float** values) {
  int i = 0; // index of values[i][j]
  double costValue = 0; // return value

  while(values[i][0] != FINAL) {
    costValue += pow(values[i][0]-values[i][1], 2)/2;
    i += 1;
  };
  return costValue;
};

