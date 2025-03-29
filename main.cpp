#include <iostream>
#include <sstream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   ItemToPurchase item1;
    ItemToPurchase item2;
    string userinput;
    string name;
    int price;
    int quantity;

   getline(cin, name);
    item1.SetName(name);
    
    getline(cin, userinput);
    stringstream(userinput) >> price;
    item1.SetPrice(price);
    
    getline(cin, userinput);
    stringstream(userinput) >> quantity;
    item1.SetQuantity(quantity);

    cin.ignore(); 

    // Item 2
    getline(cin, userinput);
    item2.SetName(userinput);
    getline(cin, userinput);
    stringstream(userinput) >> price;
    item2.SetPrice(price);
    getline(cin, userinput);
    stringstream(userinput) >> quantity;
    item2.SetQuantity(quantity);

    cout << "TOTAL COST" << endl;
    item1.Print();
    item2.Print();

   cout << "Total: $" << item1.GetQuantity() * item1.GetPrice() + item2.GetQuantity() * item2.GetPrice() << endl;
   
   return 0;
}