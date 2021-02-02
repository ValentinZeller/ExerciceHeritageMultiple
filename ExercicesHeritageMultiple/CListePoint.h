#pragma once
#include "CListe.h"
#include "CPoint.h"

class CListePoint :
    public CListe, public CPoint
{
public:
    CListePoint();
    void affiche();
    void ajoute(CPoint* pt);
};

