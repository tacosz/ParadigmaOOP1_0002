#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien //asosiasi
{
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) :nama(pNama)
    {
        cout << "Pasien \"" << nama << "\" ada\n";
    }
    ~pasien()
    {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
};

int main()
{
    
}
