//
//  Controller.cpp
//  SampleTwoCPP
//
//  Created by Reyes, Joshua on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 123456;
}

void Controller :: start()
{
    cout << "This is inside the start method!" << endl;
    cout << "This is how you acess a variable: " << specialNumber << endl;
    cout << "Seperate chunks with the << just like a + and Strings in Java" << endl;
    specialNumber = 123;
    string answer;
    cout << "Type in your name!" << endl;
    getline(cin, answer);
    cout << "You typed: " << answer << endl;
}
