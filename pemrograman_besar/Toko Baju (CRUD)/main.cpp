#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

//Header (iostream, iomanip, conio.h), Variabel global, Class & Method (OOP dasar), Struct, Pointer & Linked List, Array sederhana (di Nota), Percabangan (if, switch-case), Looping (for, while, do-while), Sorting (Selection Sort), Searching (Linear Search), Input & Output (cin, cout, getline)

int isi, nobrg;



class shop{
	public:
		void menu();
		void admin();
		void addBarang();
		void delBarang();
		void listBarang();
		void listNota();
		void customer();
		void InputNota();
		void updateBarang();
		void selectionSort();
		void search();
		void delawal();
		
	
	
};



struct Barang{
	int nobrg, stok;
	int harga;
	string nama;
	Barang *next1;
	
}*tail1 = NULL, *rear1, *temp1;

Barang *head;

struct Nota{
	int x, i;
	int n;
	string p;
	int harga1;
    int total, jumlah, kemb, uang;
	Nota *next;
	
} *tail = NULL, *rear, *temp;

Nota *head1;


//================================================================================== add Barang


void shop :: addBarang(){
temp1 = new Barang;

string n;
int hg, stk;	
cout<<"\t\t-----------------------Input Produk----------------------"<<endl;
cout<<"\t\t\tInput Nomor Produk: ";
cin>> nobrg;
cout<<"\t\t\tNama Produk: ";
cin.ignore();
getline(cin, n);
cout<<"\t\t\tStok Produk: ";
cin>>stk;
cout<<"\t\t\tHarga Produk: ";
cin>>hg;
cout<<"\t\t----------------------------------------------------------"<<endl;
temp1->nobrg = nobrg;
temp1->nama = n;
temp1->stok = stk;
temp1->harga = hg;
temp1->next1 = NULL;

temp1->next1 = head;
head = temp1;	


}

//========================================================================================= Memunculkan Barang

void shop :: listBarang(){
	
	Barang *temp1 = head;

		cout<<"\t\t----------------------List Barang---------------------"<<endl;
		while (temp1 != NULL){
			
			cout<<"\t\t\tNomor Barang: "<<temp1->nobrg<<endl;
			cout<<"\t\t\tNama Barang: "<<temp1->nama<<endl;
			cout<<"\t\t\tStok Barang: "<<temp1->stok<<endl;
			cout<<"\t\t\tHarga Barang: "<<temp1->harga<<endl;
			cout<<"\t\t---------------------------------------------------"<<endl;
			temp1 = temp1->next1;
		}
		cout<< endl;
		
		
	}
	
//============================================================================================== Sorting Barang
	
void shop::selectionSort(){
	
	Barang* temp1 = head;
	while(temp1){
		
		Barang* min = temp1;
		Barang* r = temp1->next1;
		
		while(r){
			if(min->nobrg > r->nobrg)
			min = r;
			
			r= r->next1;
		}
		
		int t = temp1->nobrg;
		temp1->nobrg = min->nobrg;
		min->nobrg = t;
		
		string u = temp1->nama;
		temp1->nama = min->nama;
		min->nama = u;
		
		int k = temp1->stok;
		temp1->stok = min->stok;
		min->stok = k;
		
		int l = temp1->harga;
		temp1->harga = min->harga;
		min->harga = l;
		
		temp1 = temp1->next1;
		
	}
}

//==================================================================================================== Search

void shop::search(){
	string y;
	
	
	cout<<"\t\tInput Nama Barang:  ";
	cin.ignore();
	getline(cin, y);
	cout<<endl;
	cout<<"\t-----------------------------------------"<<endl;
	
	Barang* cur = head;
	bool found = false;
	while(cur!= NULL){
		if(cur->nama == y){
		
		cout<<"\t\tBarang Ketemu!!"<<endl;
		cout<<endl;
		cout<<"\t--------------------------------------------------------"<<endl;
		cout<<"\t\t\tNomor Barang: "<<cur->nobrg<<endl;
		cout<<"\t\t\tNama Barang: "<<cur->nama<<endl;
		cout<<"\t\t\tStok Barang: "<<cur->stok<<endl;
		cout<<"\t\t\tHarga Barang: "<<cur->harga<<endl;
		found = true;
		break;
		}
		cur = cur->next1;
	}
	 if(!found){
	 	cout<<"\t\tBarang Tidak Ditemukan!"<<endl;
	 }
}


