#include <stdio.h>
     #include <math.h>
     #include "point.h"

     int main(void) {
         Point p = {3.0, 4.0};  // Punkt bei (3, 4)
         double distance = sqrt(p.x * p.x + p.y * p.y);  // Abstand vom Ursprung
         printf("Abstand von (%.1f, %.1f) zum Ursprung: %.2f\n", p.x, p.y, distance);
         return 0;  // Fertig
     }
