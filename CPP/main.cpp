#include <bits/stdc++.h>
#include "mahasiswa.cpp"
using namespace std;
#define pb push_back
#define all(a) a.begin(), a.end()

int main()
{

    string nama, nim, prodi, fakultas;
    vector<Mahasiswa> listmhs;
    vector<string> NIM;
    bool ok = true;
    int menu;
    cout << "Pilihan menu\n1. Tambah\n2. Ganti\n3. Hapus\n4. Tampil\n5. Keluar\n";
    do
    {
        cout << "masukkan menu : \n";
        cin >> menu;

        if (menu == 1)
        {
            Mahasiswa mhs;
            cin >> nim >> nama >> prodi >> fakultas;
            if (find(all(NIM), nim) != NIM.end())
            {
                cout << "data tidak bisa ditambahkan karena sudah ada\n";
            }
            else
            {
                mhs.setNama(nama);
                mhs.setNIM(nim);
                mhs.setProdi(prodi);
                mhs.setFakultas(fakultas);
                NIM.pb(nim);
                listmhs.pb(mhs);
            }
        }
        else if (menu == 2)
        {
            Mahasiswa mhs;
            cin >> nim >> nama >> prodi >> fakultas;
            auto idx = find(all(NIM), nim);
            if (idx == NIM.end())
            {
                cout << "data tidak ada\n";
            }
            else
            {
                auto index = distance(NIM.begin(), idx);
                // cout << index;
                NIM[index] = nim;
                listmhs[index].setNIM(nim);
                listmhs[index].setNama(nama);
                listmhs[index].setProdi(prodi);
                listmhs[index].setFakultas(fakultas);
            }
        }
        else if (menu == 3)
        {
            cin >> nim;
            auto idx = find(all(NIM), nim);
            if (idx == NIM.end())
            {
                cout << "data tidak ada\n";
            }
            else
            {
                NIM.erase(idx);
                listmhs.erase(listmhs.begin() + distance(NIM.begin(), idx));
            }
        }
        else if (menu == 4)
        {
            // system("cls");
            cout << "List Data Mahasiswa\n";
            for (int i = 0; i < listmhs.size(); i++)
            {
                cout << i + 1 << " " << listmhs[i].getNIM() << " " << listmhs[i].getNama() << " " << listmhs[i].getProdi() << " " << listmhs[i].getFakultas() << endl;
            }
            cout << endl;
        }
        else
        {
            ok = false;
        }

    } while (ok);

    return 0;
}