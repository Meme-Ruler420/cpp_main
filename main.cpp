#include <iostream>
#include <string>
using namespace std;
class inputs{
    private:
        int x;
        std::string name;
        int unit;
        int cost;
    public:

        void get(){
            
        cout << "Enter the customer details:" << endl;
        cout << "Enter customer number: ";
        cin >> x;
        cout << "Enter customer name: ";
        getline(cin >>ws, name);
        cin.clear();
        cout << "Number of consumed units: ";
        cin >> unit;
        };
    ;
    void calculate(){
        if (unit<=100)
            cost=4;
        if (100<unit<=300)
            cost=4.5;
        else
            cost = 5;
        }
    void show(){
        cout << "Customer details: " << endl;
        cout << "Customer number: " << x << endl;
        cout << "Customer name: " << name << endl;
        cout << "Units Consumed: " << unit << endl; 
        cout << "Electricity bill is Rs." << unit*cost << endl;
    }
};
int main(){
    inputs obj1;
    obj1.get();
    obj1.calculate();
    obj1.show();
}