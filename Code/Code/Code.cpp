// Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cctype>
using namespace std;



//verificar si una cadena es palindroma de forma recursiva
bool palindromo(char array[], int i, int f) {
	if (i >= f) return true;
	if (array[i] == array[f]) {
		i += 1;
		f -= 1;
		palindromo(array, i, f);
	}
	else return false;
}

int ldearray(char array[]) {
	int l = 0;
	for (int a = 1; a; a++) {
		if (array[a] == '\0') break;
		l++;
	}
		return l;
}

//transformar una cadena a mayuscula de forma recursiva
int transformar(char array[],int lenarray,int a = 0) {
	if (array[a] == '\0') {
		cout << "El nuevo array" << endl;
		for (int c = 0; c < lenarray; c++) {
			cout << array[c] << ", ";
		}
		cout << "\n";
		return 0;
	}
	array[a]=toupper(array[a]);
	a++;
	transformar(array, lenarray,a);
	
}



int main()
{
	char array[] = "bbbbhhhb";
	int lenarray = 0;
	for (char *a = array; *a; a++) lenarray += 1;
	//cout << palindromo(array,0,ldearray(array)) << endl;
	cout << "El array inicial" << endl;
	for (int c = 0; c < lenarray; c++) {
		cout << array[c] << ", ";
	}
	cout << "\n";
	cout << transformar(array,lenarray) << endl;
	system("pause");
	return 0;
}