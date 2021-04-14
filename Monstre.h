#include <string>

class Monstre{

    private:
        std::string nom;
        int _PV_Monstre ;
        int _Atk_Monstre ;
        bool _Attaque = false;
        bool _Mort_Monstre = false; 

//-------Ennemi----------

        int _PV_Ennemi = 17;
        int _Atk_Ennemi = 3;
        bool _Attaque_Ennemi = false;
        bool _Mort_Ennemi = false;

//-----------------------

    public:
        Monstre();
        Monstre(std::string nom, int PV, int Atk, bool Mort);
        void AttaqueMonstre();
        void AfficheMonstre();
        void MortMonstre();
    
};