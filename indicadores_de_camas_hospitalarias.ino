#include <LiquidCrystal.h>  //Librerias 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);// objeto LCD 12*2 y los pines en los cuales estan conectados.

    
/*Declaracion de las variables a utilizar*/

float num1;
float num2;
float num3;
float num4;
float numdias;
float numddias;
float numdiaspaciente;
float numdiascama;
float numcamaocupada;
float dotnormal;
float numegre;
float num5;
float resultado;
float division;
int multiplicacion;
int diaspaciente;
int diascama;
int opciones=1;
int opcion;
int lista [5];
    
void setup (){
  //Inicio de la LCD 
lcd.begin (16,2); 
  
  }
void loop (){
  
lcd.setCursor (5,0);
lcd.print("Bienvenido al programa de indicadores de camas hospitalarias");

      /* Inicio de la funcion while*/
    while(opciones == 1) {
        printf(" Camas por mil habitantes" );/* indicador */
        printf("\n2. Razon de distribucion de camas");/* indicador */
        printf ("\n3. Indice ocupacional");/* indicador */
        printf ("\n4. Indice de rotacion de camas");/* indicador */
        printf ("\n5. Salir", 200);/* indicador */
        printf("\nSeleccione una opcion: "); //seleccion de opciones
        scanf("%d", &opcion);
    
    if(opcion == 1){ // Opcion para indicar la cantidad de camas por mil habitantes
            printf("Por favor introduzca el numero de camas:");/* indicador */
            scanf ("%f",&num1); /* lee un numero*/
            printf("Por favor introduzca el numero de habitantes:"); /* indicador*/
            scanf ("%f",&num2); /* lee un numero*/
            resultado=num1/num2; // asigna el resultado a division  
            multiplicacion= resultado*1000;
            printf ("El total de las camas por mil habitantes es %d\n",multiplicacion); //Imprime el total de camas 
        } /* fin de if */
        
    else if(opcion == 2){ // Opcion para indicar la razon de distribucion de camas
        printf("Por favor introduzca el numero de camas por servicio: "); /* indicador */
        scanf ("%f",&num3); /* lee un numero*/
        printf("Por favor introduzca el numero total de camas del hospital: "); /* indicador */
        scanf ("%f",&num4); /* lee un numero*/
        resultado=num3/num4; /* asigna el resultado a division */ 
        multiplicacion= resultado*100;
        printf ("El porcentaje de camas es de:  %d\n",multiplicacion); //Imprime el porcentaje de camas 
    } /* fin de if */
    
    else if(opcion == 3){ //Opcion para indicar el indice ocupacional 
        printf("Dias paciente: ");
        printf("Por favor introduzca el numero de dias: ");  /* indicador */
        scanf ("%f",&numdias); /* lee un numero*/
        printf("Por favor introduzca el numero de camas ocupadas: "); /* indicador */
        scanf ("%f",&numcamaocupada); /* lee un numero*/ 
        diaspaciente= numdias*numcamaocupada; // asigna el resultado de la multiplicacion 
        printf ("La multiplicacion de dias paciente es:  %d\n",diaspaciente); // Imprime la multiplicacion
        printf("Dias cama: ");
        printf("Por favor introduzca el numero de dias: "); /* indicador */
        scanf ("%f",&numddias); /* lee un numero*/
        printf("Por favor introduzca la dotacion normal de camas: ");  /* indicador */
        scanf ("%f",&dotnormal); /* lee un numero*/
        diascama= numddias*dotnormal; // asigna el resultado de la multiplicacion
        printf ("La multiplicacion de dias cama es:  %d\n",diascama);  // Imprime la multiplicacion
        printf ("Por favor introduzca el numero de dias paciente:");  /* indicador */
        scanf ("%d",&numdiaspaciente);  // lee un numero 
        printf ("Por favor introduzca el numero de dias cama:"); /* indicador */
        scanf ("%d",&numdiascama); // lee un numero
        resultado= numdiaspaciente/numdiascama;  //asigna el resultado de la division
        multiplicacion= resultado*100;
        printf ("El indice ocupacional es de:  %d\n",multiplicacion); //Imprime el indice ocupacional
    } /* fin de if */
    
    else if(opcion == 4){  // Opcion para indicar el indice de rotacion de camas
    printf("Por favor introduzca el numero de egresos: ");  /* indicador */
    scanf("%f",&numegre); // lee un numero
    printf("Por favor introduzca el numero de camas: "); /* indicador */
    scanf("%f",&num5); // lee un numero
    division=numegre/num5;  //asigna el resultado de la division
    printf ("El indice de rotacion de camas es de: %f\n",division); //Imprime el indice de rotacion de camas
    } /* fin de if */
    
        else if(opcion == 5){ // Opcion para salir del programa
        opciones = 2;
    } /* fin de if */
        
}   
}
    
