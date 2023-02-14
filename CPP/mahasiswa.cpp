#include <bits/stdc++.h>

using namespace std;

class Mahasiswa
{
private:
    string nama, nim, prodi, fakultas;

public:
    // constructor
    Mahasiswa()
    {
        this->nama = "";
        this->nim = "";
        this->prodi = "";
        this->fakultas = "";
    }

    Mahasiswa(string nama, string nim, string prodi, string fakultas)
    {
        this->nama = "";
        this->nim = "";
        this->prodi = "";
        this->fakultas = "";
    }

    string getNama()
    {
        return this->nama;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    string getNIM()
    {
        return this->nim;
    }

    void setNIM(string nim)
    {
        this->nim = nim;
    }

    string getProdi()
    {
        return this->prodi;
    }
    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }

    string getFakultas()
    {
        return this->fakultas;
    }

    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }
    ~Mahasiswa()
    {
    }
};