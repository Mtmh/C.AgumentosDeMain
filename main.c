#include <stdio.h>


// argc == a cuantos argumentos hay
// envp == rutas del entorno
int main(int argc, char *argv[], char *envp[]) // Tambien se puede declarar con doble puntero
                                // Y quitanto el arreglo
{
    for (int i = 0; i < argc; ++i){
        printf("Argumento[%d]: %s\n", i , argv[i]);
    }
    (void) envp;
    return 0;
}
