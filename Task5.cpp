#include<iostream>
#include<string>
using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, float quantity);

main() {
    string fruit, dayOfWeek;
    float quantity;

    cout << "Enter fruit: ";
    cin >> fruit;
    cout << "Enter day of the week: ";
    cin >> dayOfWeek;
    cout << "Enter quantity: ";
    cin >> quantity;

    float totalPrice = calculateFruitPrice(fruit, dayOfWeek, quantity);
    cout << "Total price of purchase is: $" << totalPrice << endl;
}

float calculateFruitPrice(string fruit, string dayOfWeek, float quantity) {
    float price =0.0;

    if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || 
        dayOfWeek == "Thursday" || dayOfWeek == "Friday") {
        
        if (fruit == "Banana") 
            price = 2.50;
        else if (fruit == "Apple") 
            price = 1.20;
        else if (fruit == "Orange") 
            price = 0.85;
        else if (fruit == "Grapefruit") 
            price = 1.45;
        else if (fruit == "Kiwi") 
            price = 2.70;
        else if (fruit == "Pineapple") 
            price = 5.50;
        else if (fruit == "Grapes") 
            price = 3.85;
    }

    if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday") {
        
        if (fruit == "Banana") 
            price = 2.70;
        else if (fruit == "Apple") 
            price = 1.25;
        else if (fruit == "Orange") 
            price = 0.90;
        else if (fruit == "Grapefruit") 
            price = 1.60;
        else if (fruit == "Kiwi") 
            price = 3.00;
        else if (fruit == "Pineapple") 
            price = 5.60;
        else if (fruit == "Grapes") 
            price = 4.20;
    }

    return price * quantity;
}
