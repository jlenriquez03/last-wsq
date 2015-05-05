#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
  string line;
  double city;
  string cityString;
  double street;
  string streetString;
  double price;
  string priceString;
  double promC = 0.0;
  double promH = 0.0;
  double promP = 0.0;
  int count = 0;
  double MPGC = 0.0;
  double MPGH = 0.0;
  double P = 0.0;
  ifstream file;
  file.open ("93cars.dat.txt");
  if (file.good() == true){
    while (getline (file, line)){
      if ((count % 2) == 0){
        cityString = line.substr (52,3);
        city = stod (cityString);
        MPG_C += city;
        calleString = line.substr (55,3);
        street = stod (streetString);
        MPG_H += street;
        priceString = line.substr (42,3);
        price = stod (priceString);
        P += precio;
      }
      count++;
      promC = MPGC / (count / 2);
      promH = MPGH / (count / 2);
      promP = P / (count / 2);
     }
  }
  cout << "The average of MPG in the city is  " << promC << endl;
  cout << "The average of MPG in the street is  " << promH << endl;
  cout << "The average mid-price range is " << promP << endl;
return 0;}