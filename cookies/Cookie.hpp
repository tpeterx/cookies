//
//  Cookie.hpp
//  cookies
//
//  Created by Todd Peterson on 5/24/17.
//  Copyright © 2017 Todd Peterson. All rights reserved.
//

#ifndef Cookie_hpp
#define Cookie_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Cookie {
public:
    Cookie();
    Cookie(string name, float cost, float ounces, float calories);

    // print
    string toString(void);
    
    //Accessors
    string getName();
    void setName(string newName);

    float getCost();
    void setCost(float newCost);

    float getOunces();
    void setOunces(float newOunces);

    float getCalories();
    void setCalories(float newCalories);
    
private:
    string mName;
    float mCost;
    float mOunces;
    float mCalories;
};

#endif /* Cookie_hpp */
