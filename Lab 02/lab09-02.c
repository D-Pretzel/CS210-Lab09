/* lab09-02.c
 * =============================================================
 *    Name:
 * Section:
 * Purpose: Tests your lab09-02 
 * =============================================================
 */

#include <stdio.h>
#include "cs210sil.h"

int main(void) {

   int    intVar = 0;
   long   longVar = 0;
   float  floatVar = 0.0;
   double doubleVar = 0.0;
   char   charVar = ' ';

   // Testing Integers
   printf("enter an integer value (or not): ");
   intVar = getIntegerSafe();
   printf("you entered a good integer value: %i\n", intVar);

   // Testing Longs
   printf("enter a long value (or not): ");
   longVar = getLongSafe();
   printf("you entered a good long value: %ld\n", longVar);

   // Testing Floats
   printf("enter a float value (or not): ");
   floatVar = getFloatSafe();
   printf("you entered a good float value: %f\n", floatVar);

   // Testing Doubles
   printf("enter a double value (or not): ");
   doubleVar = getDoubleSafe();
   printf("you entered a good double value: %f\n", doubleVar);

   // Testing Char
   printf("enter a char value (or not): ");
   charVar = getCharSafe();
   printf("you entered a good char value: %c\n", charVar);

   return 0;
}