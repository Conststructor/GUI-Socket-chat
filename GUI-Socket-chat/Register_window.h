#pragma once

namespace GUISocketchat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Register_window
	/// </summary>
	public ref class Register_window : public System::Windows::Forms::Form
	{
	public:
		Register_window(void)
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
		~Register_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ regLogin_textBox;
	private: System::Windows::Forms::TextBox^ regPassword_textBox;
	private: System::Windows::Forms::TextBox^ regPassword2_textBox;
	private: System::Windows::Forms::Button^ regRegister_button;
	private: System::Windows::Forms::Button^ regBack_button;
	private: System::Windows::Forms::Label^ regLogin_label;
	private: System::Windows::Forms::Label^ regPassword_label;
	private: System::Windows::Forms::Label^ regPassword2_label;


	protected:


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
			this->regLogin_textBox = (gcnew System::Windows::Forms::TextBox());
			this->regPassword_textBox = (gcnew System::Windows::Forms::TextBox());
			this->regPassword2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->regRegister_button = (gcnew System::Windows::Forms::Button());
			this->regBack_button = (gcnew System::Windows::Forms::Button());
			this->regLogin_label = (gcnew System::Windows::Forms::Label());
			this->regPassword_label = (gcnew System::Windows::Forms::Label());
			this->regPassword2_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// regLogin_textBox
			// 
			this->regLogin_textBox->Location = System::Drawing::Point(272, 85);
			this->regLogin_textBox->Name = L"regLogin_textBox";
			this->regLogin_textBox->Size = System::Drawing::Size(234, 22);
			this->regLogin_textBox->TabIndex = 0;
			this->regLogin_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// regPassword_textBox
			// 
			this->regPassword_textBox->Location = System::Drawing::Point(272, 153);
			this->regPassword_textBox->Name = L"regPassword_textBox";
			this->regPassword_textBox->Size = System::Drawing::Size(234, 22);
			this->regPassword_textBox->TabIndex = 1;
			this->regPassword_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// regPassword2_textBox
			// 
			this->regPassword2_textBox->Location = System::Drawing::Point(272, 215);
			this->regPassword2_textBox->Name = L"regPassword2_textBox";
			this->regPassword2_textBox->Size = System::Drawing::Size(234, 22);
			this->regPassword2_textBox->TabIndex = 2;
			this->regPassword2_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// regRegister_button
			// 
			this->regRegister_button->Location = System::Drawing::Point(272, 292);
			this->regRegister_button->Name = L"regRegister_button";
			this->regRegister_button->Size = System::Drawing::Size(234, 63);
			this->regRegister_button->TabIndex = 3;
			this->regRegister_button->Text = L"Register";
			this->regRegister_button->UseVisualStyleBackColor = true;
			this->regRegister_button->Click += gcnew System::EventHandler(this, &Register_window::regRegister_button_Click);
			// 
			// regBack_button
			// 
			this->regBack_button->Location = System::Drawing::Point(272, 395);
			this->regBack_button->Name = L"regBack_button";
			this->regBack_button->Size = System::Drawing::Size(234, 42);
			this->regBack_button->TabIndex = 4;
			this->regBack_button->Text = L"Back";
			this->regBack_button->UseVisualStyleBackColor = true;
			this->regBack_button->Click += gcnew System::EventHandler(this, &Register_window::regBack_button_Click);
			// 
			// regLogin_label
			// 
			this->regLogin_label->AutoSize = true;
			this->regLogin_label->Location = System::Drawing::Point(368, 66);
			this->regLogin_label->Name = L"regLogin_label";
			this->regLogin_label->Size = System::Drawing::Size(40, 16);
			this->regLogin_label->TabIndex = 5;
			this->regLogin_label->Text = L"Login";
			// 
			// regPassword_label
			// 
			this->regPassword_label->AutoSize = true;
			this->regPassword_label->Location = System::Drawing::Point(357, 134);
			this->regPassword_label->Name = L"regPassword_label";
			this->regPassword_label->Size = System::Drawing::Size(67, 16);
			this->regPassword_label->TabIndex = 6;
			this->regPassword_label->Text = L"Password";
			// 
			// regPassword2_label
			// 
			this->regPassword2_label->AutoSize = true;
			this->regPassword2_label->Location = System::Drawing::Point(332, 196);
			this->regPassword2_label->Name = L"regPassword2_label";
			this->regPassword2_label->Size = System::Drawing::Size(115, 16);
			this->regPassword2_label->TabIndex = 7;
			this->regPassword2_label->Text = L"Repeat Password";
			// 
			// Register_window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 509);
			this->Controls->Add(this->regPassword2_label);
			this->Controls->Add(this->regPassword_label);
			this->Controls->Add(this->regLogin_label);
			this->Controls->Add(this->regBack_button);
			this->Controls->Add(this->regRegister_button);
			this->Controls->Add(this->regPassword2_textBox);
			this->Controls->Add(this->regPassword_textBox);
			this->Controls->Add(this->regLogin_textBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Register_window";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register_window";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
private: System::Void regBack_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void regRegister_button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login = regLogin_textBox->Text;
	String^ pass1 = regPassword_textBox->Text;
	String^ pass2 = regPassword2_textBox->Text;

	if (login == "")
	{
		MessageBox::Show("login field are empty");
	}
	else
	{
		if (pass1 == pass2)
		{
			MessageBox::Show("success adding user :");
			MessageBox::Show(login);
		}
		if (pass1 != pass2)
		{
			MessageBox::Show("passwords are not match");
		}
	}

}
};
}