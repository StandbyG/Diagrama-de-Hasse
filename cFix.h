#pragma once
#include "cAdded.h"
#include <conio.h>

using namespace std;
using namespace System::Drawing;


class cFix {
private:
	cAdd** vector;
	int N;

	int* Posx;
	int* Posy;
public:
	cFix() {
		N = 0;
		vector = new cAdd * [N];
	}
	~cFix() {
		delete vector;
		delete Posx;
		delete Posy;
	}

	int GET_N() { return N; }

	int GET_NumeroConjunto(int indice) {
		return vector[indice]->GET_ArregloConjunto(indice);
	}
	int GET_Numberlevel(int indice) {
		return vector[indice]->GET_ArregloNivel(indice);
	}
	int GET_Quantitylevel(int indice) {
		return vector[indice]->GET_CantidadNivel(indice);
	}

	int GET_Posx(int indice) { return Posx[indice]; }
	int GET_Posy(int indice) { return Posy[indice]; }
	
	void Add(cAdd* dato, int Cant) {
		for (int i = 0; i < Cant; i++) {
			cAdd** aux = new cAdd * [N + 1];
			for (int j = 0; j < N; j++)
				aux[j] = vector[j];
			aux[N] = dato;
			N = N + 1;
			if (vector != NULL)
				delete vector;
			vector = aux;
		}
	}

	void Hasse(Graphics^ g) {

		int y = 0;
		int yy = 15 + 7;
		int calcular;
		int auxx;

		Posx = new int[N];
		Posy = new int[N];

		Font^ mifuente = gcnew Font("Arial Black", 10);

		int mayor = GET_Numberlevel(0);

		for (int i = 0; i < N; i++) {
			if (mayor < GET_Numberlevel(i)) {
				mayor = GET_Numberlevel(i);
			}
		}

		for (int i = mayor + 1; i >= 0; i--) {

			int x = g->VisibleClipBounds.Width;
			auxx = 0;

			for (int j = 0; j < N; j++) {

				if (i == GET_Numberlevel(j)) {

					calcular = GET_Quantitylevel(j);
					auxx++;
					g->DrawString("" + GET_NumeroConjunto(j), mifuente, Brushes::Red, (x / 2) - ((calcular - (auxx * 2) - 1) * 20), y);
					g->FillEllipse(Brushes::DarkBlue, (x / 2) - ((calcular - (auxx * 2) - 1) * 20), y + 15, 10, 10);
					Posx[j] = (x / 2) - ((calcular - (auxx * 2) - 1) * 20) + 5;
					Posy[j] = yy;
				}
			}

			yy = yy + 20;
			y = y + 20;
		}
	}

	void Line(Graphics^ g) {

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (GET_Numberlevel(i) + 1 == GET_Numberlevel(j)) {
					if (GET_NumeroConjunto(j) % GET_NumeroConjunto(i) == 0)
						g->DrawLine(Pens::Black, Posx[i], Posy[i], Posx[j], Posy[j]);
				}
			}
		}
	}

};

