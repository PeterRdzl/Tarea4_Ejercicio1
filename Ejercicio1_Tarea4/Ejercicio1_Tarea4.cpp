//  Ejercicio1_Tarea4
//
//  Created by Luis Alfonso Arriaga Quezada on 10/6/14.
//  Copyright (c) 2014 Luis Alfonso Arriaga Quezada. All rights reserved.
//
//  Este programa resuelve una sumatoria de fracciones dadas, para esto el usuario ingresa
//  un numero N de factores a sumar y el NUMERADOR y DENOMINADOR iniciales.
//  Para efectos del calculo del siguiente NUMERADOR y DENOMINADOR se tomara lo siguiente:
//  Si el DENOMINADOR actual es par, el siguiente se calcula como denominador + 3
//  Si el denominador actual es impar el siguiente se calcula como denominador + 1.
//
// CASOS DE PRUEBA:
// A) N = 7, NUM = 3, DEN = 5 = 3/5 + 4/6 + 5/9 + 6/10 + 7/13 + 8/14 + 9/17 = 4.06
// B) N = 3, NUM = 8, DEN = 3, = 8/3 + 9/4 + 10/7 = 6.34


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int iTerminos, iNum, iDen, iTest = 1;
    double dTotal=0.0,dNum,dDen;
    char CReset;
    
    do
    {
        cout << "Ingresa el numero de terminos de la sumatoria" << endl;
        cin >> iTerminos;
        cout << "ingresa el numerador inicial" << endl;
        cin >> iNum;
        cout<< "Ingresa el Denominador inicial" << endl;
        cin>> iDen;
   
    for (int iContador=2; iContador<=iTerminos; iContador++) {
        
        
        if (iTest == 1){
            cout << iNum << '/' <<iDen << " + ";
            dNum = iNum*1.0;
            dDen = iDen*1.0;
            dTotal = dNum/dDen;
            iTest++;
        }
        
        if (iDen % 2 == 0) {
            iDen=iDen+3;
            iNum++;
            dNum = iNum*1.0;
            dDen = iDen*1.0;
            dTotal = dTotal + (dNum/dDen);
        }
        
        else if(iDen % 2 != 0) {
            iDen=iDen+1;
            iNum++;
            dNum = iNum*1.0;
            dDen = iDen*1.0;
            dTotal = dTotal + (dNum/dDen);
        }
        
        if (iContador == iTerminos)
            cout << iNum << '/' << iDen << " = "<< setprecision(3) << dTotal << endl;
        else
            cout << iNum << '/' << iDen << " + ";
    }
        cout << "Desea hacer otra sumatoria (y / n)"<< endl;
        cin >> CReset;
        CReset = tolower(CReset);
    
    } while (CReset == 'y');
    
    
    return 0;
}


