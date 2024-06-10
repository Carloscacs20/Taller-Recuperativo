#include <stdio.h>
#include <string.h>
#include "funciones.h"

void listarProductos(char productos[][3][40],double precio[],int indice[]){
    printf("Numero\t\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d\t\t%s\t\t%s\t\t%s\t\t%.2f\n",indice[i],productos[i][0],productos[i][1],productos[i][2],precio[i]);
    }     
}

void buscarXMarca(char productos[][3][40],double precio[]){
    char marca[40];
    printf("\nIngrese la marca que desee buscar: \n");
    scanf("%s",marca);
    printf("Numero\t\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(productos[i][2], marca) == 0)
        {
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%.2f\n",i+1,productos[i][0],productos[i][1],productos[i][2],precio[i]);
        }
    }
}

void buscarXCategoria(char productos[][3][40],double precio[]){
    char categoria[40];
    printf("\nIngrese la categoria que desee buscar: \n");
    scanf("%s",&categoria);
    printf("Numero\t\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(productos[i][1], categoria) == 0)
        {
             printf("%d\t\t%s\t\t%s\t\t%s\t\t%.2f\n",i+1,productos[i][0],productos[i][1],productos[i][2],precio[i]);
        }
        
    }
}

void buscarXPrecioMenor(char productos[][3][40],double precio[]){
    double precioL;
    printf("\nIngrese el precio limite que desee buscar: \n");
    scanf("%lf",&precioL);
    printf("Numero\t\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for (int i = 0; i < 10; i++)
    {
        if (precio[i] < precioL)
        {
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%.2f\n",i+1,productos[i][0],productos[i][1],productos[i][2],precio[i]);
        }
    }
    
}

void editarProducto(char productos[][3][40],double precio[], int indice[]){
    int numProducto;
    printf("\nIngrese el numero del producto que desea editar\n: ");
    scanf("%d",&numProducto);
    if (numProducto < 1 || numProducto > 10)
    {
        printf("Producto no encontrado\n");
    }
    numProducto--;
    printf("\nIngresar el nuevo nombre del producto: \n");
    scanf("%s", &productos[numProducto][0]);
    printf("\nIngresar la nueva categoria: ");
    scanf("%s", &productos[numProducto][1]);
    printf("\nIngresar la nueva marca: ");
    scanf("%s", &productos[numProducto][2]);
    printf("\nIngresar el nuevo precio: ");
    scanf("%lf", &precio[numProducto]);
    //if (precio<0){
        //printf("NO VALIDO, INGRESE DE NUEVO\n");
        //return;
    //}
    

    printf("\nProducto editado\n");
    }




