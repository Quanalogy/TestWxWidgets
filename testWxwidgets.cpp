//
// Created by Minty - Munk on 13-03-2016.
//

#include "testWxwidgets.h"
#include "TestFrame.h"

bool testWxwidgets::OnInit() {
    TestFrame *welcomeFrame = new TestFrame("Hello World!", wxPoint(50,50), wxSize(450,340));
    welcomeFrame->Show(true); // which results in a problem on this line. 
    return true;
}