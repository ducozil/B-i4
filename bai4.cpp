#include <iostream>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }
    
    
    Inventory(int itemNum, double itemCost, int itemQuantity) {
        itemNumber = itemNum;
        cost = itemCost;
        quantity = itemQuantity;
        setTotalCost();
    }
    
    void setItemNumber(int num) {
        if (num >= 0)
            itemNumber = num;
        else
            cout << "Invalid item number.\n";
    }
    
    void setQuantity(int q) {
        if (q >= 0)
            quantity = q;
        else
            cout << "Invalid quantity.\n";
    }
    
    void setCost(double c) {
        if (c >= 0.0)
            cost = c;
        else
            cout << "Invalid cost.\n";
    }
    
    void setTotalCost() {
        totalCost = quantity * cost;
    }
    
    int getItemNumber() {
        return itemNumber;
    }
    
    int getQuantity() {
        return quantity;
    }
    
    double getCost() {
        return cost;
    }
    
    double getTotalCost() {
        return totalCost;
    }
};

int main() {
    Inventory item1;  
    Inventory item2(1234, 12.34, 100);  
    
    
    item1.setItemNumber(5678);
    item1.setQuantity(50);
    item1.setCost(5.67);
    item1.setTotalCost();
    
    
    cout << "Item 1:\n";
    cout << "Item number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Total cost: $" << item1.getTotalCost() << endl;
    
    cout << "Item 2:\n";
    cout << "Item number: " << item2.getItemNumber() << endl;
    cout << "Quantity: " << item2.getQuantity() << endl;
    cout << "Cost: $" << item2.getCost() << endl;
    cout << "Total cost: $" << item2.getTotalCost() << endl;
    
    return 0;
}
