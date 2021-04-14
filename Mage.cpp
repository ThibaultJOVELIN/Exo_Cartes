#include "Mage.h"
#include <iostream>
#include <string>

using namespace std;

Mage::Mage() : _nom("Mage"), _PV_Mage(30), _Mort_Mage(false){

}

void Mage::AfficheMage(){
     cout << _nom << endl;
     cout << "Points de vie = " << _PV_Mage << endl;

}

void Mage::MortMage(){
    if (_PV_Mage == 0)
    {
        _Mort_Mage = true;
    }

}

void Mage::InvocationMonstre(){
    if(_Invocations == 7 )
    {
        cout << "Vous ne pouvez plus invoquer de monstres ! Votre terrain est complet" << endl;
    }

    else
    {

    }

}