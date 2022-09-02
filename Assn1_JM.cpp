/*
Joseph Matulewicz
9/2/22

*/
#include <iostream>
#include<string>
//Statement of purpose is to calculate change buying a candybar
using namespace std;

float Change(float loot, float candybar);

int main() {
  float loot;
  float candybar = 6.50;
  string candyName;

  cout << "Would you like a snickers, almondjoy or something else? ";
  getline(cin, candyName);

  cout << "your " << candyName << " cost 6.50, but you give ?:\n";
  cin >> loot;
  //Precondition to check wether the customer can afford the candybar
  if (loot < 6.50) {
    cout << "not enough $, give more!\n play again...";
    return 0;
  }

  cout << "you gave $" << loot << endl;

  float totalValue = Change(loot, candybar);
  cout << "your change is " << totalValue << endl;

  return 0;
}
//Postcondition when given enough money. simple function to calculate the change
float Change(float loot, float candybar) {
  return loot - candybar;
}

/*
Test Run 1:
Would you like a snickers, almondjoy or something else? kitkat
your kitkat cost 6.50, but you give ?:
22.20
you gave $22.2
your change is 15.7

Test Run 2:
Would you like a snickers, almondjoy or something else? broke as a joke
your broke as a joke cost 6.50, but you give ?:
3
not enough $, give more!
 play again...






*/
