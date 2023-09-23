#include "Chat_window.h"
//#include <WinSock2.h>
//#include <WS2tcpip.h>
//
//using namespace std;
//using namespace System;
//using namespace System::Windows::Forms;
//
//int chating() {
//	bool exitTrigger = false;
//
//	while (exitTrigger == false)
//	{
//		char buffer[300];
//		cout << "Enter message : ";
//		cin.getline(buffer, 300);
//		if (strcmp(buffer, "quit") == 0)
//			exitTrigger = true;
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
