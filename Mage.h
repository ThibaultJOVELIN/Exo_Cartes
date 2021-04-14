#include <string>

class Mage{

    private:
        std::string _nom;
        int _PV_Mage;
        int _Invocations;
        bool _Monstre_Invoque = false;
        bool _Mort_Mage = false; 

    public:
        Mage();
        Mage(std::string nom, int PV, bool Mort);
        void InvocationMonstre();
        void AfficheMage();
        void MortMage();
    
};