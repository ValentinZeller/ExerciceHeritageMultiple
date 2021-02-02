#include "CListePoint.h"

CListePoint::CListePoint()
{

}

void CListePoint::affiche()
{
    CPoint* pt = static_cast<CPoint*>(CListe::premier()); //cast du void * en CPoint*
    pt->affiche();
    while (!fini()) {
        //Tant qu'on a pas atteint la fin de la liste, récupère le point suivant et l'affiche
        pt = static_cast<CPoint*>(CListe::prochain()); //cast du void * en CPoint*
        pt->affiche();
    }
}

void CListePoint::ajoute(CPoint* pt)
{
    CListe::ajoute(pt);
}

