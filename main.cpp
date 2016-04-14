// Header Dateien

#include "artikel.h"

//Main Funktion

int main(int narg, string* argv) {

    // gib Usage aus
    if (narg<2 || argv[2] < "2"){

        cout << "Usage: " << argv[0] << endl;
    }

    // lese den Dateinamen ein
    const string name = argv[1];

    leseArtikel( );

}
