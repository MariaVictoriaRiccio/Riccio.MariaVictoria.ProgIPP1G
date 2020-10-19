
#include <stdio.h>
#include <stdlib.h>
/*Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU*/
int main()
{
    char cadena[]={"UTN-FRA"};
    int i = 0;
    int j;

    while(cadena[i]!='\0'){
        i++;
    }
    printf("La cadena investida es:\n\t");
    for (j=i-1; j>=0; j--){
        printf("%c", cadena[j]);
    }

    return 0;
}