//============================================================================================= Menghapus Data Input

void shop :: delBarang(){
	   if (head == NULL) {
        cout << "Belum ada Produk!";
        return;
    }

    int no;
    cout << "\t\tInput Nomor Produk yang ingin dihapus: ";
    cin >> no;
    cout<<endl;
	cout<<"\t----------------------------------------------------------"<<endl;

    Barang* curNode = head;
    Barang* prevNode = NULL;
    bool found = false;

    while (curNode != NULL) {
        if (curNode->nobrg == no) {
            found = true;
            break;
        }
        prevNode = curNode;
        curNode = curNode->next1;
    }

    if (!found) {
        cout << "\t\tProduk dengan nomor " << no << " tidak ditemukan." << endl;
        return;
    }

    if (prevNode == NULL) {
        
        head = head->next1;
    } else {
        
        prevNode->next1 = curNode->next1;
    }

    cout << "\t\tProduk dengan nomor " << no << " dihapus berserta datanya" << endl;
    delete curNode;
    cout<<endl;
	cout<<"\t---------------------------------------------------------------------"<<endl;
		
}

//================================================================================================== Hapus Data Awal


void shop::delawal(){
	if(head==NULL){
		cout<<"Belum ada Produk!";
	}else{
		Barang* temp1 = head;
		head = head->next1;
		cout<<"\t\tProduk "<<temp1->nobrg<<" dihapus berserta datanya";
		delete temp1;
		cout<<endl;
		cout<<"\t----------------------------------------------------------"<<endl;
	}
}

//=================================================================================================== Update Barang

void shop :: updateBarang(){
	int no;
		cout<<"\t\t--------------------------------"<<endl;
		cout<<"\t\t\tInput Nomor Produk: ";
		cin>>no;
		cout<<"\t\t--------------------------------"<<endl;
		
		 
		Barang *curNode = head;
		bool found = false;
		
		while(curNode != NULL){
			if( curNode->nobrg == no ){
				found = true;
				break;
			}
			curNode = curNode->next1;
			
		}
		
		if(!found){
			cout<<"Produk dengan nomor "<<no<<" Tidak ditemukan"<<endl;
			return;
		}
		cout<<"\t\t-----------------------------------------------"<<endl;
		cout<<"\t\t\tNo Barang: "<<curNode->nobrg<<endl;
		cout<<"\t\t\tNama Barang: "<<curNode->nama<<endl;
		cout<<"\t\t\tStok: "<<curNode->stok<<endl;
		cout<<"\t\t\tHarga: "<<curNode->harga<<endl;
		cout<<"\t\t------------------Update Stok------------------"<<endl;
		cout<<"\t\t\tStok Awal " << curNode->stok<<endl;
		cout<<"\t\t\tInput Stok Ubah: ";
		cin >> curNode->stok;
		cout << endl;
		
	
}

//================================================================================================== Input Nota

void shop :: InputNota(){
	
	int x,i;
	int n;
	string p;
	int harga1;
	int total, jumlah, kemb, uang;
	temp = new Nota;
	
	listBarang();
			cout<<"\t\t-----------------------Input Nota----------------------"<<endl;
			cout<<"\t\t\tNota ke: ";
			cin>>i;
			cout<<"\t\t\tMasukkan Nama Produk: ";
			cin.ignore();
			getline(cin, p);
			cout<<"\t\t\tBerapa pcs yang dibeli: ";
			cin>>x;
			cout<<"\t\t\tMasukkan harga yang sudah ditetapkan : ";
			cin>>harga1;
			
			jumlah = x * harga1;
			cout<<"\t\t-------------------------------------------------------"<<endl;
			
			cout<<"\t\t--------------------------Nota--------------------------"<<endl;
				cout<<"\t\t\tNota ke: "<<i<<endl;
				cout<<"\t\t\tNama Produk : "<<p<<endl;
				cout<<"\t\t\tPcs Produk : "<<x<<endl;
				cout<<"\t\t\tHarga Produk : "<<harga1<<endl;
				cout<<"\t\t\tTotal  : "<<jumlah<<endl;	
			cout<<"\t\t-----------------------------------------------------"<<endl;
			cout<<"\t\tInput Uang Pelanggan: ";
			cin>> uang;
			kemb = uang - jumlah;
			cout<<"\t\tUang kembaliannya: "<<kemb<<endl;
			

			temp->i= i;
			temp->p = p;
			temp->x = x;
			temp->harga1 = harga1;
			temp->jumlah = jumlah;
			temp->kemb = kemb;
			temp->uang = uang;
			temp->next = NULL;
			
	
			if(head1 == NULL)
			head1 = rear = temp;
			else{
			rear->next=temp;
			rear=temp;
			}			
}
		


