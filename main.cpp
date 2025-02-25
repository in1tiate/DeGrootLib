#include "degrootlib.h"
#include <iostream>
using namespace std;

int main()
{
    string message = "The quick brown fox jumped over the lazy dog.";
    cout << message << "\n";

    deGrootLib *degroot = new deGrootLib();

    string yeoldemessage = degroot->degrootify(message);

    cout << yeoldemessage << "\n";

    return 0;
}
