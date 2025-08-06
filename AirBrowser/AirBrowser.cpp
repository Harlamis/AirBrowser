#include "pch.h"
#include "Login_window.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    AirBrowser::Login_window form;
    Application::Run(% form);
    return 0;
}
