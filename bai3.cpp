#include <iostream>
#include <string>

class RetailItem {
private:
    std::string description;
    int unitsOnHand;
    double price;

public:
    RetailItem(std::string desc, int units, double itemPrice) {
        description = desc;
        unitsOnHand = units;
        price = itemPrice;
    }

    std::string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }

    void setDescription(std::string desc) {
        description = desc;
    }

    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }

    void setPrice(double itemPrice) {
        price = itemPrice;
    }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    std::cout << "Item #1: " << item1.getDescription() << ", Units On Hand: " << item1.getUnitsOnHand()
              << ", Price: $" << item1.getPrice() << std::endl;
    std::cout << "Item #2: " << item2.getDescription() << ", Units On Hand: " << item2.getUnitsOnHand()
              << ", Price: $" << item2.getPrice() << std::endl;
    std::cout << "Item #3: " << item3.getDescription() << ", Units On Hand: " << item3.getUnitsOnHand()
              << ", Price: $" << item3.getPrice() << std::endl;

    return 0;
}