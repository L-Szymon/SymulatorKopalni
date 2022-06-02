#include "pch.h"
#include <iostream>
#include "Kopalnia.h"
#include "Gornik.h"

#include <string>

using namespace std;


CKopalnia::CKopalnia()
{
    int budzet=1000000;
    int liczba_gornikow=0;
    int ilosc_wegla_b=0;
    int ilosc_wegla_k=0;
    

}



int CKopalnia::zwroc_ilosc_w_b(CKopalnia *_kopalnia)
{
    int pom;

    pom=_kopalnia->ilosc_wegla_b;

    return pom;

}

        //druga dla wegla kamiennego
