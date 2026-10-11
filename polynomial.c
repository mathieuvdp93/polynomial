#include <stdio.h>

// int calculate_polynomial(int x);

int main() {

  printf("enter an integer value: ");
  char user_input[10];
  char ui2[10];
  fgets(user_input, 10, stdin);
  printf("enter anotherone: ");
  fgets(ui2, 10, stdin);

  printf("%s\n", user_input);
  printf("%s\n", ui2);

  return 0;
}

// int calculate_polynomial(int x) {}
