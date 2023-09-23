#include "Login_window.h"
#include <WinSock2.h>
#include <WS2tcpip.h>

using namespace System;
using namespace System::Windows::Forms;

SOCKET clientSocket;
int port = 15000;
WSADATA wsaData;
int wsaerr;
WORD wVersionRequested = MAKEWORD(2, 2);

// Initialize WSA / load DLL
void connectServer() {

	wsaerr = WSAStartup(wVersionRequested, &wsaData);
	if (wsaerr != 0)
	{
		MessageBox::Show("WinSock dll not found");
		//cout << "WinSock dll not found\n";
		return;
	}
	else
	{
		MessageBox::Show("WinSock dll found\nStatus :");
		//cout << "WinSock dll found\n";
		//cout << "Status : " << wsaData.szSystemStatus << endl;
	}

	// Set up client socket

	clientSocket = INVALID_SOCKET;
	clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (clientSocket == INVALID_SOCKET) {
		MessageBox::Show("Error at socket(): ");

		//cout << "Error at socket(): " << WSAGetLastError() << endl;
		WSACleanup();
		return;
	}
	else
		MessageBox::Show("Socket is OK");
		//cout << "Socket is OK\n";

	//  Connect winth server

	sockaddr_in clientService;
	clientService.sin_family = AF_INET;
	InetPton(AF_INET, (PCSTR)("127.0.0.1"), &clientService.sin_addr.s_addr);
	clientService.sin_port = htons(port);
	if (connect(clientSocket, (SOCKADDR*)&clientService, sizeof(clientService)) == SOCKET_ERROR)
	{
		MessageBox::Show("Connetion failed: ");
		//cout << "Connetion failed: " << WSAGetLastError() << endl;
		WSACleanup();
		return;
	}
	else
	{
		MessageBox::Show("Server connect is OK");
		//cout << "Server connect is OK\n";
		return;
	}
}
void disconnectServer() {
	system("pause");
	WSACleanup();
	return;
}

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	GUISocketchat::Login_window form;
	connectServer();
	Application::Run(% form);
	disconnectServer();
}
