#include <WinSock2.h>
#include <WS2tcpip.h>
#include "Functions.h"

using namespace System::Windows::Forms;

SOCKET clientSocket;
int port = 15000;
WSADATA wsaData;
int wsaerr;
WORD wVersionRequested = MAKEWORD(2, 2);

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


char buffer[300];

void sending(char* buffer) {
	int byteCount = send(clientSocket, buffer, 300, 0);
	if (byteCount > 0 && byteCount < 300)
	{	//cout << "Send message : " << buffer << endl;
		MessageBox::Show("Message send !");
	}
	if (byteCount > 300)
	{
		//cout << "Failed to send message : " << WSAGetLastError() << endl;
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
			//cout << "Server : " << buffer << endl;
			return buffer;
		}
		if (byteCount > 300)
		{
			//cout << "Failed to recive message : " << WSAGetLastError() << endl;
			WSACleanup();
			return buffer;
			break;
		}
		return buffer;
	}
	return buffer;
}