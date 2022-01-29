
//declaration de la classe
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

    portRj45(int oB, int o, int vB, int b, int bB, int v, int mB, int m)
    {

        orangeBlanc = oB;
        orange = o;
        vertBlanc = vB;
        bleu = b;
        bleuBlanc = bB;
        vert = v;
        maronBlanc = mB;
        maron = m;
    }
};

void intialisationINPUT(int oB, int o, int vB, int b, int bB, int v, int mB, int m);
void intialisationOUTPUT(int oB, int o, int vB, int b, int bB, int v, int mB, int m);
void etatBrocheHIGH(int oB, int o, int vB, int b, int bB, int v, int mB, int m);
bool fonctionRecevoir(int oB, int o, int vB, int b, int bB, int v, int mB, int m);