  #include<stdio.h>
  int main()
  {
   short arr_int[13];
  for (int i = 0; i <= 12; i++) {
    arr_int[i] = 1;
    for (int j = 1; j <= i; j++){
      arr_int[i] *= 10;
    }
  }
  long arr_long[13];
  double arr_double[13];
  int i = 0;
  while (i <= 12) {
    arr_long[i] = 1;
    arr_double[i] = 1;
    int j = 0;
    while (j < i) {
      arr_long[i] *= 10;
      arr_double[i] *= 10;
      j++;
    }
    i++;
  }
  printf("    \t%15s\t%15s\t\t%15s\n", "int", "long", "double");
  i = 0;
  do {
    printf("10^%-2d\t%15d\t%15ld\t\t%15.1f\n", i, arr_int[i], arr_long[i], arr_double[i]);
    i++;
  } while (i <= 12);
  return 0;
}