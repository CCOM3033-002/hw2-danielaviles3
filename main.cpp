
// escriba su nombre, username en github y numero de estudiante en el header
/*  Asignacion 2: Suma de Fracciones
   Nombre: Daniel Aviles
   Num Est. 801-24-5453
   tutor: Lillian Gonzales
   web link: https://congenial-goldfish-6v55xq6vgrh4wx5.github.dev/
*/

#include<iostream>
using namespace std;

int main()
{
  
  //Creando los varaiables que representan el numerador y denominador de las dos fracciones
  int numerador1, denominador1, numerador2 , denominador2;
    
    //Explicando lo que hace el programa
    cout << "Este programa suma dos fracciones." << endl;
    
    //Aqui pido al usario que me de el numerador y denominador de las dos fracciones

    cout << "Entre el numerador de la 1ra fracción: ";
    cin >> numerador1;
    
    cout << "Entre el denominador de la 1ra fracción: ";
    cin >> denominador1;
    
    cout << "Entre el numerador de la 2da fracción: ";
    cin >> numerador2;
    
    cout << "Entre el denomindaor de la 2da fracción: ";
    cin >> denominador2;
    
    //Ahora que cada numerador y denominador tiene un valor, voy a buscar la suma de las dos fracciones
    /* La formula para sumar las fracciones es : (numerador1*denominador2) + (numerador2 * denominador1) / 
    denominador2 * denominador1*/
    
    /*Para que la suma se desplega como una fracción nececito separar el numerador y denominador de la suma como
    variables individuales */
    double numerador3 = (numerador1 * denominador2) + (numerador2 * denominador1);
   
    double denominador3 = denominador2 * denominador1;
    
    //Separe el numerador y denominador enter una "/"
    cout << "La suma es: " << numerador3 << "/" << denominador3 << endl;
  
  return 0;
}
