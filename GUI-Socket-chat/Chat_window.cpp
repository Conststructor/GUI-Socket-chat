#include "Chat_window.h"
//#include "Login_window.cpp"
//#include <WinSock2.h>
//#include <WS2tcpip.h>

//using namespace std;
//using namespace System;
//using namespace System::Windows::Forms;
//using namespace System::Net::Sockets;
//using namespace System::Net;
//using namespace System::Text;

//SOCKET clientSocket;
//int port = 15000;
//WSADATA wsaData;
//int wsaerr;
//WORD wVersionRequested = MAKEWORD(2, 2);

//void sendingMessage(String^ message) {
	//array<Byte>^ byteMessage = Encoding::UTF8->GetBytes(message);
	//clientSocket->Send(byteMessage);
//}

//void recievingMessage() {
	//array<Byte>^ byteBuffer= gcnew array<Byte>(1024);
	//int bytes = clientSocket->Receive(byteBuffer);
	//String^ recievedMessage = Encoding::UTF8->GetString(byteBuffer, 0, bytes);
//}

//char buffer[300];
//
//void sending() {
//	int byteCount = send(clientSocket, buffer, 300, 0);
//	if (byteCount > 0 && byteCount < 300)
//	{	//cout << "Send message : " << buffer << endl;
//	}
//	if (byteCount > 300)
//	{
//		//cout << "Failed to send message : " << WSAGetLastError() << endl;
//		WSACleanup();
//	}
//}
//
//void recieving() {
//	int byteCount = recv(clientSocket, buffer, 300, 0);
//	if (byteCount > 0 && byteCount < 300)
//	{
//		//cout << "Server : " << buffer << endl;
//	}
//	if (byteCount > 300)
//	{
//		//cout << "Failed to recive message : " << WSAGetLastError() << endl;
//		WSACleanup();
//		return;
//	}
//}

//int chating() {
//	bool exitTrigger = false;
//
//	while (exitTrigger == false)
//	{
//		char buffer[300];
//		cout << "Enter message : ";
//		cin.getline(buffer, 300);
//		if (strcmp(buffer, "quit") == 0)
//
//		int byteCount = send(clientSocket, buffer, 300, 0);
//		if (byteCount > 0)
//			cout << "Send message : " << buffer << endl;
//		else
//		{
//			cout << "Failed to send message : " << WSAGetLastError() << endl;
//			WSACleanup();
//		}
//
//		byteCount = recv(clientSocket, buffer, 100, 0);
//		if (byteCount > 0)
//			cout << "Server : " << buffer << endl;
//		else
//		{
//			cout << "Failed to recive message : " << WSAGetLastError() << endl;
//			WSACleanup();
//			return 0;
//		}
//	}
//}


