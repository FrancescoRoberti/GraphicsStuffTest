#include <iostream>
#include "MainGame.h"
using namespace std;

int main(int argc, char** argv)
{
    MainGame giochetto;
    giochetto.run();
    char a;
    cout << "Premi qualsiasi tasto per chiudere...";
    cin >> a;
    return 0;
}
