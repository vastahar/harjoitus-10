// HARJOITUS 10
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

void main()
{
	int luku;
	float neg;
	float pos;
	int lkm = 0;
	neg = 0;
	pos = 0;
	cout << "Anna kymmenen kokonaislukua. Anna luku 0 kun olet valmis." << endl;
	while (cin >> luku)
	{
		if (luku == 0)
			break;
		if (luku < 0)
			neg++;
		if (luku > 0)
			pos++;
		lkm++;
	} 
	cout << "Annoit kokonaislukuja seuraavasti:" << endl;
	cout << "------------------------------" << endl;
	cout << "Negatiiviset " << neg << " kpl " << (100 / lkm) * neg << " %" << endl;
	cout << "Positiiviset " << pos << " kpl " << (100 / lkm) * pos << " %" << endl;
	cout << "Yhteensä " << lkm << " kpl " << (100 / lkm) * lkm << " %" << endl;
}