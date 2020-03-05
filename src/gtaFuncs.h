#pragma once

#define SHOWMSG_ADDY 0x588BE0

typedef char(__cdecl* _showMsg)(char*, int, int, int);

_showMsg showMsg = reinterpret_cast<_showMsg>(SHOWMSG_ADDY);

class GTAFuncsClass
{
public:
    void showMessage(char* yourString) // show msg textbox
    {
        showMsg(yourString, 0, 0, 0);
    }
};