/* cs210sil.c
 * =============================================================
 *    Name: David Petzold
 * Section: T6/7
 * Purpose: Creating a safe input library
 * =============================================================
 */

#include <stdlib.h>
#include <stdio.h>

// Use this function as a template for the others
int getIntegerSafe(){
   int value;
   int scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf("%i", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}

long getLongSafe(){
   long val;
   int scanfReturn = 0;

   scanfReturn = scanf("%li", &val);
   fflush(stdin);

   if (scanfReturn != 1){
      fprintf(stderr, "Bad long input - terminating\n");
      exit(1);
   }
   return val;
}

float getFloatSafe(){
   float val;
   int scanfReturn = 0;

   scanfReturn = scanf("%f", &val);
   fflush(stdin);

   if (scanfReturn != 1){
      fprintf(stderr, "Bad float input - terminating\n");
      exit(1);
   }
   return val;
}

double getDoubleSafe(){
   double val;
   int scanfReturn = 0;

   scanfReturn = scanf("%le", &val);
   fflush(stdin);

   if (scanfReturn != 1){
      fprintf(stderr, "Bad double input - terminating\n");
      exit(1);
   }
   return val;
}

char getCharSafe(){
   char val;
   int scanfReturn = 0;

   scanfReturn = scanf("%c", &val);
   fflush(stdin);

   if (scanfReturn != 1){
      fprintf(stderr, "Bad char input - terminating\n");
      exit(1);
   }
   return val;
}
