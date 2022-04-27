#pragma once
#include "String.h"

using namespace std;
using namespace System::Drawing;

class cAdd {
private:
	int* arregloConjunto;
	int contador;

	int* arregloMCD;
	int MCD;

	int Nivel;
	int* auxiliar;
	int* arregloNivel;

	int* CantidaNivel;
	int determinarNivel;

public:
	cAdd() {
		contador = 0;
		MCD = 0;
		Nivel = 0;
		determinarNivel = 0;
	}
	~cAdd() {
		delete arregloConjunto;
		delete arregloMCD;
		delete arregloNivel;
		delete auxiliar;
		delete CantidaNivel;
	}
	void SET_Contador(int numero) {
		for (int i = 0; i < numero; i++)
			if (numero % (i + 1) == 0)
				contador++;
	}

	void CrearArregloConjunto(int numero) {
		arregloConjunto = new int[contador];
		int determinar = 0;

		for (int i = 0; i < numero; i++)
			if (numero % (i + 1) == 0) {
				arregloConjunto[determinar] = (i + 1);
				determinar++;
			}
	}

	void SET_MCD(int numero) {
		for (int i = 0;i < numero;i++) {
			if (numero % (i + 1) == 0 && numero != 1 && i != 0) {
				numero = numero / (i + 1);
				MCD++;
				i = 0;
			}
		}
	}

	void CrearArregloMCD(int numero) {
		arregloMCD = new int[contador];
		int determinarMCD = 0;
		for (int j = 0; j < numero; j++) {
			if (numero % (j + 1) == 0 && numero != 1 && j != 0) {
				numero = numero / (j + 1);
				arregloMCD[determinarMCD] = (j + 1);
				determinarMCD++;
				j = 0;
			}
		}
	}

	void UsarAuxiliar() {
		auxiliar = new int[contador];
		for (int i = 0; i < contador; i++)
			auxiliar[i] = arregloConjunto[i];
	}

	void AgregarNiveles() {
		arregloNivel = new int[contador];
		int especifica = 0;
		for (int i = 0; i < contador; i++) {
			Nivel = 0;
			for (int j = 0; j < MCD; j++) {
				if (auxiliar[i] % arregloMCD[j] == 0) {
					auxiliar[i] = (auxiliar[i] / arregloMCD[j]);
					especifica++;
					Nivel++;
				}
			}
			arregloNivel[i] = Nivel;
		}
	}

	int GET_ArregloNivel(int indice) {
		return arregloNivel[indice];
	}

	void ArregloCantidadNivel() {
		CantidaNivel = new int[contador];
		int calcular = 0;
		int determinar = 0;


		for (int i = 0; i < contador; i++) {
			calcular = 0;

			for (int j = 0; j < contador; j++) {
				if (arregloNivel[i] == arregloNivel[j]) {
					calcular++;
				}
			}

			CantidaNivel[determinar] = calcular;
			determinar++;
		}
	}

	int GET_Contador() {
		return contador;
	}

	int GET_CantidadNivel(int indice) {
		return CantidaNivel[indice];
	}

	int GET_ArregloMCD(int indice) {
		return arregloMCD[indice];
	}

	int GET_ArregloConjunto(int indice) {
		return arregloConjunto[indice];
	}

	int GET_MCD() {
		return MCD;
	}
};