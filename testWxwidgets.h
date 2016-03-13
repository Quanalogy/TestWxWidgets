//
// Created by Minty - Munk on 13-03-2016.
//

#ifndef TESTWXWIDGETS_TESTWXWIDGETS_H
#define TESTWXWIDGETS_TESTWXWIDGETS_H

#include <wx/wxprec.h> //Needed by wx

#ifndef WX_PRECOMP  //needed by wx
#include <wx/wx.h>
#endif

class testWxwidgets : wxApp{ //: wxApp needed by wx
public:
    virtual bool OnInit();      // std needed by wx
};


#endif //TESTWXWIDGETS_TESTWXWIDGETS_H
