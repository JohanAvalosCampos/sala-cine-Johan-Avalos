#include "cine.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void cine::showMenu() {
    int opcion;
    int salaOpcion;
    int horarioOpcion;

    do {
        system("cls");
        cout <<"????????????? ????????????? ????????????? ?????????????\n"
            << "?           ? ?           ? ?           ? ?           ?\n"
            << "?  ? ? ? ?  ? ?  ? ? ? ?  ? ?  ? ? ? ?  ? ?  ? ? ? ?  ?\n"
            << "?           ? ?           ? ?           ? ?           ?\n"
            << "????????????? ????????????? ????????????? ?????????????\n" << endl;
        cout << "Bienvenidos a AVALOPOLIS" << endl;
        cout << "Menu Principal" << endl;
        cout << "Digite 1 si desea entrar al Archivo" << endl;
        cout << "Digite 2 si desea tener información sobre las películas (horarios/salas)" << endl;
        cout << "Digite 4 para salir" << endl;
       

        cout <<"????????????? ????????????? ????????????? ?????????????\n"
            << "?           ? ?           ? ?           ? ?           ?\n"
            << "?  ? ? ? ?  ? ?  ? ? ? ?  ? ?  ? ? ? ?  ? ?  ? ? ? ?  ?\n"
            << "?           ? ?           ? ?           ? ?           ?\n"
            << "????????????? ????????????? ????????????? ?????????????\n" << endl;
        cin >> opcion;
        switch (opcion) {
        case 1: {
            system("cls");
            int subOpcion;
            do {
                cout << "1: Acerca Del creador" << endl;
                cout << "3: SALIR" << endl;
                cin >> subOpcion;

                switch (subOpcion) {
                case 1:
                    
                    cout << "Elegiste informacion acerca del estudiante a cargo del proyecto" << endl;
                    cout << "Nombre: Johan Francisco Avalos Campos" << endl;
                    cout << "Edad: 21 años" << endl;
                    cout << "Ingenieria en sistemas 2024" << endl;
                    break;
                case 3:
                    cout << "VOLVIENDO AL MENU PRINCIPAL" << endl;
                    break;
                default:
                    cout << "OPCION NO VALIDA" << endl;
                }
            } while (subOpcion != 3);
            break;
        }
        case 2: {
            cout << "Has seleccionado la opción para información sobre películas." << endl;
            int subOpcion2;
            do {
                system("cls");
                cout << "PELICULAS DISPONIBLES EN CARTELERA ESTE MES" << endl;
                cout << "Digite el NUMERO de la película para tener INFORMACION" << endl;
                cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;

                cout << "1: Transformers One - 13 de septiembre de 2024" << endl;
                cout << "\"Transformers One\" es una próxima película animada de la franquicia \"Transformers\".\n"
                    << "Dirigida por Josh Cooley, conocida por su trabajo en \"Toy Story 4\",\n"
                    << "esta película se centra en el origen de los Autobots y los Decepticons en su planeta natal, Cybertron.\n" << endl;

                cout << "-------------------------------------------------------------------------------------------------------" << endl;

                cout << "2: The Killer's Game - 20 de septiembre de 2024" << endl;
                cout << "\"The Killer's Game\" es una próxima película de acción y comedia negra basada en la novela homónima de Jay Bonansinga.\n" << endl;

                cout << "-------------------------------------------------------------------------------------------------------" << endl;

                cout << "3: Beetlejuice Beetlejuice - 27 de septiembre de 2024" << endl;
                cout << "\"Beetlejuice Beetlejuice\" es la esperada secuela de la icónica película de 1988 \"Beetlejuice\".\n"
                    << "Esta secuela promete traer de vuelta la mezcla única de comedia oscura y elementos sobrenaturales\n"
                    << "que hicieron famosa a la película original, con el estilo distintivo de Tim Burton.\n" << endl;

                cout << "4: SALIR" << endl;
                cin >> subOpcion2;

                string pelicula;
                int precio;

                switch (subOpcion2) 
                {
                case 1:
                    pelicula = "Transformers One";
                    precio = 4000;
                    break;
                case 2:
                    pelicula = "The Killer's Game";
                    precio = 3500;
                    break;
                case 3:
                    pelicula = "Beetlejuice Beetlejuice";
                    precio = 4200;
                    break;
                case 4:
                    cout << "VOLVIENDO AL MENU PRINCIPAL" << endl;
                    continue;
                default:
                    cout << "OPCION NO VALIDA" << endl;
                    continue;
                }

                cout << "Seleccione el horario de la pelicula:" << endl;
                cout << "1: 10:00 AM" << endl;
                cout << "2: 01:00 PM" << endl;
                cout << "3: 04:00 PM" << endl;
                cout << "4: 07:00 PM" << endl;
                cin >> horarioOpcion;

                string hora;
                switch (horarioOpcion) 
                {
                case 1:
                    hora = "10:00 AM";
                    break;
                case 2:
                    hora = "01:00 PM";
                    break;
                case 3:
                    hora = "04:00 PM";
                    break;
                case 4:
                    hora = "07:00 PM";
                    break;
                default:
                    cout << "OPCION NO VALIDA" << endl;
                    continue;
                }

                seating(pelicula, hora, precio);
            } while (subOpcion2 != 4);
            break;
        }
        case 4:
            cout << "Gracias por su visita. ¡Hasta luego!" << endl;
            break;
        default:
            cout << "OPCION NO VALIDA" << endl;
        }
    } while (opcion != 4);
}

