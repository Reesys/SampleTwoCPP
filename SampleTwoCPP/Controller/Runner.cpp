//
//  Runner.cpp
//  SampleTwoCPP
//
//  Created by Reyes, Joshua on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    //Controller app;
    //app.start();
    
    //Pointer version!
    Controller * app = new Controller();
    app->start();
    
    return 0;
}
