#include <iostream>

//Librerias utilizadas para generar adecuadamente el numero aleatorio
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
    //Creacion de la funcion para generar un numero aleatorio
    int opc;
    int pc, t;
    t = time(NULL);
    srand(t);
    pc = rand()%2+1;

        

    do
    {
//Instrucciones de juego
        cout << endl << "INGRESE UNA DE LAS SIGUIENTES OPCIONES" << endl;
        cout << endl << "1. CARA" << endl << "2. CORONA" << endl;
        cout << "Opcion: ";

        cin >> opc;

//Comparacion de la opcion ingresada por el usuario con la generada por la computadora
        switch (pc)
        {

        //Caso en donde la opcion generada por la computadora sea 1
            case 1:
                //Opcion 1 seleccionada por el usuario
                if (opc == 1)
                {
                    cout << endl <<"Opcion usuario: " << opc << endl;
                    cout << "GANO" << endl;
                }
                //Opcion 2 seleccionada por el usuario
                else if (opc == 2)
                {
                    cout << endl << "Opcion usuario: " << opc << endl;
                    cout << "PERDIO" << endl;
                }
                //Mensaje en caso que el usuario no haya ingresado un numero de los cuales se le pidio
                else
                {
                    cout << endl << "El numero que ha ingresado no es valido";
                }
            break;


        //Caso en donde la opcion generada por la computadora sea 2
            case 2:
                //Opcion 1 seleccionada por el usuario
                if (opc == 1)
                {
                    cout << endl << "Opcion usuario: " << opc << endl;
                    cout << "PERDIO" << endl;
                }
                //Opcion 2 seleccionada por el usuario
                else if (opc == 2)
                {
                    cout << endl << "Opcion usuario: " << opc << endl;
                    cout << "GANO" << endl;
                }
                //Mensaje en caso que el usuario no haya ingresado un numero de los cuales se le pidio
                else
                {
                    cout << endl << "El numero que ha ingresado no es valido";
                }
            break;
        
            default:
            break;

        }

        
    }while (opc > 2);



        
        
return 0;
}