void cine::seating(const string& pelicula, const string& hora, int precio)
{
    const int FILAS = 9;
    const int COLUMNAS = 12;

    char asientoVacio = 176;  
    char asientoReservado = 177;  
    char asientoOcupado = 178;  

    int columna[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; 
    char matriz[FILAS][COLUMNAS];  // Matriz de asientos

    for (int i = 0; i < FILAS; ++i)
    {
        for (int j = 0; j < COLUMNAS; ++j)
        {
            matriz[i][j] = asientoVacio;
        }
    }

    int asientos;
    int fi, col;

sillas:
    cout << "Los asientos vacíos se identifican con un " << asientoVacio << endl;
    cout << "Recuerda que solo puedes elegir los asientos vacíos" << endl;

    cout << "   ";
    for (int j = 0; j < COLUMNAS; ++j) 
    {
        cout << setw(4) << columna[j];
    }
    cout << endl;

    for (int i = 0; i < FILAS; ++i)
    {
        cout << setw(2) << (i + 1) << " ";
        for (int j = 0; j < COLUMNAS; ++j)
        {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }

    cout << "\nASIENTOS DISPONIBLES (SOLO PUEDE RESERVAR MAXIMO 10)" << endl;
    cout << "¿Cuántos asientos desea reservar? ";
    cin >> asientos;
    if (asientos > 0 && asientos <= 10)
    {
        for (int z = 1; z <= asientos; ++z) 
        {
            cout << "Seleccione los asientos deseados (" << z << "/" << asientos << ")" << endl;
            cout << "Fila: ";
            cin >> fi;
            cout << "Columna: ";
            cin >> col;

            if ((fi > 0 && fi <= FILAS) && (col > 0 && col <= COLUMNAS))
            {
                if (matriz[fi - 1][col - 1] == asientoVacio) 
                {
                    matriz[fi - 1][col - 1] = asientoReservado;
                    cout << "Asiento reservado en fila " << fi << ", columna " << col << "." << endl;
                }
                else 
                {
                    cout << "El asiento ya está reservado o comprado." << endl;
                    --z;
                }
            }
            else 
            {
                cout << "Este asiento no existe." << endl;
                --z;
            }

            cout << "   ";
            for (int j = 0; j < COLUMNAS; ++j) 
            {
                cout << setw(4) << columna[j];
            }
            cout << endl;

            for (int i = 0; i < FILAS; ++i) 
            {
                cout << setw(2) << (i + 1) << " ";
                for (int j = 0; j < COLUMNAS; ++j)
                {
                    cout << setw(4) << matriz[i][j];
                }
                cout << endl;
            }
        }

        char confirmar;
        cout << "¿Desea confirmar la compra de los asientos reservados? (S/N): ";
        cin >> confirmar;
        if (confirmar == 'S' || confirmar == 's') 
        {
            for (int i = 0; i < FILAS; ++i) 
            {
                for (int j = 0; j < COLUMNAS; ++j) 
                {
                    if (matriz[i][j] == asientoReservado)
                    {
                        matriz[i][j] = asientoOcupado;
                    }
                }
            }
            cout << "Compra confirmada." << endl;

            cout << "\nINFORMACION DE SU COMPRA" << endl;

            cout << "Película: " << pelicula << endl;

            cout << "Hora: " << hora << endl;

            cout << "Precio por boleto: " << precio << endl;
        }
        else 
        {
            cout << "Reserva cancelada." << endl;
            for (int i = 0; i < FILAS; ++i)
            {
                for (int j = 0; j < COLUMNAS; ++j) 
                {
                    if (matriz[i][j] == asientoReservado)
                    {
                        matriz[i][j] = asientoVacio;
                    }
                }
            }
        }

        cout << "   ";

        for (int j = 0; j < COLUMNAS; ++j)
        {
            cout << setw(4) << columna[j];
        }
        cout << endl;


        for (int i = 0; i < FILAS; ++i) 
        {
            cout << setw(2) << (i + 1) << " ";
            for (int j = 0; j < COLUMNAS; ++j) 
            {
                cout << setw(4) << matriz[i][j];
            }
            cout << endl;
        }


        char volverMenu;
        cout << "¿Desea volver al menú principal? (S/N): ";
        cin >> volverMenu;
        if (volverMenu == 'N' || volverMenu == 'n')
        {
            cout << "Gracias por su visita. ¡Hasta luego!" << endl;
            exit(0);
        }
    }
    else 
    {
        cout << "Número de asientos no válido. Inténtelo de nuevo." << endl;
        goto sillas;
    }
}
