#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); // Deklarasi method
};

void mahasiswa::showNim() { //Implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main() 
{
	mahasiswa mhs{ 1 };		//Object mhs
	mhs.showNim();			//Member access operator

	mahasiswa& ref = mhs;	//Pointer reference refmhs
	ref.nim = 2;			//Member access operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;		//Pointer Dereference pMhs
	pMhs->nim = 3;				//Arrow operator
	mhs.showNim();
	system("pause");
	return 0;
}