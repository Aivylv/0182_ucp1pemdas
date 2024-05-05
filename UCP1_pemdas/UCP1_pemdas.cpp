// 1. 3 contoh deklarasi variabel:
//      - float nLuas; (untuk hasil pecahan atau bukan bilangan bulat)
//      - string nama;
//      - int umur;

//2. Contoh implementasi conditional statement: (Simple IF)
//   diberikan sebuah bil bulat positif sembarang. Jika bilangan tsb lebih dari 5, maka bil dikalikan dgn 2.
// 
// BEGIN
//    numeric nBil
//    nBil = acak(10)
//    if (nBil > 5)
//        nBil = 2 * nBil
// END

//3. Contoh implementasi struct
//   misalnya ingin menyatukan data alamat user yang berisi nama desa dan kota dalam struct bernama DetailAlamat
// struct DetailAlamat {
//         string desa;
//         string kota;
// };

//4. a. Contoh implementasi prosedur: tidak mengembalikan nilai dan melewatkan nilai.
// 
//   void prosedurLuas (int p, int l)
//   {
//      luas = p * l;
//   }
//
//   b. Contoh implementasi fungsi: mengembalikan nilai. tipe data nama_fungsi
// 
//   int fungsiLuas (int p, int l)
//   {
//      return p * l;
//   }

//5. Contoh implementasi looping: WHILE, kondisi diuji di depan
//   int i = 0;         deklarasi variabel i sama dengan 0
//   while (i < 5)      looping akan terus berjalan selama i kurang dari 5
//   {
//      cout << "Sekarang UCP Pemograman Dasar!" << endl;
//   }

//6. 
#include <iostream>
using namespace std;

int main()
{
    string nama;
    float nMtk, nBIng, Rerata;
    
    cout << "Masukkan Nama Pendaftar : ";
    cin >> nama;

    cout << "Masukkan Nilai Matematika : ";
    cin >> nMtk;

    cout << "Masukkan Nilai Bahasa Inggris : ";
    cin >> nBIng;

    Rerata = (nMtk + nBIng) / 2;

    if (Rerata >= 70 && nMtk >= 80) 
    {
        cout << nama << " Diterima" << endl;
    }
    else 
    {
        cout << nama << " Ditolak" << endl;
    }

    return 0;
}
//no 6 saya belum selesaii keburu habis waktuuuu T_T
//maafff ini masih kurang array yg panjangnya 20, deklarasi variabel jumlahpendaftar, input jumlah pendaftar, dan 2 LOOP FOR yg dijalankan sebannyak jumlah peserta :,(