#include <iostream>
using namespace std;
int main()
{
  bool a = true;
  bool b = false;
  bool hasil;
 
  hasil = a && a; //Menghasilkan true jika kedua operand true
  cout << "Hasil dari a && a : " << hasil << endl;
 
  hasil = a && b;
  cout << "Hasil dari a && b : " << hasil << endl;
 
  hasil = a || b; //Menghasilkan true jika salah satu operand true
  cout << "Hasil dari a || b : " << hasil << endl;
 
  hasil = b || b;
  cout << "Hasil dari b || b : " << hasil << endl;
 
  hasil = !a; //Menghasilkan true jika operand false
  cout << "Hasil dari !a : " << hasil << endl;
 
  hasil = !b;
  cout << "Hasil dari !b : " << hasil << endl;
 
  return 0;
}