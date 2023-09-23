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
			this->SuspendLayout();
			// 
			// regLogin_textBox
			// 
			this->regLogin_textBox->Location = System::Drawing::Point(272, 85);
			this->regLogin_textBox->Name = L"regLogin_textBox";
			this->regLogin_textBox->Size = System::Drawing::Size(234, 22);
			this->regLogin_textBox->TabIndex = 0;
			this->regLogin_textBox->Text = L"Login";
			this->regLogin_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// regPassword_textBox
			// 
			this->regPassword_textBox->Location = System::Drawing::Point(272, 153);
			this->regPassword_textBox->Name = L"regPassword_textBox";
			this->regPassword_textBox->Size = System::Drawing::Size(234, 22);
			this->regPassword_textBox->TabIndex = 1;
			this->regPassword_textBox->Text = L"Password";
			this->regPassword_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// regPassword2_textBox
			// 
			this->regPassword2_textBox->Location = System::Drawing::Point(272, 215);
			this->regPassword2_textBox->Name = L"regPassword2_textBox";
			this->regPassword2_textBox->Size = System::Drawing::Size(234, 22);
			this->regPassword2_textBox->TabIndex = 2;
			this->regPassword2_textBox->Text = L"Repeat password";
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
			// Register_window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 509);
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
};
}