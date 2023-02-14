import java.util.Scanner;
import java.util.ArrayList;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nama, nim, prodi, fakultas;
        ArrayList<mahasiswa> listmhs;
        ArrayList<String> NIM;
        listmhs = new ArrayList<mahasiswa>();
        NIM = new ArrayList<String>();
        boolean ok = true;
        System.out.println("Pilihan menu\n1. Tambah\n2. Ganti\n3. Hapus\n4. Tampil\n5. Keluar\n");
        do {
            System.out.println("masukkan menu : ");
            int menu = sc.nextInt();
            if (menu == 1) {
                mahasiswa mhs = new mahasiswa();
                nim = sc.next();
                nama = sc.next();
                prodi = sc.next();
                fakultas = sc.next();
                if (NIM.indexOf(mhs.getNim()) != -1) {
                    System.out.println("data tidak bisa ditambahkan karena sudah ada");
                } else {
                    mhs.setNama(nama);
                    mhs.setNim(nim);
                    mhs.setProdi(prodi);
                    mhs.setFakultas(fakultas);
                    listmhs.add(mhs);
                    NIM.add(nim);
                }
            } else if (menu == 2) {
                mahasiswa mhs = new mahasiswa();
                nim = sc.next();
                nama = sc.next();
                prodi = sc.next();
                fakultas = sc.next();

                int idx = NIM.indexOf(nim);
                System.out.println(idx);
                if (idx == -1) {
                    System.out.println("data tidak ada");
                } else {
                    NIM.set(idx, nim);
                    listmhs.get(idx).setNama(nama);
                    listmhs.get(idx).setNim(nim);
                    listmhs.get(idx).setProdi(prodi);
                    listmhs.get(idx).setFakultas(fakultas);
                }

            } else if (menu == 3) {
                mahasiswa mhs = new mahasiswa();
                nim = sc.next();
                int idx = NIM.indexOf(nim);
                if (idx == -1) {
                    System.out.println("data tidak ada");
                } else {
                    NIM.remove(idx);
                    listmhs.remove(idx);
                }

            } else if (menu == 4) {
                System.out.println("List Data Mahasiswa");
                for (int i = 0; i < listmhs.size(); i++) {
                    System.out.println((i + 1) + " " + listmhs.get(i).getNim() + " " + listmhs.get(i).getNama() + " "
                            + listmhs.get(i).getProdi() + " " + listmhs.get(i).getFakultas());
                }
            } else {
                ok = false;
            }
        } while (ok);
        sc.close();
    }
}