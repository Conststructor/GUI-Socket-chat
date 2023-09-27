#pragma once

void connectServer();

void disconnectServer();

void sending(char* buffer);

char* recieving();

void loginToServer(char* login, char* password);

void registerNewUser(char* login, char* password1, char* password2);
