#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long get_user_input();
// int calculate_polynomial(int x);

int main() {

  long user_long;

  user_long = get_user_input();

  printf("%ld\n", user_long);
  /*
           leftover from testing the stdin stream with to large input for the
fgets count
char ui2[10]; fgets(user_input, 10, stdin); printf("enter
anotherone: "); fgets(ui2, 10, stdin);

printf("%s\n", user_input);
printf("%s\n", ui2);
  */

  return 0;
}

long get_user_input() {

  long a;
  char buf[10];
  int success;

  do {

    printf("enter a number: ");
    if (!fgets(buf, sizeof buf, stdin)) {

      // reading failed
      exit(1);
    }

    // checks if user didn't enter a number that was longer than buf, since buf
    // is only 10 chars long errno == ERANGE will not be triggered because it
    // would have to be 19 chars long
    if (strchr(buf, '\n') == NULL) {
      int c;
      while ((c = getchar()) != '\n' && c != EOF) {
        ;
      }
      printf("input too long\n");
      success = 0;
      continue;
    }

    errno = 0;
    char *endptr = NULL;

    a = strtol(buf, &endptr, 10);

    if (errno == ERANGE) {
      printf("sorry number is to small or large");
      success = 0;
    } else if (endptr == buf) {
      printf("no valid input was read");
      success = 0;
    } else if (*endptr && *endptr != '\n') {
      printf("input was not fully converted");
      success = 0;
    } else {
      success = 1;
    }
  } while (!success);
  return a;
}

// int calculate_polynomial(int x) {}
