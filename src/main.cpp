#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>

// r013 19, 11, 2, 4
void ShowDesktop()
{
    INPUT inputs[8] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wScan = 19;
    inputs[0].ki.dwFlags = KEYEVENTF_SCANCODE;
    inputs[0].ki.time = 0;
    inputs[0].ki.wVk = 0;
    inputs[0].ki.dwExtraInfo = 0;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wScan = 11;
    inputs[1].ki.dwFlags = KEYEVENTF_SCANCODE;
    inputs[1].ki.time = 0;
    inputs[1].ki.wVk = 0;
    inputs[1].ki.dwExtraInfo = 0;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wScan = 2;
    inputs[2].ki.dwFlags = KEYEVENTF_SCANCODE;
    inputs[2].ki.time = 0;
    inputs[2].ki.wVk = 0;
    inputs[2].ki.dwExtraInfo = 0;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wScan = 4;
    inputs[3].ki.dwFlags = KEYEVENTF_SCANCODE;
    inputs[3].ki.time = 0;
    inputs[3].ki.wVk = 0;
    inputs[3].ki.dwExtraInfo = 0;


    inputs[4].type = INPUT_KEYBOARD;
    inputs[4].ki.wScan = 19;
    inputs[4].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    inputs[4].ki.time = 0;
    inputs[4].ki.wVk = 0;
    inputs[4].ki.dwExtraInfo = 0;


    inputs[5].type = INPUT_KEYBOARD;
    inputs[5].ki.wScan = 11;
    inputs[5].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    inputs[5].ki.time = 0;
    inputs[5].ki.wVk = 0;
    inputs[5].ki.dwExtraInfo = 0;

    inputs[6].type = INPUT_KEYBOARD;
    inputs[6].ki.wScan = 2;
    inputs[6].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    inputs[6].ki.time = 0;
    inputs[6].ki.wVk = 0;
    inputs[6].ki.dwExtraInfo = 0;

    inputs[7].type = INPUT_KEYBOARD;
    inputs[7].ki.wScan = 4;
    inputs[7].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
    inputs[7].ki.time = 0;
    inputs[7].ki.wVk = 0;
    inputs[7].ki.dwExtraInfo = 0;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    if (uSent != ARRAYSIZE(inputs))
    {
        //  OutputString(L"SendInput failed: 0x%x\n", HRESULT_FROM_WIN32(GetLastError()));
        std::cout << "E!";
    }  else {
      std::cout << "!!!!";
    }
}

int main() {
  std::this_thread::sleep_for(std::chrono::milliseconds(3000));
  ShowDesktop();
}
