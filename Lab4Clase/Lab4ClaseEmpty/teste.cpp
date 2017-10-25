#include<iostream>
#include<string>
#include<assert.h>
#include "clase.h"
#include "teste.h"
#include "Operatii.h"

using namespace std;

void testgetNume(){
	Student s("Alex", 1);

	assert(strcmp(s.getNume(), "Alex") == 0);
	cout << "GetNume functioneaza" << endl;;
}
void testgetID(){
	Student s("Alex", 1);
	assert(s.getID() == 1);
	cout << "GetID functioneaza" << endl;
}

void testCopiere(){
	Student s("Alex", 1);
	Student s2(s);
	//assert(s.getID == s2.getID);
	cout << "Constructorul de copiere functioneaza"<<endl;

}

void testObjVect(){
	Student s1("Alex", 1);
	Student s2("Rares", 2);
	Student s3("Ana", 3);

	Student x[3];
	x[0].operator=(s1);
	x[1].operator=(s2);
	x[2].operator=(s3);

	assert(x[0].operator==(s1));
	//s1.setID(3);
	//assert(!(x[0]==s1));

	cout << "Creerea vect functioneaza"<<endl;
}
void testSelSir(){
	Student s1("Alex", 3);
	Student s2("Rares", 4);
	Student s3("Ana", 10);

	Student x[3];
	x[0].operator=(s1);
	x[1].operator=(s2);
	x[2].operator=(s3);

	Student y[3]; int m = 0;
	SelSir(x, 3, 5, y, m);
	assert(m == 2);
	assert(y[0].operator==(s1));
	cout << "Selectia functioneaza"<<endl;

}