#include <stdio.h>
     #include <libutil.h>

     int main(void) {
         int result = clamp(15, 0, 10);  // Teste clamp mit v=15, lo=0, hi=10
         printf("clamp(15, 0, 10) = %d\n", result);  // Sollte 10 ausgeben
         return 0;  // Fertig
     }
