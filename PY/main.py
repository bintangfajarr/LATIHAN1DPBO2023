from mahasiswa import mahasiswa

print("Pilihan menu\n1. Tambah\n2. Ganti\n3. Hapus\n4. Tampil\n5. Keluar\n")
ok = 1
__listmhs = []
__NIM = []
while (ok == 1):
    print("masukkan menu")
    menu = int(input())
    if (menu == 1):
        mhs = mahasiswa()
        nim = str(input())
        nama = str(input())
        prodi = str(input())
        fakultas = str(input())
        if (nim in __NIM):
            print("data tidak bisa ditambahkan karena sudah ada\n")
        else:
            mhs.setNim(nim)
            mhs.setNama(nama)
            mhs.setProdi(prodi)
            mhs.setFakultas(fakultas)
            __listmhs.append(mhs)
            __NIM.append(nim)

    elif (menu == 2):
        mhs = mahasiswa()
        nim = str(input())
        nama = str(input())
        prodi = str(input())
        fakultas = str(input())
        if (nim not in __NIM):
            print("data tidak ada\n")
        else:
            idx = __NIM.index(nim)
            __NIM[idx] = nim
            __listmhs[idx].setNim(nim)
            __listmhs[idx].setNama(nama)
            __listmhs[idx].setProdi(prodi)
            __listmhs[idx].setFakultas(fakultas)
    elif (menu == 3):
        mhs = mahasiswa()
        nim = str(int(input()))
        if (nim not in __NIM):
            print("data tidak ada\n")
        else:
            __listmhs.pop(idx)
            __NIM.pop(idx)
    elif (menu == 4):
        for i in range(len(__listmhs)):
            print(i+1, "", __listmhs[i].getNim(), "", __listmhs[i].getNama(),
                  "", __listmhs[i].getProdi(), "", __listmhs[i].getFakultas(), "\n")
    else:
        ok = 0
