#include <iostream>
using namespace std;

int main() {
  //ask for the Salesperson’s name and Sales Amount
    cout << "Enter Salesperson’s name: ";
    string name;
    cin >> name;
    cout << "Enter Sales Amount: ";
    double sales;
    cin >> sales;
    //calculate the Commission: SALES COMMISSION = 200 + (0.09 * SALESAMOUNT)
    double comm = 200 + (0.09 * sales);
    cout << "Sales commission for " <<name<< " is $" <<comm<<"\n";
   //$0–2999 - Poor
   if (comm <= 2999) {
   cout << "Performance is Poor";
   //$3000–4999 - Average
   } else if (comm > 3000 && comm < 4999) {
   cout << "Performance is Average";
   //$5000–9999 - Good
   } else if (comm > 5000 && comm < 9999) {
   cout << "Performance is Good";
   //$10000–14999 - Excellent
   } else if (comm > 10000 && comm < 14999) {
   cout << "Performance is Excellent";
   //$15000 and above – Outstanding
   } else if (comm > 15000) {
   cout << "Performance is Outstanding";
   }
}