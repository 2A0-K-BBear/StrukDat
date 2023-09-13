#include <iostream>
#include <list>
#include <string>

using namespace std;

struct{
    int NRP;
    string nama;
    string alamat;
}org[60];
void rep(){
    cout << "List mahasiswa:" << endl;
    for(int i = 0;i < 200;i++){
        if(org[i].NRP != 0){
            cout << i + 1;
            cout << ". "<< org[i].NRP; 
            cout << " " << org[i].nama; 
            cout << " "<< org[i].alamat << endl;       
        }
    }
}
void del(){
    int ora;
    cout << "Mahasiswa urutan ke -";
    cin >> ora;
    if(ora > 60){
        cout << "too much" << endl;
        del();
    }
    org[ora].NRP = 0;
    rep();
}
void add(){
    int a;
    cout << "Mahasiswa urutan ke -";
    cin >> a;
    if(a > 60){
        cout << "too much" << endl;
        add();
    }
    cout << "Silahkan masukkan identitas mahasiswa" << endl;
    cout << "NRP   : ";
    cin >> org[a].NRP;
    cin >> org[a].nama;
    cin >> org[a].alamat;
    rep();
}
int main()
{
    cout << "Silahkan masukkan identitas mahasiswa pertama." << endl;
    cout << "NRP   : ";
    cin >> org[0].NRP;
    cout << "Nama  : ";
    cin >> org[0].nama;
    cout << "Alamat: ";
    cin >> org[0].alamat;
    rep();
    int i ;
    while(i < 2){
        cout << "1.Menambah" << endl;
        cout << "2.Menghapus" << endl;
        cout << "3-0.Keluar" << endl;
        int s;
        cin >> s;
        switch (s)
        {
        case 1:
            add();
            break;
        case 2:
            del();
            break;
        default:
            i += 99;
            break;
        }
    }
}