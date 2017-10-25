// stdafx.cpp : source file that includes just the standard includes
// Lab4Clase.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "clase.h"

#include<iostream>
#include<string>
using namespace std;





// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include "clase.h"

#include<iostream>
#include<string.h>
using namespace std;


void Student::setID(int nr){
	this->ID = nr;
}
int Student::getID(){
	return ID;
}

void Student::setNume(char* v){
	this->Nume = v;
}
char* Student::getNume(){
	return Nume;
}

Student::Student(){
	cout << "Constructor implicit 1" << endl;
	Nume = new char[10];
	ID = 0;
}
	

Student::Student(char*n, int p){
	cout << "Contsructor cu parametrii-" << endl;
	Nume = new char[strlen(n) + 1];
	strcpy_s(Nume,strlen(n)+1, n);
	ID = p;
}

Student::Student(Student &f){
	cout << "Copy constructor-" << endl;
	//if (f){
		Nume = new char[strlen(f.Nume) + 1];
		strcpy_s(Nume,strlen(f.Nume)+1, f.Nume);
		ID = f.ID;
	//}
}
Student::~Student(){
	cout << "Destructor" << endl;
	if (Nume != NULL){
		delete[] Nume;
		Nume = NULL;
	}
}




