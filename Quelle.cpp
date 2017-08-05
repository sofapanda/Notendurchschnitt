#include <iostream>

using namespace std;

int main()
{

	// Die Variablen

	int summe = 0, noten = 0, anzahl = 0, next;
	float ergebnis;


	cout << "###### Notendurchschnitt berechnen ######" << endl;
	cout << '\n';
	
	do
	{
			cout << "Note fuer Schueler " << anzahl + 1 << " : ";
			cin >> noten;

			cout << '\n';
			summe = summe + noten;
			anzahl++;
			cout << "Neuer Schueler? J/1 - N/0:\t";
			cin >> next;
			cout << '\n';
	} while (next != 0);

	// Die Berechnung

	ergebnis = summe / static_cast<float>(anzahl);

	// Die Ausgabe

	cout << "Der Notendurchschnitt lautet: " << ergebnis << endl;
	cout << '\n';

	return 0;

}