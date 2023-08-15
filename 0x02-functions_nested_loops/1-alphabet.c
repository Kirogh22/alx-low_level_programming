#include "main.h"

/**
  *print alphabet
  *
  *
  */

void print_alphabet(void) 
{
      char c = 'a';

      while(c <= 'z')
      {
        _putcher(c);
          c++;
      }
      _putcher("/n");
}
