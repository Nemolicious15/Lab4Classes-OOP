
#include "clase.h"
#include "teste.h"
#include<iostream>
#include<conio.h>
#include "Operatii.h"
#include "Input-Output.h"
using namespace std;


int main()
{
	//testgetNume();
	//testgetID();
	//testObjVect();
	//testSelSir();

	int l = 0, lim, m;
	char* c = new char[10];
	Student y[10];
	Student x[10];
	
	citiref(l, x, c);
	//cout << "Dati limita pentru selectie:";
	//cin >> lim;
	//SelSir(x, l, lim, y, m);
	Ordonare(x, l);
	//cout << "Vectorul format dupa selectie este= ";
	//afisaref(m, y,c);
	//cout << endl;
	//cout << "Vectorul sortat crescator este= ";
	afisaref(l, x,c);

	delete[] c;
	


	_getch();
	return 0;
}

