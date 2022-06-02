#pragma once
#include <string>

using namespace std;

class CGornik{

private:

    string nazwa;
    int poziom;
    int wynagrodzenie;
    int praca;
    int premia;

public:

    CGornik();
    ~CGornik();


private:

    int strajkuj(CGornik *_gornik);

public:


    //napisac srodek

    string zwroc_nazwa(CGornik *_gornik);
    int zwroc_poziom(CGornik *_gornik);
    int zwroc_wynagrodzenie(CGornik *_gornik);
    int zwroc_praca(CGornik *_gornik);
    int zwroc_premia(CGornik *_gornik);



};