//======================================================================================== List Nota

	void shop :: listNota(){
		Nota* current1 = head1;
		cout<<"\t\t--------------------------Nota--------------------------"<<endl;
		while (current1 != NULL){
			
			
				cout<<"\t\t\tNota ke: "<<current1->i<<endl;
				cout<<"\t\t\tNama Produk : "<<current1->p<<endl;
				cout<<"\t\t\tPcs Produk : "<<current1->x<<endl;
				cout<<"\t\t\tHarga Produk : "<<current1->harga1<<endl;
				cout<<"\t\t\tTotal  : "<<current1->jumlah<<endl;
				cout<<"\t\tUang pelanggan : "<<current1->uang<<endl;
				cout<<"\t\tKembalian: "<<current1->kemb<<endl;
			cout<<"\t\t-----------------------------------------------------"<<endl;
			current1 = current1->next;
		}
		cout<< endl;
	}
	

	



//============================================================================================== Admin

void shop :: admin(){
	shop shp;
	int admin, nomor, jumlah;
	string nama;
	char jwb;
	do{
				cout<<"\t----------------------Admin----------------------"<<endl;
				cout<<"\t\t\t1. Input Barang"<<endl;
				cout<<"\t\t\t2. Menampilkan Barang"<<endl;
				cout<<"\t\t\t3. Edit Stok Barang"<<endl;
				cout<<"\t\t\t4. Hapus Barang"<<endl;
				cout<<"\t\t\t5. Hapus Barang (INDEX AWAL) "<<endl;
				cout<<"\t\t\t6. Sorting Barang Awal Dimasukkan"<<endl;
				cout<<"\t\t\t7. Input Nota"<<endl;
				cout<<"\t\t\t8. Tampilkan Nota"<<endl;
				
				cout<<"\t\tInput Nomor: ";
				cin>>admin;
				cout<<"\t-------------------------------------------------"<<endl;
				cout<<endl;
				
				switch(admin){
					case 1:
						shp.addBarang();
						break;
					case 2:
						shp.listBarang();
						break;
					case 3:
						shp.updateBarang();
						break;
					case 4:
						shp.delBarang();
						break;
					case 5:
						shp.delawal();
						break;
					case 6:
						shp.selectionSort();
						break;
					case 7:
						shp.InputNota();
						break;
					case 8:
						shp.listNota();
						break;
					
				}
				
				cout<<"\n\t\tApakah ingin kembali ke Menu Admin? [Y/T] ";
				cin>>jwb;
			}while(jwb=='y'|| jwb=='Y');
}

//================================================================================================= Customer

void shop :: customer(){
	shop shp;
	int user;
	char jwb;
	do{
				cout<<"\t-----------------------User----------------------"<<endl;
				cout<<"\t\t\t1. Memunculkan Semua Barang"<<endl;
				cout<<"\t\t\t2. Mencari Nama Barang"<<endl;
				cout<<"\t\tInput Nomor: ";
				cin>>user;
				cout<<"\t--------------------------------------------------"<<endl;
				cout<<endl;
				
				switch(user){
					case 1:
						shp.listBarang();
						break;
					
					case 2:
						shp.search();
						break;
						
					}
				cout<<"\n\t\tApakah ingin kembali ke Menu User? [Y/T] ";
				cin>>jwb;
				
	}while(jwb=='y'|| jwb=='Y');
}


//=============================================================================================== Main Menu

int main(){
	shop shp;
	int nomor;
	char jwb;
do{	
	cout<<"------------------Main Menu Toko Baju-----------------"<<endl;
	cout<<"\t\t\t1. Admin "<<endl;
	cout<<"\t\t\t2. User "<<endl;
	cout<<"\t\tInput Nomor: ";
	cin>>nomor;
	cout<<endl;
	cout<<"------------------------------------------------------"<<endl;

	switch(nomor){
		
		case 1:
			shp.admin();
			break;
			
			
		case 2:
			shp.customer();
			break;
			
	}
	
    cout<<"\n\t\tkembali ke Main Menu? [Y/T] ";
	cin>>jwb;
}while(jwb=='y'|| jwb=='Y');
return 0;
}
