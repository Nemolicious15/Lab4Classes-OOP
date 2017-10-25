#include<iostream>
#include<string>
#include<assert.h>
#include "clase.h"
#include "teste.h"


using namespace std;

void testgetNume(){
	Student s("Alex", 1);

	assert(strcmp(s.getNume(), "Alex")==0);
	cout << "GetNume functioneaza";
}
void testgetID(){
	Student s("Alex", 1);
	assert(s.getID() == 1);
	cout << "GetID functioneaza";
}

void testCopiere(){
	Student s("Alex", 1);
	Student s2(s);
	assert((s.getID == s2.getID) == 1);
	cout << "Constructorul de copiere functioneaza";

}
