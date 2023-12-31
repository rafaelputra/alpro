#include <iostream>
#include <vector>
#include <cstdlib>

#define pb push_back

using namespace std;

const string username = "admin";
const string password = "manusiasetengahdewa";

struct buku {
    string judul;
    string pengarang;
    int tahun_terbit;
    bool is_tersedia;
    string kode_buku;
};

int main() {
    system("clear");
    vector<string> menu_app = {
        "1. List Buku yang Tersedia",
        "2. Pinjam Buku",
        "3. Pengembalian Buku",
        "4. Menambah List Buku Baru",
        "5. Menghapus Buku",
        "6. Exit"
    };

    vector<buku> fiksi;

    buku fiksi1;    
    fiksi1.judul = "Bumi Manusia";
    fiksi1.pengarang = "Pramoedya Ananta Toer";
    fiksi1.tahun_terbit = 2015;
    fiksi1.is_tersedia = true;
    fiksi1.kode_buku = "#F101";
    fiksi.pb(fiksi1);

    buku fiksi2;
    fiksi2.judul = "Marmut Merah Jambu";
    fiksi2.pengarang = "Raditya Dika";
    fiksi2.tahun_terbit = 2010;
    fiksi2.is_tersedia = true;
    fiksi2.kode_buku = "#F102";
    fiksi.pb(fiksi2);

    buku fiksi3;
    fiksi3.judul = "Ayahku Bukan Pembohong";
    fiksi3.pengarang = "Tere Liye";
    fiksi3.tahun_terbit = 2011;
    fiksi3.is_tersedia = true;
    fiksi3.kode_buku = "#F103";
    fiksi.pb(fiksi3);

    buku fiksi4;
    fiksi4.judul = "Dear Nathan";
    fiksi4.pengarang = "Erisca Febriani";
    fiksi4.tahun_terbit = 2016;
    fiksi4.is_tersedia = true;
    fiksi4.kode_buku = "#F104";
    fiksi.pb(fiksi4);

    buku fiksi5;
    fiksi5.judul = "Laut Bercerita";
    fiksi5.pengarang = "Leila S. Chudori";
    fiksi5.tahun_terbit = 2017;
    fiksi5.is_tersedia = true;
    fiksi5.kode_buku = "#F105";
    fiksi.pb(fiksi5);

    buku fiksi6;
    fiksi6.judul = "Cantik Itu Luka";
    fiksi6.pengarang = "Eka Kurniawan";
    fiksi6.tahun_terbit = 2022;
    fiksi6.is_tersedia = true;
    fiksi6.kode_buku = "#F106";
    fiksi.pb(fiksi6);

    buku fiksi7;
    fiksi7.judul = "Le Petit Prince";
    fiksi7.pengarang = "Antoine De Saint E.";
    fiksi7.tahun_terbit = 2015;
    fiksi7.is_tersedia = true;
    fiksi7.kode_buku = "#F107";
    fiksi.pb(fiksi7);

    buku fiksi8;
    fiksi8.judul = "Sang Alkemis";
    fiksi8.pengarang = "Paulo Coelho";
    fiksi8.tahun_terbit = 2021;
    fiksi8.is_tersedia = true;
    fiksi8.kode_buku = "#F108";
    fiksi.pb(fiksi8);

    buku fiksi9;
    fiksi9.judul = "As Long as the Lemon Trees Grow";
    fiksi9.pengarang = "Zoulfa Katouh";
    fiksi9.tahun_terbit = 2023;
    fiksi9.is_tersedia = true;
    fiksi9.kode_buku = "#F109";
    fiksi.pb(fiksi9);

    buku fiksi10;
    fiksi10.judul = "The Da Vinci Code";
    fiksi10.pengarang = "Dan Brown";
    fiksi10.tahun_terbit = 2013;
    fiksi10.is_tersedia = true;
    fiksi10.kode_buku = "#F110";
    fiksi.pb(fiksi10);


    vector<buku> nonfiksi;
    buku nonfiksi1;
    nonfiksi1.judul = "Menalar Tuhan";
    nonfiksi1.pengarang = "Franz Magnis Suseno";
    nonfiksi1.tahun_terbit = 2006;
    nonfiksi1.is_tersedia = true;
    nonfiksi1.kode_buku = "#NF101";
    nonfiksi.pb(nonfiksi1);

    buku nonfiksi2;
    nonfiksi2.judul = "Filosofi Teras";
    nonfiksi2.pengarang = "Henry Manampiring";
    nonfiksi2.tahun_terbit = 2018;
    nonfiksi2.is_tersedia = true;
    nonfiksi2.kode_buku = "#NF102";
    nonfiksi.pb(nonfiksi2);

    buku nonfiksi3;
    nonfiksi3.judul = "Eloquent Javascript";
    nonfiksi3.pengarang = "Marijn Haverbeke";
    nonfiksi3.tahun_terbit = 2010;
    nonfiksi3.is_tersedia = true;
    nonfiksi3.kode_buku = "#NF103";
    nonfiksi.pb(nonfiksi3);

    buku nonfiksi4;
    nonfiksi4.judul = "Sebuah Seni Untuk Bersikap Bodo Amat";
    nonfiksi4.pengarang = "Mark Manson";
    nonfiksi4.tahun_terbit = 2009;
    nonfiksi4.is_tersedia = true;
    nonfiksi4.kode_buku = "#NF104";
    nonfiksi.pb(nonfiksi4);

    buku nonfiksi5;
    nonfiksi5.judul = "Applied Cryptography";
    nonfiksi5.pengarang = "Bruce Schneier";
    nonfiksi5.tahun_terbit = 1993;
    nonfiksi5.is_tersedia = true;
    nonfiksi5.kode_buku = "#NF105";
    nonfiksi.pb(nonfiksi5);

    buku nonfiksi6;
    nonfiksi6.judul = "Effective C";
    nonfiksi6.pengarang = "Robert C. Seacord";
    nonfiksi6.tahun_terbit = 2020;
    nonfiksi6.is_tersedia = true;
    nonfiksi6.kode_buku = "#NF106";
    nonfiksi.pb(nonfiksi6);

    buku nonfiksi7;
    nonfiksi7.judul = "Practical Malware Analysis";
    nonfiksi7.pengarang = "Michael Sikorski";
    nonfiksi7.tahun_terbit = 2012;
    nonfiksi7.is_tersedia = true;
    nonfiksi7.kode_buku = "#NF107";
    nonfiksi.pb(nonfiksi7);

    buku nonfiksi8;
    nonfiksi8.judul = "Linux Kernel Development";
    nonfiksi8.pengarang = "Robert Love";
    nonfiksi8.tahun_terbit = 2010;
    nonfiksi8.is_tersedia = true;
    nonfiksi8.kode_buku = "#NF108";
    nonfiksi.pb(nonfiksi8);

    buku nonfiksi9;
    nonfiksi9.judul = "Reversing: Secrets of Reverse Engineering";
    nonfiksi9.pengarang = "Eldad Eilam";
    nonfiksi9.tahun_terbit = 2005;
    nonfiksi9.is_tersedia = true;
    nonfiksi9.kode_buku = "#NF109";
    nonfiksi.pb(nonfiksi9);

    buku nonfiksi10;
    nonfiksi10.judul = "Black Hat Python";
    nonfiksi10.pengarang = "Justin Seitz dan Tim Arnold";
    nonfiksi10.tahun_terbit = 2021;
    nonfiksi10.is_tersedia = true;
    nonfiksi10.kode_buku = "#NF110";
    nonfiksi.pb(nonfiksi10);

    vector<buku> semua_buku;
    semua_buku.insert(semua_buku.end(), fiksi.begin(), fiksi.end());
    semua_buku.insert(semua_buku.end(), nonfiksi.begin(), nonfiksi.end());

    bool is_running = true;
    int pilih_menu_awal;

    int pilih_kategori_buku;
    
    while (is_running){
        /*
         *
         * Menu Awal Aplikasi
         *
         */
        cout << "Aplikasi Pengelolaan Buku\n";
        for(int i = 0; i < menu_app.size(); i++) cout << menu_app[i] << endl;
        cout << "Pilih menu aplikasi: ";
        cin >> pilih_menu_awal;
        cout << endl;

        switch(pilih_menu_awal) { 
            case 1: {
                vector<string> tampilan = {
                    "1. Fiksi",
                    "2. Nonfiksi",
                    "3. Tampilkan semua",
                };
                for(int i = 0; i < tampilan.size(); i++) cout << tampilan[i] << endl;
                cout << "Pilih kategori tampilan: ";
                int pilih_tampilan;
                cin >> pilih_tampilan;
                cout << endl;

                switch(pilih_tampilan) {
                    case 1:
                        for(int i = 0; i < fiksi.size(); i++) {
                            cout << i + 1 << ". " << endl;
                            cout << "Judul: " << fiksi[i].judul << endl;
                            cout << "Author: " << fiksi[i].pengarang << endl;
                            cout << "Tahun Terbit: " << fiksi[i].tahun_terbit << endl;
                            cout << "Status: " << (fiksi[i].is_tersedia ? "Tersedia" : "Sedang dipinjam") << endl;
                            cout << "Kode Buku: " << fiksi[i].kode_buku << endl << endl;
                        }
                    break;

                    case 2: 
                        for(int i = 0; i < nonfiksi.size(); i++) {
                            cout << i + 1 << ". " << endl;
                            cout << "Judul: " << nonfiksi[i].judul << endl;
                            cout << "Author: " << nonfiksi[i].pengarang << endl;
                            cout << "Tahun Terbit: " << nonfiksi[i].tahun_terbit << endl;
                            cout << "Status: " << (nonfiksi[i].is_tersedia ? "Tersedia" : "Sedang dipinjam") << endl;
                            cout << "Kode Buku: " << nonfiksi[i].kode_buku << endl << endl;
                        }
                    break;

                    case 3:
                        for(int i = 0; i < semua_buku.size(); i++) {
                            cout << i + 1 << ". " << endl;
                            cout << "Judul: " << semua_buku[i].judul << endl;
                            cout << "Author: " << semua_buku[i].pengarang << endl;
                            cout << "Tahun Terbit: " << semua_buku[i].tahun_terbit << endl;
                            cout << "Status: " << (semua_buku[i].is_tersedia ? "Tersedia" : "Sedang dipinjam") << endl;
                            cout << "Kode Buku: " << semua_buku[i].kode_buku << endl << endl;
                        }
                    break;
                }
                break;
            }

            case 2: {
                cout << "Pilih kode buku yang ingin dipinjam: ";
                string pinjam_buku;
                cin >> pinjam_buku;
                cout << endl;
    
                bool buku_ditemukan = false;
        
                for (int i = 0; i < semua_buku.size(); i++) {
                    if (semua_buku[i].kode_buku == pinjam_buku && semua_buku[i].is_tersedia) {
                        cout << "Berhasil meminjam buku: " << semua_buku[i].judul << endl << endl;
                        semua_buku[i].is_tersedia = false;
                        buku_ditemukan = true;
    
                    for (int j = 0; j < fiksi.size(); j++) {
                        if (fiksi[j].kode_buku == pinjam_buku) {
                            fiksi[j].is_tersedia = false;
                            break;
                        }
                    }   

                    for (int j = 0; j < nonfiksi.size(); j++) {
                        if (nonfiksi[j].kode_buku == pinjam_buku) {
                            nonfiksi[j].is_tersedia = false;
                            break;
                        }
                    }
                    break;
                    }
                }

                if (!buku_ditemukan) {
                    cout << "Buku tidak tersedia atau kode buku tidak valid." << endl << endl;
                }
                break;
            }


            case 3: {
                cout << "Masukkan kode buku yang ingin dikembalikan: ";
                string kembali_buku;
                cin >> kembali_buku;
                cout << endl;

                bool buku_dikembalikan = false;

                for (int i = 0; i < semua_buku.size(); i++) {
                    if (semua_buku[i].kode_buku == kembali_buku) {
                        if (!semua_buku[i].is_tersedia) {
                            cout << "Berhasil mengembalikan buku: " << semua_buku[i].judul << endl << endl;
                            semua_buku[i].is_tersedia = true;
                            buku_dikembalikan = true;

                            for (int j = 0; j < fiksi.size(); j++) {
                                if (fiksi[j].kode_buku == kembali_buku) {
                                    fiksi[j].is_tersedia = true;
                                    break;
                                }
                            }

                            for (int j = 0; j < nonfiksi.size(); j++) {
                                if (nonfiksi[j].kode_buku == kembali_buku) {
                                    nonfiksi[j].is_tersedia = true;
                                    break;
                                }
                            }
                        } else {
                            cout << "Buku tersebut belum dipinjam atau kode buku tidak valid." << endl << endl;
                        }
                        break;
                    }
                }

                if (!buku_dikembalikan) {
                    cout << "Buku tidak ditemukan." << endl << endl;
                }
                break;
            }
            case 4: {
                string tanya_usn;
                string tanya_pw;

                cout << "Username: ";
                cin >> tanya_usn;

                cout << "Password: ";
                cin >> tanya_pw;

                if (tanya_usn == username && tanya_pw == password) {
                    cout << "Selamat datang, admin!\n";
                    cout << "1. Tambah Buku Fiksi\n";
                    cout << "2. Tambah Buku Non Fiksi\n";
                    cout << "Masukkkan pilihan Anda: ";
                    int pilih_tambah_mana;
                    cin >> pilih_tambah_mana;
                    
                    switch (pilih_tambah_mana) {
                        case 1: {
                            buku buku_baru;
                            cout << "Masukkan Judul Buku: ";
                            cin.ignore();
                            getline(cin, buku_baru.judul);
                            cout << "Masukkan Pengarang: ";
                            getline(cin, buku_baru.pengarang);
                            cout << "Masukkan Tahun Terbit: ";
                            cin >> buku_baru.tahun_terbit;
                            
                            bool cek_kode_buku = false;
                            
                            while (!cek_kode_buku){
                                cout << "Masukkan Kode Buku: ";
                                cin >> buku_baru.kode_buku;
                                
                                cek_kode_buku = true;
                                
                                for (int i = 0; i < semua_buku.size(); ++i) {
                                    if (semua_buku[i].kode_buku == buku_baru.kode_buku) {
                                        cout << "Kode buku sudah ada. Masukkan kode buku yang berbeda.\n";
                                        cek_kode_buku = false;
                                        break;
                                    }
                                }   
                            }
                            
                            buku_baru.is_tersedia = true;
                            fiksi.pb(buku_baru);
                            semua_buku.pb(buku_baru);
                            cout << "Buku Fiksi berhasil ditambahkan!\n";
                            break;
                        }
                        case 2: {
                            buku buku_baru;
                            cout << "Masukkan Judul Buku: ";
                            cin.ignore();
                            getline(cin, buku_baru.judul);
                            cout << "Masukkan Pengarang: ";
                            getline(cin, buku_baru.pengarang);
                            cout << "Masukkan Tahun Terbit: ";
                            cin >> buku_baru.tahun_terbit;
                            
                            bool cek_kode_buku = false;
                            
                            while (!cek_kode_buku) {
                                cout << "Masukkan Kode Buku: ";
                                cin >> buku_baru.kode_buku;
                                
                                cek_kode_buku = true;
                                
                                for (int i = 0; i < semua_buku.size(); ++i) {
                                    if (semua_buku[i].kode_buku == buku_baru.kode_buku) {
                                        cout << "Kode buku sudah ada. Masukkan kode buku yang berbeda.\n";
                                        cek_kode_buku = false;
                                        break;
                                    }
                                }
                            }

                            buku_baru.is_tersedia = true;
                            nonfiksi.pb(buku_baru);
                            semua_buku.pb(buku_baru);
                            cout << "Buku Non Fiksi berhasil ditambahkan!\n";
                            break;
                        }
                        default:
                            cout << "Pilihan tidak valid.\n";
                    }
                } else {
                    cout << "Anda tidak memiliki akses untuk menggunakan fitur ini.\n";
                } 
                break;
            }
           case 5: {
                string tanya_usn;
                string tanya_pw;

                cout << "Username: ";
                cin >> tanya_usn;
                cout << "Password: ";
                cin >> tanya_pw;

                if (tanya_usn == username && tanya_pw == password){
                    string hapus_buku;
                    cout << "Selamat datang, admin!\n";
                    cout << "Masukkan kode buku yang ingin dihapus: ";
                    cin.ignore();
                    getline(cin, hapus_buku);

                    bool buku_ditemukan = false;

                for (int i = 0; i < semua_buku.size(); ++i) {
                    if (semua_buku[i].kode_buku == hapus_buku) {
                        cout << "Buku dengan kode " << hapus_buku << " berhasil dihapus!\n";
                        semua_buku.erase(semua_buku.begin() + i);
                        buku_ditemukan = true;
                        break;
                    }
                }

                if (!buku_ditemukan) {
                    cout << "Buku dengan kode " << hapus_buku << " tidak ditemukan.\n";
                }

                for (int i = 0; i < fiksi.size(); ++i) {
                    if (fiksi[i].kode_buku == hapus_buku) {
                        fiksi.erase(fiksi.begin() + i);
                        break;
                    }
                }

                for (int i = 0; i < nonfiksi.size(); ++i) {
                    if (nonfiksi[i].kode_buku == hapus_buku) {
                        nonfiksi.erase(nonfiksi.begin() + i);
                        break;
                    }
                }
                } else {
                    cout << "Anda tidak memiliki hak akses untuk menggunakan fitur ini.\n";
                }
                break;
            }
            case 6:
                cout << "      /\\_/\\      \n";
                cout << " /\\  / o o \\  \n";
                cout << "//\\\\ \\~(*)~/\n";
                cout << "`  \\/   ^ /  \n";
                cout << "   | \\|| ||  Good  \n";
                cout << "   \\ '|| ||  Bye!  \n";
                cout << "    \\)()-())  \n";
                is_running = false;
                break;
        }
    }

    return 0;
}
