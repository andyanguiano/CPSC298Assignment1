#include <iostream>

using namespace std;

//main method that takes how many hours worked and outputs how many much money is being withheld and net income
int main(int argc, char **argv){
  int numHours = 0;
  int numExtraHours = 0;
  int grossPay = 0;
  int withholdAmount = 0;
  int netIncome = 0;

  cout << "How many regular hours did you work this week: ";
  cin >> numHours;

  cout << "How many overtime hours did you work: ";
  cin >> numExtraHours;

  grossPay = numHours * 16 + numExtraHours * 24;

  cout << "Gross Pay: " << grossPay << endl;
  cout << "Social Security Tax: " << grossPay * 0.06 << endl;
  cout << "Federal Income Tax: " << grossPay * 0.14 << endl;
  cout << "State IncomeTax: " << grossPay * 0.05 << endl;
  cout << "Medical Issurance: 10" << endl;

  withholdAmount = grossPay * 0.25 + 10;
  cout << "Total withheld amount: " << withholdAmount << endl;

  netIncome = grossPay - withholdAmount;
  cout << "Total net income: " << netIncome << endl;



  return 0;
}
