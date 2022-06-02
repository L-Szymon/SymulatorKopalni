#pragma once
#include "Kopalnia.h"

using namespace std;

class CGielda {

public:

    CGielda();

    int zwroc_cene();

private:
    int ustalenie_ceny_b(CKopalnia* _kopalnia);
    int ustalenie_ceny_k();




};
