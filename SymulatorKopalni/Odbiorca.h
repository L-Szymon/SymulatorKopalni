#pragma once
#include <string>

using namespace std;

class COdbiorca{

protected:

    string nazwa;
    int zapotrzebowanie;
    string rodzaj_wegla;

public:

    COdbiorca();
    ~COdbiorca();

    string zwroc_nazwa();
    string zwroc_rodzaj();
    int zwroc_zapotrzebowanie();

};

