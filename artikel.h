#include <iostream>
#include <string>

using namespace std ;


// lese gesamte Textdatei in einen String und gib ihn zurück.
// Dabei werden Worttrennzeichen '-' ignoriert und Leerzeilen zu
// Zeilentrennern '\n'. Kann die Datei nicht geöffnet werden,
// wird ein leerer String zurück gegeben.
string leseArtikel ( char const dateiName[] ) ;

// gebe ganzen Artikel im Blocksatz der Breite BREITE auf cout aus.
void schreibeArtikel ( string const& rohArtikel, size_t const BREITE ) ;
