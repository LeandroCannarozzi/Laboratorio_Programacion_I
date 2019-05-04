#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define T 6

int main()
{
    int opcion;
    char seguir = 's';
    Employee lista[T];
    float totalSalario = totalSalarios(lista,T);

    inicializarEmpleados(lista, T);
     do{
        opcion = pedirEntero("1.Alta\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\nElija una opcion: \n");
        switch(opcion)
        {
            case 1:
                printf("ALTAS\n");
                cargarEmpleado(lista,T);
                break;
            case 2:
                printf("MODIFICAR\n");
                modificarEmpleado(lista,T);
                break;
            case 3:
                printf("BAJA\n");
                borrarEmpleado(lista,T);
                break;
            case 4:
                printf("INFORMAR\n");
                ordenarListaEmpleados(lista,T);
                ordenarAlfabeticamente(lista,T);
                mostrarListaEmpleados(lista,T);

                printf("El total de los salarios es de: %f \n", totalSalario);
                printf("El promedio de los salarios es de: %f \n", promedioSalarios(lista,T,totalSalario));
                break;
            case 5:
                printf("Saliendo....");
                return 0;
                break;
            default:
                printf("Error! Reingrese una opcion valida!\n");
                break;
        }
        system("pause");
        system("cls");
        fflush(stdin);
    }while(seguir == 's');
    return 0;
}
