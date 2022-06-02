#include "pch.h"
#include "Wegiel.h"

CWegiel::CWegiel(string _nazwa, int _cena)
{
	nazwa = _nazwa;
	cena = _cena;
}

CWegiel::~CWegiel()
{
}

int CWegiel::zwroc_cene()
{
	return cena;
}

void CWegiel::zmien_cene(int _cena)
{
	cena = _cena;
}

string CWegiel::zwroc_nazwa()
{
	return nazwa;
}

void CWegiel::zmien_nazwa(string _nazwa)
{
	nazwa = _nazwa;
}
