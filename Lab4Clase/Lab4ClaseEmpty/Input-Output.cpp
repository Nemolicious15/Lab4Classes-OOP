
#include "clase.h"
#include "teste.h"
#include<iostream>
#include<conio.h>
#include "Operatii.h"
#include<fstream>
using namespace std;

void citire(int &n, Student v[]){


	n = 0;
	cout << "n= "; cin >> n;
	for (int i = 0; i < n; i++){
		int ID = 0;
		cout << "ID= "; cin >> ID;
		char* Nume = new char[10];
		cout << "Nume= "; cin >> Nume;
		Student f = Student(Nume, ID);
		v[i] = f;
		delete[] Nume;
	}

}
void afisare(int n, Student v[]){
	for (int i = 0; i < n; i++){
		cout << v[i].getID() << " ";
	}
}
void citiref(int &n, Student v[],char* c){
	cout << "Introduceti numele fisierului datelor de intrare (cu tot cu extensie)= ";
	cin >> c;
	
	
	fstream fin(c, ios::in);
	fin >> n;
	int ID;
	
	for (int i = 0; i < n; i++){
		fin >> ID;
		char* Nume = new char[10];
		fin >> Nume;
		Student f = Student(Nume, ID);
		v[i] = f;
		delete[] Nume;
	}

	fin.close();
}
void afisaref(int n, Student v[], char* c){
	cout << "Introduceti numele fisierului pt afisare(cu tot cu extensie)= ";
	cin >> c;

	fstream fout(c, ios::out);

	for (int i = 0; i < n; i++){
		fout << v[i].getID() << " ";
	}
	fout.close();
}

