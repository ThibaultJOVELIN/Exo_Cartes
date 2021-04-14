#include <string>

class Monstre{

    private:
        int _PV_Monstre;
        int _Atk_Monstre;
        bool _Attaque;
        bool _En_Vie;
        char _Nom; 

    public:
        Monstre();
        void Attaquer();
        bool Afficher();
    
};