#include "Monstre.h"
#include <iostream>
#include <string>

using namespace std;

Monstre::Monstre() : nom("C++"), _Atk_Monstre(10), _PV_Monstre(18), _Mort_Monstre(false){

}

void Monstre::AttaqueMonstre(){
    _PV_Monstre -= _Atk_Ennemi;
    _PV_Ennemi -= _Atk_Monstre;
    _Attaque = true;
        
}

void Monstre::AfficheMonstre(){
    cout << "Uther" << endl;
    cout << "Attaque = 7";
    cout << "Points de vie = " << _PV_Monstre << endl;

    if (_Attaque == true)
    {
        cout << "Ce monstre à déjà attaqué";
    }

}

void Monstre::MortMonstre(){
    if (_PV_Monstre == 0)
    {
        _Mort_Monstre = true;
    }

}