#include <iostream>

using namespace std;

int main()
{
  bool hasil;

  hasil = (5 > 4) && (10 > 9);
  cout << "(5 > 4) && (10 > 9) : " << hasil << endl;

  hasil = (15 <= 15) && (15 < 15);
  cout << "(15 <= 15) && (15 < 15) : " << hasil << endl;

  hasil = ('a' == 'a') || ('a' == 'b');
  cout << "('a' == 'a') || ('a' == 'b') : " << hasil << endl;

  hasil = (10 > 7) && ("duniailkom" == "duniailkom");
  cout << "(10 > 7) && (\"duniailkom\" == \"duniailkom\") : " 
       << hasil << endl;

  return 0;
}