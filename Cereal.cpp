#include <iostream>

using namespace std;

//main method that takes how many ounces a cereal box weighs by user and outputs the weigth in tons and how many boxes are needed
int main(int argc, char **argv){
  double ouncePackage = 0.0;
  double weightInTons = 0.0;
  int numBoxes = 0;

  cout << "Weight of breakfast cereal: " << endl;
  cin >> ouncePackage;

  weightInTons = ouncePackage / 35273.92;
  numBoxes = 35273.92 / weightInTons + 1;
  if(weightInTons < 1){
    numBoxes = 1;
  }

  cout << "Weight in metric tons: " << weightInTons << endl;
  cout << "You at least need: " << numBoxes << " boxes" << endl;

  return 0;
}
