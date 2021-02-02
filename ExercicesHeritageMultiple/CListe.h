#pragma once

struct element {
	element* suivant;
	void* contenu;
};

class CListe
{
protected:
	element* debut;
	int m_curseur; //Curseur : stock la position dans la liste

public:
	CListe();
	~CListe();
	void ajoute(void*);
	void* premier();
	void* prochain();
	int fini();
};

