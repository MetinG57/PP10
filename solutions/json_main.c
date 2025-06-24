#include <jansson.h>
     #include <stdio.h>

     int main(void) {
         json_t *root = json_pack("{s:i, s:s}", "id", 1, "name", "Alice");  // Erstelle JSON-Objekt
         char *dump = json_dumps(root, 0);  // Konvertiere zu String
         printf("%s\n", dump);  // Gib aus: {"id":1,"name":"Alice"}
         free(dump);  // Speicher freigeben
         json_decref(root);  // JSON-Objekt freigeben
         return 0;  // Fertig
     }
