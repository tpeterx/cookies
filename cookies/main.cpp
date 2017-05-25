//
//  main.cpp
//  cookies
//
//  Created by Todd Peterson on 5/24/17.
//  Copyright © 2017 Todd Peterson. All rights reserved.
//

#include <iostream>
#include <iomanip>

#include "Cookie.hpp"

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    
    Cookie c;
    c.setName("Oreos");
    c.setCost(3.29);
    c.setOunces(10.0);
    c.setCalories(250);
    
    string foo = c.toString();
    std::cout << foo << "\n";
    
    
    int select = 0;
    
    printf("Welcome to Kyle's Cookie Lovers Program.\n\n");
    
    while (select != 5) {
        cout << "----------------------------------------------------\n";
        printf("1.  Sort and Print\n");
        printf("2.  Special Report\n");
        printf("3.  Average Price\n");
        printf("4.  Add a new cookie\n");
        printf("5.  Exit\n\n");
        
        cout << "Please select an operation from the menu (1-5):\n";
        cin >> select;
        
        switch(select) {
            case 1:
                cout << "\nSort and Print:\n\n";
                break;
            case 2:
                cout << "\nSpecial Report:\n\n";
                break;
            case 3:
                cout << "\nAverage Price:\n\n";
                break;
            case 4:
                cout << "\nAdd a new cookie:\n\n";
                break;
            case 5:
                cout << "\nExit\n\n";
                break;
            default:
                cout << "Please enter a number from 1 - 5.\n";
                break;
        }
    }
    
    
    return 0;
}
