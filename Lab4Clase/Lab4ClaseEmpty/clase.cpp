
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
/*
void Student::setMaterie(char* v){
	this->Materie = v;
}
char* Student::getMaterie(){
	return Materie;
}

void Student::setNr(int nr){
	this->Nr = nr;
}

int Student::getNr(){
	return Nr;
}
*/

//Student::Student(char*m,int nrm){
	//cout << "Contsructor cu parametrii-" << endl;
	//char** materii = new char*[nrm];

	//for (int i = 0; i < nrm; i++){
		//Materie = new char[strlen(nrm) + 1];
		//strcpy_s(materii[i],);
		
	//}
	
//}
Student::Student(){
	//cout << "Constructor implicit 1" << endl;
	Nume = new char[10];
	ID = 0;
}


Student::Student(char*n, int p){
	//cout << "Contsructor cu parametrii-" << endl;
	Nume = new char[strlen(n) + 1];
	strcpy_s(Nume, strlen(n) + 1, n);
	ID = p;
}

Student::Student(Student &s){
	//cout << "Copy constructor-" << endl;
	//if (f){
	Nume = new char[strlen(s.Nume) + 1];
	strcpy_s(Nume, strlen(s.Nume) + 1, s.Nume);
	ID = s.ID;
	//}
}
Student::~Student(){
	//cout << "Destructor" << endl;
	if (Nume != NULL){
		delete[] Nume;
		Nume = NULL;
	}
}
bool Student::operator==(Student &s){

	if ((strcmp(this->Nume, s.Nume)==0)&&(this->ID == s.ID)) return true;
	else return false;

}

Student& Student::operator=(Student &s){

	this->Nume = new char[strlen(s.Nume) + 1];
	strcpy_s(this->Nume, strlen(s.Nume) + 1, s.Nume);
	this->ID = s.ID;
	return *this;

}



