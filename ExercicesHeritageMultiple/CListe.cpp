#include "CListe.h"

CListe::CListe()
{
    debut = nullptr;
    m_curseur = 0;
}

CListe::~CListe()
{
    delete(debut);
}

//Ajoute un élément en tant que premier élément de la liste
void CListe::ajoute(void* contenu)
{
    element* e = new element;
    e->suivant = debut;
    e->contenu = contenu;
    debut = e;
}

//Initialisation du curseur et retourne le contenu du premier élément de la liste
void* CListe::premier()
{
    m_curseur = 0;
    return debut->contenu;
}

//Retourne le contenu de l'élément suivant (selon le curseur)
void* CListe::prochain()
{
    m_curseur++;
    element* elem = debut;
   for(int i = 0;i < m_curseur; i++) {
        //Parcourt dans la liste jusqu'à que l'indice i corresponde à la valeur du curseur
        elem = elem->suivant;
    }
    return elem->contenu;
}

//Retourne si le curseur a atteint la fin de la liste ou non
int CListe::fini()
{
    int i = 0;
    element* elem = debut;
    while (elem->suivant != nullptr) {
        //Parcourt dans la liste jusqu'à que l'élement suivant soit nul
        elem = elem->suivant;
        i++;
    }
    return (m_curseur == i);
}
