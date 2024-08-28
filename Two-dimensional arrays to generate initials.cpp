#include <iostream>
#include <string>

using namespace std;	//Namensraum

int main()	//Hauptfunktion
{
	const int Maximale_Namen_Laenge = 2; //Maximale Namenlänge deklarieren
    string name;	//Variable für den Namen deklarieren
    cout<<"Wilkommen bei dem Initialiengenerator fuer Ihren Persoenlichen Namen.\n";	//Ausgabe, was das Programm macht
    cout<<"\n";		//Freizeile
    cout << "Geben Sie nun Ihren Vornamen und Nachnamen ein: \n";	//Aufforderung der Vor und Zunahmeneingabe
    	getline(cin, name);		//Die Eingabe einlesen und speichern 
	  //getline, da die Eingabe des Namens beliebig von dem Benutzer Getätigt werden kann, doch bei einem Leerzeichen Stoppt das Einlesen des 
	  //Namens bei der Verwendung von (cin>>).
	  //somit kann der Benutzer auch seinen Zweitnahmen eingeben und er wird der Initialie hinzugefügt.
	
	char Initialien[Maximale_Namen_Laenge][2];	//Zweidimensionales Array für die Initialien deklarieren
	
    Initialien[0][0] = name[0]; // Den ersten Buchstaben des Vor- und Nachnamens den Initialen hinzufügen
    Initialien[1][0] = name[name.find(' ') + 1];	//Sucht ein Leerzeichen und fügt den nachfolgenden Buchstaben der Initialie hinzu

    cout << "Ihre Persoenlichen Initialen lauten: " << Initialien[0][0] << Initialien[1][0] << "\n";	//Ausgabe der Initialien

    return 0;	//Programm beenden
}

