#pragma once
#include "Chat_window.h"
#include "Register_window.h"
#include "Functions.h"

namespace GUISocketchat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Login_window
	/// </summary>
	public ref class Login_window : public System::Windows::Forms::Form
	{
	public:
		Register_window^ regWindow;
		Chat_window^ chatWindow;

		Login_window(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Login_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ login_textBox;
	protected:
	private: System::Windows::Forms::TextBox^ password_textBox;
	private: System::Windows::Forms::Button^ login_button;
	private: System::Windows::Forms::Button^ register_button;
	private: System::Windows::Forms::Label^ login_label;
	private: System::Windows::Forms::Label^ password_label;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->login_textBox = (gcnew System::Windows::Forms::TextBox());
			this->password_textBox = (gcnew System::Windows::Forms::TextBox());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->register_button = (gcnew System::Windows::Forms::Button());
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// login_textBox
			// 
			this->login_textBox->Location = System::Drawing::Point(288, 125);
			this->login_textBox->Name = L"login_textBox";
			this->login_textBox->Size = System::Drawing::Size(211, 22);
			this->login_textBox->TabIndex = 0;
			// 
			// password_textBox
			// 
			this->password_textBox->Location = System::Drawing::Point(288, 194);
			this->password_textBox->Name = L"password_textBox";
			this->password_textBox->Size = System::Drawing::Size(211, 22);
			this->password_textBox->TabIndex = 1;
			// 
			// login_button
			// 
			this->login_button->Location = System::Drawing::Point(288, 252);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(211, 59);
			this->login_button->TabIndex = 2;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &Login_window::login_button_Click);
			// 
			// register_button
			// 
			this->register_button->Location = System::Drawing::Point(288, 366);
			this->register_button->Name = L"register_button";
			this->register_button->Size = System::Drawing::Size(211, 38);
			this->register_button->TabIndex = 3;
			this->register_button->Text = L"Register";
			this->register_button->UseVisualStyleBackColor = true;
			this->register_button->Click += gcnew System::EventHandler(this, &Login_window::register_button_Click);
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Location = System::Drawing::Point(371, 106);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(40, 16);
			this->login_label->TabIndex = 4;
			this->login_label->Text = L"Login";
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Location = System::Drawing::Point(357, 175);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(67, 16);
			this->password_label->TabIndex = 5;
			this->password_label->Text = L"Password";
			// 
			// Login_window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 504);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->register_button);
			this->Controls->Add(this->login_button);
			this->Controls->Add(this->password_textBox);
			this->Controls->Add(this->login_textBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Login_window";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login_window";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = login_textBox->Text;
		String^ password = password_textBox->Text;
		connectServer();
		chatWindow = gcnew Chat_window();
		chatWindow->Show();
	}
	private: System::Void register_button_Click(System::Object^ sender, System::EventArgs^ e) {
		regWindow = gcnew Register_window();
		regWindow->Show();
	}
	};
}
