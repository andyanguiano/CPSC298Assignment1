#include <iostream>

using namespace std;

int main(int argc, char **argv){
  int maxRoom = 0;
  int numPeople = 0;
  int difference = 0;

  cout << "What is the maximum room capacity: ";
  cin >> maxRoom;

  cout << "How many people ar attending: ";
  cin >> numPeople;

  if(maxRoom >= numPeople){
    difference = maxRoom - numPeople;
    cout << "It is legal to hold the meeting and you can invite " << difference << " people." << endl;
  } else {
    difference = numPeople - maxRoom;
    cout << "The meeting cannot be held as planned due to fire regulations. " << difference << " must be excluded." << endl;
  }

  return 0;
}
