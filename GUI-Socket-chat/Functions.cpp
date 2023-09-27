#include <WinSock2.h>
#include <WS2tcpip.h>
#include <cstring>
#include "Functions.h"

using namespace System::Windows::Forms;

SOCKET clientSocket;
int port = 15000;
WSADATA wsaData;
int wsaerr;
WORD wVersionRequested = MAKEWORD(2, 2);

char buffer[300];

void connectServer() {

	wsaerr = WSAStartup(wVersionRequested, &wsaData);
	if (wsaerr != 0)
	{
		MessageBox::Show("WinSock dll not found");
		return;
	}
	else
	{
		MessageBox::Show("WinSock dll found\nStatus : OK");
	}

	// Set up client socket

	clientSocket = INVALID_SOCKET;
	clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (clientSocket == INVALID_SOCKET) {
		MessageBox::Show("Error at socket(): ");

		WSACleanup();
		return;
	}
	else
		MessageBox::Show("Socket is OK");

	//  Connect winth server

	sockaddr_in clientService;
	clientService.sin_family = AF_INET;
	InetPton(AF_INET, (PCSTR)("127.0.0.1"), &clientService.sin_addr.s_addr);
	clientService.sin_port = htons(port);
	if (connect(clientSocket, (SOCKADDR*)&clientService, sizeof(clientService)) == SOCKET_ERROR)
	{
		MessageBox::Show("Connetion failed: ");
		WSACleanup();
		return;
	}
	else
	{
		MessageBox::Show("Server connect is OK");
		return;
	}
}

void disconnectServer() {
	system("pause");
	WSACleanup();
	return;
}

void sending(char* buffer) {
	int byteCount = send(clientSocket, buffer, 300, 0);
	if (byteCount > 0 && byteCount < 300)
	{
		MessageBox::Show("Message send !");
	}
	if (byteCount > 300)
	{
		MessageBox::Show("Failed to send message !");
		WSACleanup();
	}
}

char* recieving() {
	while (true)
	{
		int byteCount = recv(clientSocket, buffer, 300, 0);
		if (byteCount==0)
		{
			MessageBox::Show("Server disconnected");
			return buffer;
			break;
		}
		if (byteCount > 0 && byteCount < 300)
		{
			return buffer;
		}
		if (byteCount > 300)
		{
			WSACleanup();
			return buffer;
			break;
		}
		return buffer;
	}
	return buffer;
}

void loginToServer(char* login, char* password) {
	char loginMessage[300];
	strcpy(loginMessage, login);
	strcpy(loginMessage, password);
	int byteCount = send(clientSocket, loginMessage, 300, 0);

	if (int byteCount = recv(clientSocket, buffer, 300, 0) & buffer=="login granted")
	{
		MessageBox::Show("You successfuly login");
	}
	else
	{
		MessageBox::Show("login denied");
		WSACleanup();
	}
}

void registerNewUser(char* login, char* password1, char* password2) {
	char registerMessage[300];
	strcpy(registerMessage, login);
	strcpy(registerMessage, password1);
	strcpy(registerMessage, password2);

	if (password1!=password2)
	{
		MessageBox::Show("Passwords are not match !");
		return;
	}
	else
	{
		int byteCount = send(clientSocket, registerMessage, 300, 0);
		if (int byteCount = recv(clientSocket, buffer, 300, 0) & buffer == "Login granted")
		{
			MessageBox::Show("You successfuly registred");
			return;
		}
		if (buffer == "Login in use")
		{
			MessageBox::Show("Login already used");
			WSACleanup();
			return;
		}
	}
}