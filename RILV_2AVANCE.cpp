#include <iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<wchar.h>
#include<math.h>
#include<string>

using namespace std;

struct Alta_de_videojuego {
    int numart, aniolanz, presunit;
    char nombre[40], genero[20], clasificacion[20], consola[20],
        caracteristicas[100], descripcion[100];
    float impuesto,total;
};

int main(){
    Alta_de_videojuego datos[10];
    int opc;
    do {
        printf("\t ***BIENVENIDO A LA TIENDA DE VIDEOJUEGOS***\n");
        printf("1.- Agregar articulo\n");
        printf("2.- Modificar articulo\n");
        printf("3.- Eliminar articulo\n");
        printf("4.- Lista de articulos vigentes\n");
        printf("5.- Limpiar pantalla\n");
        printf("6.- Salir\n");
        printf("...Seleccione una opcion:\n");
        scanf_s("%d", &opc);

        switch (opc) {
        case 1:
            for (int i = 0; i < 3; i++) {
                printf("Numero del articulo: ");
                scanf_s("%d", &datos[i].numart);
                cin.ignore();
                printf("Nombre del videojuego: ");
                gets_s(datos[i].nombre);
                printf("Anio de lanzamiento: ");
                scanf_s("%d", &datos[i].aniolanz);
                printf("Genero: ");
                cin.ignore();
                gets_s(datos[i].genero);
                printf("Clasificacion: ");
                gets_s(datos[i].clasificacion);
                printf("Consola: ");
                gets_s(datos[i].consola);
                printf("Caracteristicas: ");
                gets_s(datos[i].caracteristicas);
                printf("Descripcion: ");
                gets_s(datos[i].descripcion);
                printf("Precio unitario: ");
                scanf_s("%d", &datos[i].presunit);
                printf("Impuesto = 16% \n");
                cin.ignore();
                datos[i].impuesto = 1.16f;
                datos[i].total = datos[i].presunit * datos[i].impuesto;
                printf("Total: %f", datos[i].total);
                printf("\n\n");
            }
            break;
        case 2:
            printf("Opcion no disponible");
            system("pause");
            exit(1);
            break;
        case 3:
            printf("Opcion no disponible");
            system("pause");
            exit(1);
            break;
        case 4:
            printf("LA LISTA ES:");
            for (int i = 0; i < 3; i++) {
                printf("\nNumero del articulo: %d", datos[i].numart);
                printf("\nNombre del videojuego: %s", datos[i].nombre);
                printf("\nAnio de lanzamiento: %d", datos[i].aniolanz);
                printf("\nGenero: %s", datos[i].genero);
                printf("\nClasificacion: %s", datos[i].clasificacion);
                printf("\nConsola: %s", datos[i].consola);
                printf("\nCaracteristicas: %s", datos[i].caracteristicas);
                printf("\nDescripcion: %s", datos[i].descripcion);
                printf("\nPrecio unitario: %d", datos[i].presunit);
                printf("\nImpuesto = 16% ", datos[i].impuesto);
                printf("\nTotal: %f\n\n", datos[i].total);
            }
            break;
        case 5:
            system("cls");
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("Opcion no validada\nSaliendo del programa...");
            system("pause");
            exit(1);
        }
    } while (opc != 6);
}