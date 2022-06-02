#pragma once
#include <string>

using namespace std;

class CWegiel {

protected:

    string nazwa;
    int cena;

public:
    CWegiel(string _nazwa = "Czarny", int _cena = 10);
    ~CWegiel();
    int zwroc_cene();
    void zmien_cene(int _cena);
    string zwroc_nazwa();
    void zmien_nazwa(string _nazwa);
};

