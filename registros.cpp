#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

typedef struct Ponto {
    int x;
    int y;
};

typedef struct Circulo {
    Ponto centro;
    float raio;
};

float calcularAreaCirculo(Circulo c){
    return 3.1415*(c.raio*c.raio);
}

float calcularPerimetroCirculo(Circulo c){
    return 2*3.1415*c.raio;
}

bool pontoDentroDoCirculo(Circulo c, Ponto p){
    float distancia = pow((c.centro.x - p.x),2) + pow((c.centro.y - p.y),2);
    if(distancia > pow(c.raio,2))
        return false;
    return true;
}

int main(){
    Ponto p;
    p.x=15;
    p.y=11;
    Circulo c;
    c.centro.x=15;
    c.centro.y=12;
    c.raio=4.5;
    cout << "A Area do circulo e " << calcularAreaCirculo(c) << endl;
    cout << "O perimetro do circulo e " << calcularPerimetroCirculo(c) << endl;
    if(pontoDentroDoCirculo(c,p))
        cout << "Ponto dentro da circunferencia" << endl;
    else
        cout << "Ponto fora da circunferencia" << endl;
    return 0;
}

