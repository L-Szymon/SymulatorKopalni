#include "pch.h"
#include <iostream>
#include "Gornik.h"
#include <cstdlib>
#include <ctime>

#include <string>

using namespace std;

CGornik::CGornik()
{
    nazwa="nazwa"; //wymyslic jak robic ich nazwy
    poziom=1;
    wynagrodzenie=3500;
    praca=1;
    premia=0;


}

int CGornik ::strajkuj(CGornik *_gornik)
{
    int licz_pom=0;
    int a=1;
    int b=15;
    int praca=1;
    int premia;

    premia=_gornik->premia;

    if(premia==0)
    {
    srand (time(0));

    licz_pom=a+(b-a)*rand()/int(RAND_MAX);

    if(licz_pom==5||licz_pom==8||licz_pom==13)
    {
        praca=0;
    }
    else{

        praca=1;
    }
    }

    return praca;

}

string CGornik ::zwroc_nazwa(CGornik *_gornik)
{
    cout<<nazwa;
    return 0;
}









