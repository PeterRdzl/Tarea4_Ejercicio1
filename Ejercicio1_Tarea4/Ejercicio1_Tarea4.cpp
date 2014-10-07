//
//  main.cpp
//  Ejercicio1_Tarea4
//
//  Created by Luis Alfonso Arriaga Quezada on 10/6/14.
//  Copyright (c) 2014 Luis Alfonso Arriaga Quezada. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int iTerminos, iNum, iDen, iTest = 1;
    double iTotal;
    
    cout << "Ingresa el numero de terminos de la sumatoria" << endl;
    cin >> iTerminos;
    cout << "ingresa el numerador inicial" << endl;
    cin >> iNum;
    cout<< "Ingresa el Denominador inicial" << endl;
    cin>> iDen;
    
    for (int iContador=2; iContador<=iTerminos; iContador=iContador+1) {
        
        
        if (iTest == 1){
            cout << iNum << '/' <<iDen << " + ";
            iTest++;
        }
        
        if (iDen % 2 == 0) {
            iDen=iDen+3;
            iNum++;
            cout << iNum << '/' << iDen << " + ";
        }
        
        else if(iDen % 2 != 0) {
            iDen=iDen+1;
            iNum++;
            cout << iNum << '/' << iDen << " + ";
        
        }
        
        
    }
    
    return 0;
}
