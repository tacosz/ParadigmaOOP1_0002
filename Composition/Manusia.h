#ifndef MANUSIA_H
#define MANUSIA_H

using namespace std;

class manusia
{
public:
	string name;
	jantung varJantung;

	manusia(string pName) //constructor
		: name(pName)
	{
		cout << name << " hidup\n";
	}
	~manusia() //destructor
	{
		cout << name << " mati\n";
	}
};
#endif