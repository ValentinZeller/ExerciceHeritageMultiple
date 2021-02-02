#pragma once

#include <iostream>
using namespace std;

class CPoint
{
	int m_nX, m_nY;
public:
	CPoint(int abs = 0, int ord = 0) {
		m_nX = abs;
		m_nY = ord;
	}
	void affiche() {
		cout << "Coordonnées : " << m_nX << " " << m_nY << endl;
	}
};

