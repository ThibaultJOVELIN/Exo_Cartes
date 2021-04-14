#include "Monstre.h"
#include <iostream>
#include <string>

using namespace std;

Monstre::Monstre() : _nom("C++"), _Atk_Monstre(10), _PV_Monstre(27), _Mort_Monstre(false){

}

void Monstre::AttaqueMonstre(){
    _PV_Monstre -= _Atk_Ennemi;
    _PV_Ennemi -= _Atk_Monstre;
    _Attaque = true;
        
}

void Monstre::AfficheMonstre(){
    if( _Mort_Monstre == true)
    {
        cout << "Ce monstre est mort"<< endl;
    }

    else 
    {
        cout << _nom << endl;
        cout << "Attaque = " << _Atk_Monstre << endl;
        cout << "Points de vie = " << _PV_Monstre << endl;

        if (_Attaque == true)
        {
            cout << "Ce monstre à déjà attaqué";
        }
    }
}

void Monstre::MortMonstre(){
    if (_PV_Monstre == 0)
    {
        _Mort_Monstre = true;
    }

}