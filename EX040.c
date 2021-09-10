#include <stdio.h>
int main()
{

  short int_arr[13];
  long long_arr[13];
  double double_arr[13];
  // Vong for
  int i = 0;
  int_arr[0] = 1;
  long_arr[0] = 1;
  double_arr[0] = 1;
  int j;
  printf("\nFOR--------------\n");
  printf("%26s%20s%20s\n", "int", "long", "double");
  for (j = 0; j < 13; j++)
  {
    printf("10^%2d=%20d%20ld%20.1f\n", i, int_arr[i], long_arr[i], double_arr[i]);
    i++;
    int_arr[i] = int_arr[i - 1] * 10;
    long_arr[i] = long_arr[i - 1] * 10;
    double_arr[i] = double_arr[i - 1] * 10;
  }
  // vong while
  printf("\nWHILE--------------\n");
  printf("\n%26s%20s%20s\n", "int", "long", "double");
  i = 0;
  int_arr[0] = 1;
  long_arr[0] = 1;
  double_arr[0] = 1;
  while (i < 13)
  {
    printf("10^%2d=%20d%20ld%20.1f\n", i, int_arr[i], long_arr[i], double_arr[i]);
    i++;
    int_arr[i] = int_arr[i - 1] * 10;
    long_arr[i] = long_arr[i - 1] * 10;
    double_arr[i] = double_arr[i - 1] * 10;
  }
  // Vong do-while
  i = 0;
  int_arr[0] = 1;
  long_arr[0] = 1;
  double_arr[0] = 1;
  printf("\nDO-WHILE--------------\n");
  printf("\n%26s%20s%20s\n", "int", "long", "double");
  do
  {
    printf("10^%2d=%20d%20ld%20.1f\n", i, int_arr[i], long_arr[i], double_arr[i]);
    i++;
    int_arr[i] = int_arr[i - 1] * 10;
    long_arr[i] = long_arr[i - 1] * 10;
    double_arr[i] = double_arr[i - 1] * 10;
  } while (i <= 12);
  return 0;
}
