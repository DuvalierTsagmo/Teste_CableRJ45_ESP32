
//declaration de la classe et son constructeur
class portRj45
{
public:
    int orangeBlanc;
    int orange;
    int vertBlanc;
    int vert;
    int bleuBlanc;
    int bleu;
    int maronBlanc;
    int maron;

    portRj45(int oB, int o, int vB, int b, int bB, int v, int mB, int m);

    void intialisationINPUT();
    void intialisationOUTPUT();
    void etatBrocheHIGH();
    bool fonctionRecevoir();
    void verifierType();
    void etatBrocheLOW();
};

//initialisation des fonctions
