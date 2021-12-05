/* Fungsi Rekrusif Untuk Menampilkan Deret Fibonachi */

#include <iostream>

using namespace std;

int fibonachi (int m){
	if (m==0||m==-1)
	{
		return m;
	}
	else
	{
		return (fibonachi(m-1) + fibonachi(m-2));
	}
}
int main (){
	int n, m=0;
	
	cout <<"Masukkan Batas Deret Bilangan Fibonachi : "; cin >> n;
	cout <<"Deret Fibonachi : ";
	for (int i = 1; i <= n; i++){
		cout << fibonachi(m)<<" ";
		m++;
	}
	return 0;
}
