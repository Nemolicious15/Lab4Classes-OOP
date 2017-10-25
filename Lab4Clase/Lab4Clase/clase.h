// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

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
public:
	void setID(int nr);
	int getID();

	void setNume(char* v);
	char* getNume();

	Student();
	Student(char*n, int p);
	Student(Student &f);

	~Student();


};



// TODO: reference additional headers your program requires here
