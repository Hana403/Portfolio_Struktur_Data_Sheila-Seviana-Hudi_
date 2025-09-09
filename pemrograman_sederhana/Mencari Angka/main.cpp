#include <iostream>


using namespace std; //Agar setiap kode tidak perlu berakhiran std::

// Terdiri dari: 
//1. Array
//2. Input/Output
//3. Perulangan (looping)
//4. Percabangan (if-else)
//5. Searching (linear search)
//6. Boolean True/False

int main()
{
    int a[100], b, c, num; // Variabel a penampung array maksimal 100 angka
    cout<<"Masukkan jumlah array: ";
    cin>>num;
    for(c=0; c<num; c++){
        cout<<"Masukkan Nomor Ke-"<< c+1 <<" : ";
        cin>>a[c];
    }
    
    bool d = false;
    
    cout<<"Masukan Nomor Yang Di Cari: ";
    cin>>b;
    for(c=0; c<num; c++){
        if(a[c]==b){
            cout<<c+1<<endl;
            d = true;
            break;
        }
        
    }
    
    if(!d){
        cout<<"Nomor tidak ditemukan!"<<endl;
    }

    return 0;
}
