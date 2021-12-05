/* Fungsi Rekrusif Untuk Menghitung Pangkat */

#include <iostream>

using namespace std;

long int pangkatrekrusif (int x, int y); 
int main (){
	int x,y;
	cout <<"FUNGSI REKRUSIF UNTUK MENGHITUNG PANGKAT"<<endl;
	cout <<endl;
	cout <<"Masukkan Nilai X : "; cin>> x;
	cout <<"Masukkan Nilai Y : "; cin>> y;
	cout <<endl;
	cout<<x<<"Dipangkatkan "<<y<<"="<<pangkatrekrusif(x,y)<<endl;
}
long int pangkatrekrusif(int x, int y){
	if(y==0)
	return 1;
	else 
	return x * pangkatrekrusif(x,y-1);
}
