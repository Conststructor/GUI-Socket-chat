#pragma once

#include "Functions.h"
#include <msclr/marshal_cppstd.h>

//#include <cliext\vector>
//#include <cliext\algorithm>

//#include "Chat_window.cpp"
//#include "Login_window.cpp"
//#include "Login_window.h"

namespace GUISocketchat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Net::Sockets;

	/// <summary>
	/// ������ ��� Chat_window
	/// </summary>
	public ref class Chat_window : public System::Windows::Forms::Form
	{
	public:
		Chat_window(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			//recieving();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Chat_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ chat_richTextBox;
	protected:
	private: System::Windows::Forms::RichTextBox^ chatInput_richTextBox;
	private: System::Windows::Forms::Button^ chatSend_button;
	private: System::Windows::Forms::Button^ chatExit_button;
	private: System::Windows::Forms::Button^ chatSettings_button;
	private: System::Windows::Forms::ListBox^ listBox1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->chat_richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->chatInput_richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->chatSend_button = (gcnew System::Windows::Forms::Button());
			this->chatExit_button = (gcnew System::Windows::Forms::Button());
			this->chatSettings_button = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// chat_richTextBox
			// 
			this->chat_richTextBox->Location = System::Drawing::Point(240, 12);
			this->chat_richTextBox->Name = L"chat_richTextBox";
			this->chat_richTextBox->Size = System::Drawing::Size(607, 422);
			this->chat_richTextBox->TabIndex = 0;
			this->chat_richTextBox->Text = L"";
			// 
			// chatInput_richTextBox
			// 
			this->chatInput_richTextBox->Location = System::Drawing::Point(240, 440);
			this->chatInput_richTextBox->Name = L"chatInput_richTextBox";
			this->chatInput_richTextBox->Size = System::Drawing::Size(488, 101);
			this->chatInput_richTextBox->TabIndex = 1;
			this->chatInput_richTextBox->Text = L"";
			// 
			// chatSend_button
			// 
			this->chatSend_button->Location = System::Drawing::Point(735, 441);
			this->chatSend_button->Name = L"chatSend_button";
			this->chatSend_button->Size = System::Drawing::Size(112, 100);
			this->chatSend_button->TabIndex = 2;
			this->chatSend_button->Text = L"Send";
			this->chatSend_button->UseVisualStyleBackColor = true;
			this->chatSend_button->Click += gcnew System::EventHandler(this, &Chat_window::chatSend_button_Click);
			// 
			// chatExit_button
			// 
			this->chatExit_button->Location = System::Drawing::Point(12, 489);
			this->chatExit_button->Name = L"chatExit_button";
			this->chatExit_button->Size = System::Drawing::Size(222, 51);
			this->chatExit_button->TabIndex = 3;
			this->chatExit_button->Text = L"Exit";
			this->chatExit_button->UseVisualStyleBackColor = true;
			this->chatExit_button->Click += gcnew System::EventHandler(this, &Chat_window::chatExit_button_Click);
			// 
			// chatSettings_button
			// 
			this->chatSettings_button->Location = System::Drawing::Point(12, 426);
			this->chatSettings_button->Name = L"chatSettings_button";
			this->chatSettings_button->Size = System::Drawing::Size(222, 51);
			this->chatSettings_button->TabIndex = 4;
			this->chatSettings_button->Text = L"Settings";
			this->chatSettings_button->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(222, 404);
			this->listBox1->TabIndex = 5;
			// 
			// Chat_window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 553);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->chatSettings_button);
			this->Controls->Add(this->chatExit_button);
			this->Controls->Add(this->chatSend_button);
			this->Controls->Add(this->chatInput_richTextBox);
			this->Controls->Add(this->chat_richTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Chat_window";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chat_window";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chatExit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void chatSend_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inputText = chatInput_richTextBox->Text;
		array<Byte>^ byteMessage = Encoding::UTF8->GetBytes(inputText);
		std::string nativeString = msclr::interop::marshal_as<std::string>(inputText);
		char message[300];
		strcpy_s(message, nativeString.c_str());
		sending(message);
		chatInput_richTextBox->Clear();

		std::string natStr(recieving());
		String^ recStr = gcnew String(natStr.c_str());
		chat_richTextBox->AppendText(recStr + Environment::NewLine);
	}
};
}
