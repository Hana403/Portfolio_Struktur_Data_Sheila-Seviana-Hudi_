#include <iostream>
#include <algorithm> // untuk Sorting
#include <vector> // Untuk membuat pemrograman dinamis


using namespace std; //Agar setiap kode tidak perlu berakhiran std::
 
 //Terdiri dari: Array, Looping(for), Percabangan(if), Output/Input, Sorting(Ascending)
 
int main(){
 
    int a, c; //Variabel a untuk menampung array
    
    cout << "\t Menentukan Ganjil & Genap Data Array \n";
    cout<<"Input Berapa Angka Yang Akan Dimasukan: ";
    cin>>a;
    
    vector<int> angka(a);  // vector otomatis menyesuaikan ukuran
    
    for(c=0; c<a; c++){
        cout<<"Masukkan Nomor Ke-"<< c+1 <<" : ";
        cin>>angka[c];
    }
    
    
    sort(angka.begin(), angka.end());// Mengurutkan array ascending
 
    cout << "Hasil:";
 
   cout << "\n Genap  : ";
 
   for(int c = 0; c < a; c++){
 
       if(angka[c] % 2 == 0){
 
           cout << angka[c] << ", ";
       }
   }
 
    cout << "\n Ganjil : ";
 
    for(int c = 0; c < a; c++){
 
        if (angka[c] % 2 != 0){
 
            cout << angka[c] << ", ";
        }
       
    }
}
