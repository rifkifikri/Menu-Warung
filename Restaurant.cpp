#include <iostream>

using namespace std;

void menu(){
    cout<<"-------------------------------------------------------------------------\n";
	cout<<"|NO	| Daftar Menu			|Porsi		| Harga		|\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"|1	| Pecel				|1		| Rp 10.000	|\n";
	cout<<"|2	| Rawon				|1		| Rp 15.000	|\n";
	cout<<"|3	| Lodeh				|1		| Rp 8.000	|\n";
	cout<<"|4	| CapJay			|1		| Rp 20.000	|\n";
	cout<<"------------------------------------------------------------------------\n";
	cout<<"|No	| Minuman			|Jml		| Harga		|\n";
	cout<<"|-----------------------------------------------------------------------|\n";
	cout<<"|1	| Es Teh			|1		| Rp 3.000	|\n";
	cout<<"|2	| Marimas			|1		| Rp 2.500	|\n";
	cout<<"|3	| Teh Hangat			|1		| Rp 3.500	|\n";
	cout<<"|4	| Es Jeruk			|1		| Rp 4.000	|\n";
	cout<<"|-----------------------------------------------------------------------|\n";
	
}

struct Menu {
    int minuman,makanan,harga,subTotal,bts,bts2,total=0;
};

int main(){
	
	int arrMinuman[100],jmlMinuman[10],jmlMakanan[10],arrMakanan [100];
	
    menu();
    struct Menu  menuan;
   
    cout<<"Masukkan batas Pesanan :"; cin >>menuan.bts;

    for (int x=0; x <= menuan.bts; x++){
        cout<<"Masukkan No Makanan : ";
	cin>> arrMakanan[x];

	cout<<"Masukkan Jumlah Porsi : ";
	cin>> jmlMakanan[x];

    }
    //gol Minuman
     cout<<"Masukkan batas Pesananan Minuman :"; cin >>menuan.bts2;

    for (int x=0; x <= menuan.bts2; x++){
        cout<<"Masukkan No Minuman : ";
	cin>> arrMinuman[x];

	cout<<"Masukkan Jumlah Minuman : ";
	cin>> jmlMinuman[x];

    }

    cout<<endl<<endl;
    // Out makanan
    for(int y=0; y<=menuan.bts; y++){
        if (arrMakanan[y]==1){ 

            menuan.subTotal=jmlMakanan[y] * 10000;
            cout<<arrMakanan[y]<<" "<<" Pecel "<< "Rp 10.000 "<< jmlMakanan[y] <<" "<<menuan.subTotal<<endl;
              menuan.total=menuan.total+menuan.subTotal;

        }else if (arrMakanan[y]==2){
            menuan.subTotal=jmlMakanan[y] * 15000;
            cout<<arrMakanan[y]<<" "<<" Rawon "<< "Rp 15.000 "<< jmlMakanan[y] <<" "<<menuan.subTotal<<endl;
            menuan.total=menuan.total+menuan.subTotal;
        }
        else if (arrMakanan[y]==3){
            menuan.subTotal=jmlMakanan[y] * 15000;
            cout<<arrMakanan[y]<<" "<<" Lodeh "<< "Rp 8.000 "<< jmlMakanan[y] <<" "<<menuan.subTotal<<endl;
            menuan.total=menuan.total+menuan.subTotal;
        }
        else if (arrMakanan[y]==4){
            menuan.subTotal=jmlMakanan[y] * 15000;
            cout<<arrMakanan[y]<<" "<<" capjay "<< "Rp 20.000 "<< jmlMakanan[y] <<" "<<menuan.subTotal<<endl;
            menuan.total=menuan.total+menuan.subTotal;
        }
        else{
            cout<<"Pilihan Kosong";
        }
      
    }
    //Out Minuman
    for(int z=0; z<=menuan.bts2; z++){
        if (arrMinuman[z]==1){ 

            menuan.subTotal=jmlMinuman[z] * 3000;
            cout<<arrMinuman[z]<<" "<<" Es Teh "<< "Rp 3.000 "<< jmlMinuman[z] <<" "<<menuan.subTotal<<endl;
              menuan.total=menuan.total+menuan.subTotal;

        }else if (arrMinuman[z]==2){ 

            menuan.subTotal=jmlMinuman[z] * 2500;
            cout<<arrMinuman[z]<<" "<<" Marimas "<< "Rp 2.500 "<< jmlMinuman[z] <<" "<<menuan.subTotal<<endl;
              menuan.total=menuan.total+menuan.subTotal;

        }else if (arrMinuman[z]==3){ 

            menuan.subTotal=jmlMinuman[z] * 3500;
            cout<<arrMinuman[z]<<" "<<" Teh Hangat   "<< "Rp 3.500 "<< jmlMinuman[z] <<" "<<menuan.subTotal<<endl;
              menuan.total=menuan.total+menuan.subTotal;

        }else if (arrMinuman[z]==4){ 

            menuan.subTotal=jmlMinuman[z] * 4000;
            cout<<arrMinuman[z]<<" "<<" Es Jeruk   "<< "Rp 4.000 "<< jmlMinuman[z] <<" "<<menuan.subTotal<<endl;
              menuan.total=menuan.total+menuan.subTotal;

        }
    }
    cout<<"Total Pembelian      : "<<menuan.total;
	
	
}