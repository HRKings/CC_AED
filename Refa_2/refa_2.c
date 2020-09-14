#include "io.h"

double aproxSeno(double x_rad[], double_seny[], double x)
{
    double senoy = 0.0;

    if (x_rad != NULL && sen_y != NULL && x >= 0)
    {
        double xa, xb, ya, yb = 0.0;

        int posx = 0;
        int posy = 1;

        while (x != x_rad[posx])
        {
            posx++;
        }

        xa = x_rad[posx-1];
        xb = x_rad[posx+1];

        ya = sen_y[posy-1];
        yb = sen_y[posy+1];

        int i = 0;
        while(sen_y[i] != senoy){
            senoy = ya + (x-xa)*((yb-ya)/(xb-(xa)));
            i++;
        }
    }

    return senoy;
}

int main()
{
    double xrad [100];
    double seny [100];

    for(int i = 0; i < 100; i++){
        xrad[i] = i;
        seny[i] = i;
    }

    double x = 0.0;

    x = IO_readdouble("Insira um valor para x: ");

    double seno_y = 0.0;

    seno_y = aproxSeno(xrad, seny, x);
}