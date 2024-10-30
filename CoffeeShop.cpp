#include <iostream>
using namespace std;

int main() {  
    //Variables for use in program 
    //The flag variables control whether the program continues or not
    int userInput;
    int totalAmount = 0;

    bool flag = true;
    while(flag){
        cout << "Welcome to our coffee shop! what would you like to do?" << endl;
        cout << "1. Buy \n2. Checkout \n3. Leave" << endl << "\nSelect the number of your choice: " ;
        cin >> userInput;
        switch(userInput) {
            //Buy option
            case 1:
                cout << "What would you like to buy? \n1. Drink \n2. Pastry" << endl <<"Select option: ";
                cin >> userInput;
                if(userInput == 1){
                    cout << "Available drinks are: Macha (₱50), Latte(₱40), Americano(₱20) \n";
                    cout << "1. Macha \n2. Latte \n3. Americano" << endl <<"Select option: ";
                    cin >> userInput;
                    switch(userInput){
                        case 1:
                            cout << "~you've selected Macha! Select Checkout to pay or Select more items to buy." << endl;
                            totalAmount = totalAmount + 50;
                            break;
                        case 2:
                            cout << "~you've selected Latte! Select Checkout to pay or Select more items to buy." << endl;
                            totalAmount = totalAmount + 40;
                            break;
                        case 3:
                            cout << "~you've selected Americano! Select Checkout to pay or Select more items to buy." << endl;
                            totalAmount = totalAmount + 20;
                            break; 
                        default:
                            cout << "~Invalid option. Returning to start." << endl;
                    }
                }
                else if(userInput == 2){
                    cout << "Available pastries are: Spanish Bread(₱60), Garlic Bread(₱70), Brownies(₱90) \n";
                    cout << "1. Spanish Bread \n2. Garlic Bread \n3. Brownies" << endl <<"Select option: ";
                    cin >> userInput;
                    switch(userInput){
                        case 1:
                            cout << "~you've selected Spanish Bread! Select Checkout to pay or Select more items to buy." << endl;
                            totalAmount = totalAmount + 60;
                            break;
                        case 2:
                            cout << "~you've selected Garlic Bread! Select Checkout to pay or Select more items to buy." << endl;
                            totalAmount = totalAmount + 70;
                            break;
                        case 3:
                            cout << "~you've selected Brownies! Select Checkout to pay or Select more items to buy." << endl;
                            totalAmount = totalAmount + 90;
                            break; 
                        default:
                            cout << "~Invalid option. Returning to start." << endl;
                    }
                }
                else{
                    cout << "~Invalid option. Returning to start." << endl;
                }
                break;
            //Checkout option
            case 2:
                if(totalAmount == 0){
                    cout << "~please select things to buy first!" << endl;
                }
                else{
                    cout << "Your total balance is : ₱" << totalAmount << endl;
                    cout << "Would you like to pay or keep selecting items? \n1. Pay \n2. Back \nSelect option: ";
                    cin >> userInput;
                    if(userInput == 1){
                        cout << "~You have payed ₱" << totalAmount << "! You may now leave or buy again." << endl;
                        totalAmount = 0;
                    }
                    else if(userInput == 2){
                        continue;
                    }
                    else{
                        cout << "~Invalid option. Returning to start." << endl;
                    }              
                }
                break;
            //Leave option
            case 3:
                if(totalAmount == 0){
                    //End system
                    cout << "~Thank you for visiting, please come again!" << endl;
                    flag = false;
                }
                else{
                    cout << "~You have unpaid balanced. Pay first before you leave!" << endl;
                }
                break;
            default:
                cout << "~Invalid option. Please type in either 1, 2, or 3 only." << endl;
        }
        cout << "\n" << endl;
    }
    
    return 0;
}
