#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {
	} // fungsi yang menerima input dan mengirim input melalui 
	//fungsi setX untuk disimpan di x
	virtual float Luas() { 
		return 0; 
	} //fungsi untuk menghitung luas
	virtual float Keliling(int a) { 
		return 0; 
	} //fungsi untuk menghitung keliling
	void setX(int a) {//fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/ 
public:
	int x;
	Lingkaran(string pBidangdatar) :
		bidangDatar()
	{
		cout << "Lingkaran dibuat dengan jari-jari :" << x << "\n" << endl;
	}

	void input() {
		cout << "Masukkan jari-jari lingkaran:";
		cin >> x;
	}
	float Luas(int x) {
		return x * x * 3.14;
	}
	float Keliling(int x) {
		return 2 * 3.14 * x;
	}
};

class Bujursangkar :public bidangDatar { /*lengkapi disini*/
public:
	int x;
	Bujursangkar(string pBidangdatar) :
		bidangDatar()
	{
		cout << "Bujur sangkar dibuat" << endl;
	}

	void input() {
		cout << "Masukkan panjang sisinya:";
		cin >> x;
	}

	float Luas(int x) {
		return x*x;
	}

	float Keliling(int x) {
		return 4 * x;
	}
};

int main() { /*lengkapi disini*/
	bidangDatar* bidang;
	bidang = new Lingkaran();
	bidang = new Bujursangkar();

	Lingkaran L;
	Bujursangkar Bs;

	bidang = &L;
	bidang->input();
	bidang = &Bs;
	bidang->input();

	L.bidangDatar::Luas();
	L.bidangDatar::Keliling();
	Bs.bidangDatar::Luas();
	Bs.Bujursangkar::Keliling();

	return 0;
}