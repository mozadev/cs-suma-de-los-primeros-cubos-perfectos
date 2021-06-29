#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;


int sumar_cubos(int n)
{
	int a = n * n * n;
	if (n == 1)
		return 1;
	else
		return a + sumar_cubos(n - 1);
}






int main()
{
	int num;
	string salida ="";
	do {
		cout << "ingrese un numero: " << endl;
		cin >> num;
		int sumacubos=sumar_cubos(num);
		cout << "suma cubos: " <<sumacubos<< endl;
		cout << "desea salir: si o no  " << endl;
		cin >> salida;


	} while (salida == "no");

	

	
}