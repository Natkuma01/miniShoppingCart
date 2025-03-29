#include <iostream>
#include <sstream>
#include <cctype>
#include <algorithm>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   ItemToPurchase item1;
   ItemToPurchase item2;
   string userinput;
   string name;
   int price;
   int quantity;
    
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;

   getline(cin, name);
   item1.SetName(name);
   
   cout << "Enter the item price:" << endl; 
   getline(cin, userinput);
   userinput.erase(remove_if(userinput.begin(),userinput.end(), ::isspace),userinput.end());
   stringstream(userinput) >> price;
   item1.SetPrice(price);
   
   cout << "Enter the item quantity:" << endl; 
   getline(cin, userinput);
   stringstream(userinput) >> quantity;
   item1.SetQuantity(quantity);

   
   cout << "\n";
   cout << "Item 2" << endl;

    // Item 2
   cout << "Enter the item name:" << endl;
   getline(cin, name);
   item2.SetName(name);
   
   cout << "Enter the item price:" << endl; 
   getline(cin, userinput);
   userinput.erase(remove_if(userinput.begin(),userinput.end(), ::isspace),userinput.end());
   stringstream(userinput) >> price;
   item2.SetPrice(price);
   
   cout << "Enter the item quantity:" << endl;
   getline(cin, userinput);
   stringstream(userinput) >> quantity;
   item2.SetQuantity(quantity);
   
   cout << "\n";

   cout << "TOTAL COST" << endl;
   item1.Print();
   item2.Print();
   
   cout << "\n";
   
   cout << "Total: $" << item1.GetQuantity() * item1.GetPrice() + item2.GetQuantity() * item2.GetPrice() << endl;
   
   return 0;
}