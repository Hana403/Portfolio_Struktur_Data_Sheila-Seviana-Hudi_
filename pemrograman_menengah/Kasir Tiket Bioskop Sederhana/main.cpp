#include <iostream>

//Terdapat Fungsi (Function), Input/Output, Looping (for, do-while), Percabangan (if-else, switch-case), Array, Operator aritmatika, Tipe data dasar, Menu-driven program, Break & control flow, Formatting output

using namespace std; //Agar setiap kode tidak perlu berakhiran std::
void add(){
cout<<"\t           ||      Bioskop CINEPOLIS      ||"<<endl;
cout<<"\t           ||      LIPPO PLAZA JOGJA      ||"<<endl;
cout<<endl;
cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
cout<<"\t                  Daftar Menu"<<endl;
cout<<"\t          |-.--.--.--.--.--.--.--.--.--.-"<<endl;
cout<<"\t          |* 1. Pembelian Tiket         *"<<endl;
cout<<"\t          |* 2. Cek Sisa Kursi Biasa    *"<<endl;
cout<<"\t          |* 3. Cek Sisa Kursi VIP      *"<<endl;
cout<<"\t          |* 4. Total Penjualan Tiket   *"<<endl;
cout<<"\t          |* 5. Keluar                  *"<<endl;
cout<<"\t          |-.--.--.--.--.--.--.--.--.--.-"<<endl;
cout<<endl;
}
int main(){
int nomor;
do{
    add();
cout<<"\t ||Nomor yang dipilih antara (1-5) : ";cin>>nomor;
cout<<endl;
switch(nomor) 
{
    case 1:
    int tiket,sum,total,film;
    char *namafilm,*namatiket;
    cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
    cout<<"\t              Pembelian Tiket"<<endl;
    cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
    cout<<"||Keterangan||"<<endl;
    cout<<"--------------"<<endl;
    cout<<"||Jenis Tiket||"<<endl;
    cout<<"1. Tiket Biasa : "<<endl;
    cout<<"2. Tiket VIP   : "<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"\n";
    cout<<"||Nomor Film||"<<endl;
    cout<<"--------------"<<endl;
    cout<<"1. PUSS IN BOOTS: THE LAST WISH"<<endl;
    cout<<"2. ARGANTARA"<<endl;
    cout<<"3. Avatar 2: The Way of Water"<<endl;
    cout<<"4. KKN DI DESA PENARI"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"\n";
    cout<<"||Input Pembelian Tiket||"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Jenis Tiket : ";cin>>tiket;
    cout<<"Nomor Film  : ";cin>>film;
    cout<<"Jumlah Tiket: ";cin>>total;
    cout<<endl;
    cout<<"--.--.--.--.--.--.--.--.--.--.--."<<endl;
    
    if(tiket==1){
        sum=total*40000;
        namatiket=(char*)"Biasa";
    }else if(tiket==2){
        sum=total*75000;
        namatiket=(char*)"VIP";
    }else{
        namatiket=(char*)"Angka Yang Di Input Salah";
        sum=0;
        cout<<endl;
    }
    
    if(film==1){
        namafilm=(char*)"1. PUSS IN BOOTS: THE LAST WISH";
    }else if(film==2){
        namafilm=(char*)"2. ARGANTARA";
    }else if(film==3){
        namafilm=(char*)"3. Avatar 2: The Way of Water";
    }else if(film==4){
        namafilm=(char*)"4. KKN DI DESA PENARI";
    }else{
        namafilm=(char*)"Film Tidak Tersedia";
        cout<<endl;
    }
    cout<<"Jenis TIket : "<<namatiket<<endl;
    cout<<"Judul FIlm  : "<<namafilm<<endl;
    cout<<"Jumlah TIket: "<<total<<"\n";
    cout<<"--.--.--.--.--.--.--.--.--.--.--.--.--."<<endl;
    cout<<"Total Bayar : Rp. "<<sum<<endl;
    cout<<"------------------------------------------------|"<<endl;
    cout<<endl;
    break;

case 2:
int terisi[4],kosong[4],angka,i;
cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
cout<<"\t       Cek Sisa Kursi Tiket Biasa"<<endl;
cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
cout<<"\t||Keterangan||"<<endl;
cout<<"\tJumlah Kursi Tiket Biasa Di Bioskop CINEPOLIS Sebanyak 200  "<<endl;
cout<<"\t-------------------------------------------------------------|"<<endl;
angka=0;
do{
cout<<"\tJumlah Pemesanan Kursi : ";
cin>>terisi[i];
angka++;
}while(angka<1);
cout<<"\n";

for(angka=0; angka<1; angka++)
kosong[i]=200-terisi[i];
cout<<"\t-------------------------------------------------------|"<<endl;
for(angka=0; angka<1; angka++){
    cout<<"\tSisa Kursi Untuk Tiket Biasa : "<<kosong[i]<<endl;
    cout<<"\t-------------------------------------------|"<<endl;
    cout<<endl;
}
break;

case 3:
int terisi1[2],kosong1[2],angka1,n;
cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
cout<<"\t       Cek Sisa Kursi Tiket VIP"<<endl;
cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
cout<<"||Keterangan||"<<endl;
cout<<"Jumlah Kursi Tiket VIP Di Bioskop CINEPOLIS Sebanyak 30 "<<endl;
cout<<"--------------------------------------------------------|"<<endl;
angka1=0;
do{
cout<<"Jumlah Pemesanan Kursi : ";
cin>>terisi1[n];
angka1++;
}while(angka1<1);
cout<<"\n";

for(angka1=0; angka1<1; angka1++)
kosong1[n]=30-terisi1[n];
cout<<"--------------------------------------------------------|"<<endl;
for(angka1=0; angka1<1; angka1++){
    cout<<"\t Sisa Kursi Untuk Tiket VIP : "<<kosong1[n]<<endl;
    cout<<"---------------------------------------|"<<endl;
    cout<<endl;
}
break;

case 4:
int biasa[3],VIP[2],sam[3],uang1,ang=0;
cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
cout<<"\t           Input Total Penjualan Tiket"<<endl;
cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
for(ang=0; ang<1; ang++){
    cout<<" Input Data Penjualan "<<endl;
    cout<<" Tiket Biasa : ";cin>>biasa[ang];
    cout<<" Tiket VIP   : ";cin>>VIP[ang];
    cout<<endl;
}
for(ang=0; ang<1; ang++){
sam[ang]=biasa[ang]+VIP[ang];
cout<<"\t--------------------------------------------------------"<<endl;
cout<<"\t                Total Penjualan Tiket"<<endl;
cout<<"\t--------------------------------------------------------"<<endl;
cout<<"\t | Nomor | Biasa | VIP | Total Penjualan | Total Uang |"<<endl;
cout<<"\t--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--.--"<<endl;
uang1= biasa[ang]*40000+VIP[ang]*75000;
}
for(ang=0; ang<1; ang++){
    cout<<"\t    *"<<ang+1<<"*\t    *"<<biasa[ang]<<"*   *"<<VIP[ang]<<
    "*\t       *"<<sam[ang]<<"*\t     *"<<uang1<<"* "<<endl;
    cout<<"\n";
    cout<<"\t......................................................"<<endl;
    cout<<"\n";
}
break;

}
}while(nomor!=5);
cout<<"\t  ================================================="<<endl;
cout<<"\t                   TERIMA KASIH"<<endl;
}



