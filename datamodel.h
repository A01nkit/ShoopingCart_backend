#include<string>
using namespace std;
//product,item,cart
//forward_declaration
class Item;                                                         
class Cart;


class __declspec(dllexportclear)Product{
    int id;
    string name;
    int price;

public:
    Product(int u_id, string name, int price){
        id = u_id;
        this->name = name;
        this->price = price;
    } 
    string getDisplayName(){
        return name + " : Rs " + to_string(price) + "\n";
    } 
    string getShortName(){
        return name.substr(0,1); 
    }

    Friend class Item;
};


class Item{
    const Product product;
    int quantity;

public:
    //constructor using initialization list
    Item(Product p, int q):product(p), quantity(q){}
 
    int getItemPrice(){
        return quantity*product.price;

    }
    int getItemInfo(){
        return to_string(quantity) + " * " + product.name + " : Rs " + to_string(quantity*product.price);
    }

};


class Cart{

};
