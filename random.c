#include "random.h"
#include <stdlib.h>

char randchar(void){
  char x;
  int min = 65;
  int max = 90;
 
  int num = (rand() % (max - min + 1)) + min;
    
  x = (char) num ;

  return x;
}
