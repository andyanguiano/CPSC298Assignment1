#include <iostream>

using namespace std;

//main method that takes the price of the item and inflation rate in order to calculate the future value
int main(int argc, char **argv){
  double price = 0;
  double inflation = 0;
  int numYears = 0;

  cout << "What is the price of the item: ";
  cin >> price;

  cout << "What is the expected inflation rate: ";
  cin >> inflation;

  cout << "How many years from now: ";
  cin >> numYears;

  inflation /= 100;

  for(int i = 0; i < numYears; ++i){
    price += (price * inflation);
  }

  cout << "The expected price is: " << price << endl;

  return 0;
}
