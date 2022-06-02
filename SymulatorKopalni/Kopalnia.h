#pragma once
#include "Gornik.h"
#include "Odbiorca.h"



using namespace std;

class CKopalnia
{
private:
    int budzet;
    int liczba_gornikow;
    int ilosc_wegla_b;
    int ilosc_wegla_k;


    void dodaj_gornika();
    void zwolnij_gornika();
    void daj_premie(CGornik *_gornik);
    void wyslj_na_szkolenie(CGornik);
    void wyplac_pensje();
    void sprzedaj_wegiel();
    void dodaj_odbiorce(COdbiorca *_odbiorca); 
    void usun_odbiorce(COdbiorca *_odbiorca);

public:

    CKopalnia();
    ~CKopalnia();


    int zwroc_ilosc_w_b(CKopalnia *_kopalnia);
    int zwroc_ilosc_w_k();
    int zwroc_budzet();
    int zwroc_liczba_gurnikow();


};




