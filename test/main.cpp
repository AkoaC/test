#include <iostream>

#define TR_SPACE(nb) (2*nb)-2
#define SPACE(nb) (3*nb)+1
#define line_h(nb) (2*nb)+1

using namespace std;

int nb=4;

void drowHorizontalLine()
{
    int j=line_h(nb)+1;
    while(--j) cout << '*';
    j=line_h(nb)-1;
    while(--j) cout << ' ';
    j=line_h(nb)+1;
    while(--j) cout << '*';
    cout << "\n";
}

void drawCone()
{
    for(int i(0); i<nb; ++i)
    {
        int j=SPACE(nb)-i;
        while(--j) cout << ' ';
        cout << "*";
        if(i!=0)
        {
            int c=i*2;
            while(--c) cout << ' ';
            cout << "*";
        }
        cout << "\n";
    }
}

void drawConeReverse()
{
    for(int i(0); i<nb; ++i)
    {
        int j=0;
        while(++j&&j<=(SPACE(nb)-nb+i)) cout << ' ';
        cout << "*";
        if(i!=nb-1)
        {
            int c=TR_SPACE(nb)-(2*i);
            while(--c) cout << ' ';
            cout << "*";
        }
        cout << "\n";
    }
}

void drawBodyShape()
{
    for(int i(1); i<nb; ++i)
    {
        int j=0;
        while(j<i&&++j) cout << ' ';
        cout << '*';
        int c=2*SPACE(nb)-(2*i)-1;
        while(--c) cout << ' ';
        cout << "*";
        cout << "\n";
    }

    // Centre de la forme
    int j=nb+1;
    while(--j) cout << ' ';
    cout << "*";
    int c=SPACE(nb)+nb-1;
    while(--c) cout << ' ';
    cout << "*";
    cout << "\n";

    for(int i(1); i<nb; ++i)
    {
        int j=nb-i+1;
        while(--j) cout << ' ';
        cout << "*";
        int c=2*SPACE(nb)-(2*nb) +(2*i) -1;
        while(--c) cout << ' ';
        cout << "*";
        cout << "\n";
    }
}

int main()
{
    drawCone();
    drowHorizontalLine();
    drawBodyShape();
    drowHorizontalLine();
    drawConeReverse();

    return 0;
}
