//
//  Cookie.cpp
//  cookies
//
//  Created by Todd Peterson on 5/24/17.
//  Copyright © 2017 Todd Peterson. All rights reserved.
//

#include "Cookie.hpp"
#include <string>

using namespace std;


Cookie::Cookie()
{
    mName = "";
    mCost = 0;
    mOunces = 0;
    mCalories = 0;
}

Cookie::Cookie(string name, float cost, float ounces, float calories)
{
    mName = name;
    mCost = cost;
    mOunces = ounces;
    mCalories = calories;
}
    
string Cookie::getName() {
    return mName;
}

void Cookie::setName(string newName)
{
    mName = newName;
}
    
float Cookie::getCost() {
    return mCost;
}

void Cookie::setCost(float newCost) {
    mCost = newCost;
}
    
float Cookie::getOunces()
{
    return mOunces;
}

void Cookie::setOunces(float newOunces) {
    mOunces = newOunces;
}
    
float Cookie::getCalories() {
    return mCalories;
}

void Cookie::setCalories(float newCalories) {
    mCalories = newCalories;
}

string Cookie::toString() {
    string cost = std::to_string(mCost);
    string oz = std::to_string(mOunces);
    string cals = std::to_string(mCalories);
    
    string returnVal = mName + "\t" + cost + "\t" + oz + "\t" + cals;
    return (returnVal);
}
