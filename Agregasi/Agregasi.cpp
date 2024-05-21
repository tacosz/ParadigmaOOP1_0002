#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
	ibu* varIbu = new ibu("siti");
	ibu* varIbu2 = new ibu("muslihatus");
	anak* varAnak1 = new anak("sodiq");
	anak* varAnak2 = new anak("tina");
	anak* varAnak3 = new anak("paijo");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	system("pause");

	return 0;
}