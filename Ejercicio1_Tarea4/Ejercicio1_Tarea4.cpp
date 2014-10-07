//  Ejercicio1_Tarea4
//
//  Created by Luis Alfonso Arriaga Quezada on 10/6/14.
//  Copyright (c) 2014 Luis Alfonso Arriaga Quezada. All rights reserved.
//
//  Este programa resuelve una sumatoria de fracciones dadas, para esto el usuario ingresa
//  un numero N de factores a sumar y el NUMERADOR y DENOMINADOR iniciales.
//  Para efectos del calculo del siguiente NUMERADOR y DENOMINADOR se tomara lo siguiente:
//  Si el DENOMINADOR actual es par, el siguiente se calcula como denominador + 3
//  

#include <iostream>
using namespace std;

int main() {
    
    int iTerminos, iNum, iDen, iTest = 1;
    double dTotal=0.0,dNum,dDen;
    
    cout << "Ingresa el numero de terminos de la sumatoria" << endl;
    cin >> iTerminos;
    cout << "ingresa el numerador inicial" << endl;
    cin >> iNum;
    cout<< "Ingresa el Denominador inicial" << endl;
    cin>> iDen;
    
    for (int iContador=2; iContador<=iTerminos; iContador=iContador+1) {
        
        
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
            cout << iNum << '/' << iDen << " = " << dTotal << endl;
        else
            cout << iNum << '/' << iDen << " + ";
    }
    
    return 0;
}
