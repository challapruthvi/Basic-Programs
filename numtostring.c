#include<stdio.h>
#include<math.h>
 
int main() {
  int hundreds = 0;
  int tens = 0;
  int ones = 0;
  int number; //input
   
  while(1) {
    printf("Enter a number between 1-999 (enter 0 to exit): ");
    scanf("%d", &number);
       
    if (number==0) break;
 
    hundreds = number / 100;
    tens = (number - (hundreds * 100)) / 10;
    ones = number - (hundreds * 100) - (tens * 10);
 
    if (hundreds > 0) {
      if      (hundreds == 9) printf("Nine");
      else if (hundreds == 8) printf("Eight");
      else if (hundreds == 7) printf("Seven");
      else if (hundreds == 6) printf("Six");
      else if (hundreds == 5) printf("Five");
      else if (hundreds == 4) printf("Four");
      else if (hundreds == 3) printf("Three");
      else if (hundreds == 2) printf("Two");
      else                    printf("One");
 
      printf(" Hundred ");
      //if (tens == 0 && ones == 0) printf("\n");
    }
 
    if (tens != 1) {  // we have a special case (teens)
      if      (tens == 9) printf("Ninety ");
      else if (tens == 8) printf("Eighty ");
      else if (tens == 7) printf("Seventy ");
      else if (tens == 6) printf("Sixty ");
      else if (tens == 5) printf("Fifty ");
      else if (tens == 4) printf("Forty ");
      else if (tens == 3) printf("Thirty ");
      else if (tens == 2) printf("Twenty ");
 
      if (ones > 0) {
        if      (ones == 9) printf("Nine\n");
        else if (ones == 8) printf("Eight\n");
        else if (ones == 7) printf("Seven\n");
        else if (ones == 6) printf("Six\n");
        else if (ones == 5) printf("Five\n");
        else if (ones == 4) printf("Four\n");
        else if (ones == 3) printf("Three\n");
        else if (ones == 2) printf("Two\n");
        else                printf("One\n");
      } else {
        printf("\n");
      }
    } else {
      if (ones > 0) {
        if      (ones == 9) printf("Nineteen\n");
        else if (ones == 8) printf("Eightteen\n");
        else if (ones == 7) printf("Seventeen\n");
        else if (ones == 6) printf("Sixteen\n");
        else if (ones == 5) printf("Fifteen\n");
        else if (ones == 4) printf("Fourteen\n");
        else if (ones == 3) printf("Thirten\n");
        else if (ones == 2) printf("Twelve\n");
        else                printf("Eleven\n");
      } else {
        printf("Ten\n");
      }
    }
  }
 
  return 0;
}
