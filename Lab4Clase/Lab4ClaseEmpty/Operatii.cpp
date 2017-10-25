#include "clase.h"
#include "Operatii.h"

void SelSir(Student x[], int n, int lim, Student y[], int &m){

	m = 0;
	for (int i = 0; i < n; i++){
		if (x[i].getID() < lim)
			y[m++] = x[i];
	}

}
void Ordonare(Student x[], int n){
	bool swp = true;
	int  j = 0;
	Student aux;
	
	while (swp){
		swp = false;
		j++;
		for (int i = 0; i < n - j; i++){
			int a = x[i].getID();
			int b = x[i + 1].getID();
			if (a > b){
				aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				swp = true;
			}
		}
	}
}