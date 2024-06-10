#include <iostream>

using namespace std;

int main()
{
    double hit_ratio;
    double waktu_akses_memori;
    double akses_AR;
    double akses_tablel_page;
    double waktu_akses_efektif;
    double penurunan_kecepatan;

    cout <<"Masukkan Hit Rasio: ";
    cin >> hit_ratio;
    cout <<"Masukkan waktu untuk mencari entry di Associative Register (ns) :";
    cin >> akses_AR;
    cout << "Masukkan waktu akses memori yang dibutuhkan (ns): ";
    cin >> waktu_akses_memori;
    cout <<"Masukkan waktu akses tabel page yang dibutuhkan (ns) : ";
    cin >> akses_tablel_page;

    waktu_akses_efektif = (hit_ratio * (waktu_akses_memori + akses_AR)) + ((1 - hit_ratio) * ((waktu_akses_memori + akses_AR) + akses_tablel_page));

    cout <<"EAT = " << waktu_akses_efektif <<" ns" << endl;
    penurunan_kecepatan = ((waktu_akses_efektif - waktu_akses_memori) / waktu_akses_memori) * 100;
    cout <<"Penurunan Kecepatan = " << penurunan_kecepatan << " %" << endl;

    return 0;
}


