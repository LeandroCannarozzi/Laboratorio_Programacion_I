
#include <stdlib.h>
#include "Empleado.h"

#define T 4

int main()
{
    int opcion;

    eEmpleado lista[T];
    eSectores listaSector[T];
    inicializarEmpleados(lista,T);
    hardcodearDatosEmpleados(lista,4);
    hardcodearDatosSectores(listaSector,6);
    do
    {
        opcion = pedirOpcion("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,  T);
                break;
            case 2:
                borrarDatos(lista, T, 3);
                break;
            case 3:
                modificarDatos(lista, T);
                break;
            case 4:
                mostrarListaEmpleados(lista, T);
                mostrarListaSectores(listaSector, T);
                break;
            case 5:
                return 0;
                break;
            default:
                opcion = pedirOpcion("Error! Por favor reingrese una opcion valida.");
                break;
        }
    }while(opcion!=5);

    return 0;
}
