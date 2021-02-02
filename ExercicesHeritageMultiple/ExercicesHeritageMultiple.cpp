// ExercicesHeritageMultiple.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "CListePoint.h"

int main()
{
	setlocale(LC_ALL, "");

	//114
	cout << endl;
	CPoint pt1(2, 3);
	CPoint pt2(4, 6);
	CPoint pt3(4, 7);
	CListePoint listep;

	listep.ajoute(&pt1);
	listep.ajoute(&pt2);
	listep.ajoute(&pt3);
	listep.affiche();
}
