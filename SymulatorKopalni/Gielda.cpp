#include "pch.h"
#include <iostream>
#include "Gielda.h"
#include "Kopalnia.h"
#include <string>


using namespace std;
//cccc

int CGielda::ustalenie_ceny_b(CKopalnia* _kopalnia)
{
    int ilosc;
    ilosc = _kopalnia->zwroc_ilosc_w_b(_kopalnia);


    int cena_wyjsciow = 950;

    int cena;

    cena = cena_wyjsciow + (ilosc / 10000); //przykladowe dzialanie, potem zrobie odpowiedi wzor

    return cena;

}