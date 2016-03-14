//
// Created by Minty - Munk on 14-03-2016.
//

#ifndef TESTWXWIDGETS_TESTFRAME_H
#define TESTWXWIDGETS_TESTFRAME_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
class TestFrame : wxFrame{
public:
    TestFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();

    enum{ID_Hello = 1};


};


#endif //TESTWXWIDGETS_TESTFRAME_H
