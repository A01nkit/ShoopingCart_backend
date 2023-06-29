#include<iostream>
#include<vector>
#include "datamodel.h"
using namespace std;

vector<Product> allproduct = {
    product(01, "apple", 10);
    product(02, "mango", 20);
    product(03, "guava", 30);
    product(04, "banana", 40);
     
};
/// @brief 
/// @return 
Product* chooseProduct(){
    //display list of products
    string productlist;
    cout << "Available products" << endl;
    for(auto product : allproduct){
        productlist.append(product.getDisplayName());
    }
    cout << productlist << endl;
    
    cout<<"-------------------------";
    string choice;
    cin >> choice;

    for(int i=0; i<allproduct.size(); i++){
        if(allproduct.getShortName() == choice){
            return &allproduct[i];
        }
    }
    cout << "Product Not Available";

    return NULL;

}


int main(){
    char action;
    while(true){
        cout << "SELECT AN ACTION - (a)dd item, (v)iew cart, (c)heckout" << endl;
        cin >> action;

        if(action=='a'){
            //todo: add to cart
            //view all products + choose product + add to the cart
            Product *product = chooseProduct();
            if(product != NULL){
                cout << "Added to the cart " << product->getDisplayName();
            }

        }
        else if(action=='v'){
            //view cart

        }
        else{
            //checkout

        }

    }


    return 0;

 
}