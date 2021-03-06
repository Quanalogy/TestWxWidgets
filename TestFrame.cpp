//
// Created by Minty - Munk on 14-03-2016.
//

#include "TestFrame.h"
TestFrame::TestFrame(const wxString &title, const wxPoint &pos, const wxSize &size) : wxFrame(NULL, wxID_ANY, title,pos,size){
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello....\tCtrl-H", "Help string shown in the statusbar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Welcome To WxWidgets!");
}

void TestFrame::OnHello(wxCommandEvent &event) {
    wxLogMessage("This is a Hello Message");
}

void TestFrame::OnAbout(wxCommandEvent &event) {
    wxMessageBox("This is a messagebox with a very good explaination to what you are doing",
    "About Hello World", wxOK | wxICON_INFORMATION);
}

void TestFrame::OnExit(wxCommandEvent &event) { Close(true); }

wxBEGIN_EVENT_TABLE(TestFrame, wxFrame)
                EVT_MENU(ID_Hello, TestFrame::OnHello)
                EVT_MENU(wxID_ABOUT, TestFrame::OnAbout)
                EVT_MENU(wxID_EXIT, TestFrame::OnExit)
wxEND_EVENT_TABLE()