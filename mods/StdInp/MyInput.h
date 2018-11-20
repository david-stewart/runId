#ifndef MyInput__h
#define MyInput__h

#include "InputBase.h"
#include "TFile.h"
#include "TH1.h"

class MyInput : public InputBase {
    public:
    MyInput(int argc, const char** argv);
    MyInput(string argv);
    ~MyInput();

    TFile* file;
    TH1F*  hg;
    int nEvents;
};

#endif