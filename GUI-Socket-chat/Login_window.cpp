#include "Login_window.h"
//#include <WinSock2.h>
//#include <WS2tcpip.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Net::Sockets;
using namespace System::Net;
using namespace System::Text;

//SOCKET clientSocket;
//int port = 15000;
//WSADATA wsaData;
//int wsaerr;
//WORD wVersionRequested = MAKEWORD(2, 2);
//
//// Initialize WSA / load DLL
//void connectServer() {
//
//	wsaerr = WSAStartup(wVersionRequested, &wsaData);
//	if (wsaerr != 0)
//	{
//		MessageBox::Show("WinSock dll not found");
//		return;
//	}
//	else
//	{
//		MessageBox::Show("WinSock dll found\nStatus : OK");
//	}
//
//	// Set up client socket
//
//	clientSocket = INVALID_SOCKET;
//	clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
//	if (clientSocket == INVALID_SOCKET) {
//		MessageBox::Show("Error at socket(): ");
//
//		WSACleanup();
//		return;
//	}
//	else
//		MessageBox::Show("Socket is OK");
//
//	//  Connect winth server
//
//	sockaddr_in clientService;
//	clientService.sin_family = AF_INET;
//	InetPton(AF_INET, (PCSTR)("127.0.0.1"), &clientService.sin_addr.s_addr);
//	clientService.sin_port = htons(port);
//	if (connect(clientSocket, (SOCKADDR*)&clientService, sizeof(clientService)) == SOCKET_ERROR)
//	{
//		MessageBox::Show("Connetion failed: ");
//		WSACleanup();
//		return;
//	}
//	else
//	{
//		MessageBox::Show("Server connect is OK");
//		return;
//	}
//}
//void disconnectServer() {
//	system("pause");
//	WSACleanup();
//	return;
//}

//ref class Connections
//{
//public:
//	Connections();
//	~Connections();
//
//private:
//	//static Socket cliSock;
//	Socket^ clientSocket = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);
//	int port = 15000;
//	IPAddress^ ipAddress = IPAddress::Parse("127.0.0.1");
//
//public:
//	void connectToServer() {
//		clientSocket->Connect(ipAddress, port);
//		/*if (clientSocket->Connect(ipAddress, port) == SocketError::Success)
//		{
//			MessageBox::Show("Connection to server established");
//		}
//		else
//		{
//			MessageBox::Show("Connection failed");
//		}*/
//	}
//
//	void sendingMessage(String^ message) {
//		array<Byte>^ byteMessage = Encoding::UTF8->GetBytes(message);
//		clientSocket->Send(byteMessage);
//	};
//
//	void recievingMessage() {
//		array<Byte>^ byteBuffer = gcnew array<Byte>(1024);
//		int bytes = clientSocket->Receive(byteBuffer);
//		String^ recievedMessage = Encoding::UTF8->GetString(byteBuffer, 0, bytes);
//	}
//};
//
//Connections::Connections()
//{
//}
//
//Connections::~Connections()
//{
//}

[STAThreadAttribute]


int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	GUISocketchat::Login_window form;
	Application::Run(% form);
}
