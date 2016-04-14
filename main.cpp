// Header Dateien

#include "artikel.h"

//Main Funktion

int main(int narg, char*  argv[]) {

    // gib Usage aus
    if (narg<2 || argv[2] < "2"){

        cout << "Usage: " << argv[0] << endl;
        cout << "Um das Programm zu benutzen benoetigen Sie insgesamt 3 Argumente:" << endl;
        cout << "Den Namen des Programms, den Dateinamen und die Breite der Ausgabe." << endl;
        cout << "Die zu bearbeitende Datei muss im selben Ordner wie das Programm sein," << endl;
        cout << "oder es muss der Pfad angegeben werden." << endl;
        cout << "Die Breite der Ausgabe muss groesser als 2 sein, damit der Text ausgegben wird." << endl;
        cout << "Viel Spaß beim Bearbeiten der Texte!" << endl;
    }

    // lese den Dateinamen ein

    if (leseArtikel(argv[1]).size() == 0) {
        cerr << "Datei kann nicht geoeffnet werden, fatal Error!" << endl;
        return -1;
    }

    size_t const breite = 0;
    leseArtikel( argv[1] );
    cout << "Wie Breit soll der Text ausgegeben werden? " << endl;
    cin >> breite;
    schreibeArtikel(leseArtikel(argv[1]), breite);

    return 0;

}
