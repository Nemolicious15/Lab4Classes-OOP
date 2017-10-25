
#ifndef CLASE_H
#define CLASE_H

#include <stdio.h>
#include <tchar.h>
//#include "clase.h"

#include<iostream>
#include<string>
using namespace std;
class Student{

private:
	char* Nume;
	int ID;
	//char* Materie;
	//int Nr;
public:
	void setID(int nr);
	int getID();

	void setNume(char* v);
	char* getNume();

	//void setMaterie(char* v);
	//char* getMaterie();

	//void setNr(int nr);
	//int getNr();

	Student();
	Student(char*n, int p);
	//Student(char*m, int nrm);
	Student(Student &s);

	~Student();

	bool operator==(Student &s);
	Student& operator=(Student &s);

	


};
#endif


// TODO: reference additional headers your program requires here
