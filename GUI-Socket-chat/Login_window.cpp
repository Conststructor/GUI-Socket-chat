#include "Login_window.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Net::Sockets;
using namespace System::Net;
using namespace System::Text;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	GUISocketchat::Login_window form;
	Application::Run(% form);
}
