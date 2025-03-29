#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   private: 
      string itemName = "none";
      int itemPrice = 0;
      int itemQuantity = 0;
      
   public:
      ItemToPurchase();    // default constructors
      
      // setters
      void SetName(string name);
      void SetPrice(int price);
      void SetQuantity(int quantity);
      
      // getters
      string GetName() const;
      int GetPrice() const;
      int GetQuantity() const;
      
      void Print() const;
      
   };// class ItemToPurchase

#endif