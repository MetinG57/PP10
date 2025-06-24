#ifndef LIBUTIL_H
     #define LIBUTIL_H

     static inline int clamp(int v, int lo, int hi) {
         if (v < lo) return lo;  // Wert auf Minimum begrenzen
         if (v > hi) return hi;  // Wert auf Maximum begrenzen
         return v;              // Wert unverändert, wenn im Bereich
     }

     #endif
