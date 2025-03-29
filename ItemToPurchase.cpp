#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

   ItemToPurchase::ItemToPurchase(){}
   
   void ItemToPurchase::SetName(string name) {
      itemName = name;
   }
   
   void ItemToPurchase::SetPrice(int price) {
      itemPrice = price;
   }
   
   void ItemToPurchase::SetQuantity(int quantity) {
      itemQuantity = quantity;
   } 
   
   int ItemToPurchase::GetPrice() const {
      return itemPrice;
   }
   
   int ItemToPurchase::GetQuantity() const {
      return itemQuantity;
   }
   
   string ItemToPurchase::GetName() const {
      return itemName;
   }
   
   void ItemToPurchase::Print() const {
      cout << itemName << " " << itemQuantity << " @ $ " << itemPrice << " = $" << itemQuantity*itemPrice << endl;
   }
   