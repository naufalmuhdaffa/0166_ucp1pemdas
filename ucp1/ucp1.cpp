/*
1.  int a; //deklarasi variabel a dengan tipe data integer
    float b;
    string c;

2. int a = 1; //deklarasi variabel
    if (a = 1)  //statement if
        cout << "selamat pagi";

3. 
struct Mahasiswa {
    string nim;
    string nama;
};

int main()
{
    Mahasiswa mhs; //deklarasi objek mhs dari struktur Mahasiswa
    cout << "Nomor Mahasiswa : ";
    getline(cin, mhs.nim);
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);
    cout << endl;
    cout << "\n NIM : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
}

4. 
//prosedur: 
void display() { //prosedur display
    cout << "selamat siang";
}

int main()
{
    display();
}

//fungsi: 
int panjang = 2;
int Lebar = 3;

int hitungLuas() { //fungsi

    return panjang* Lebar;
}

int main()
{
    cout << hitungLuas();
}

5. for (int i = 1;//inisialisasi
        i <= 10;//loop kondisi
        i++//increment
        ) {
        cout << i << endl;
    }

*/

#include <iostream>
using namespace std;

int matematika, bhsInggris;
string nama;

void hitung() {
    if (matematika * bhsInggris / 2 >= 70)
        cout << "Diterima";
    else if (matematika > 80)
        cout << "Diterima";
    else
        cout << "Ditolak";
}

void display() {
    cout << "Nama: " << nama << endl;
    cout << "Status: ";
}


int main()
{
    for (int i = 1; i <= 20; i++) {
        cout << "Masukan nama pendaftar ke-" << i << " :";
        cin >> nama;
        cout << "Masukan nilai Matematika: ";
        cin >> matematika;
        cout << "Masukan nilai Bahasa inggris: ";
        cin >> bhsInggris;
        display();
        hitung();
        cout << endl;
        cin.get();
        cout << endl;
    }
    return 0;
}