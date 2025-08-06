#pragma once
#include <fstream>
#include <sstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "Register.h";

namespace AirBrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login_window
	/// </summary>
	public ref class Login_window : public System::Windows::Forms::Form
	{
	public:
		Login_window(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ login_label;
	private: System::Windows::Forms::TextBox^ login_login_input;
	private: System::Windows::Forms::TextBox^ login_password_input;
	private: System::Windows::Forms::Label^ login_login_label;
	private: System::Windows::Forms::Label^ login_password_label;
	private: System::Windows::Forms::Button^ login_button;
	private: System::Windows::Forms::Button^ login_register_button;
	private: System::Windows::Forms::CheckBox^ login_adminCheckbox;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login_window::typeid));
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->login_login_input = (gcnew System::Windows::Forms::TextBox());
			this->login_password_input = (gcnew System::Windows::Forms::TextBox());
			this->login_login_label = (gcnew System::Windows::Forms::Label());
			this->login_password_label = (gcnew System::Windows::Forms::Label());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->login_register_button = (gcnew System::Windows::Forms::Button());
			this->login_adminCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->login_label->Location = System::Drawing::Point(22, 9);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(241, 26);
			this->login_label->TabIndex = 0;
			this->login_label->Text = L"Welcome to AirBrowser";
			this->login_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->login_label->Click += gcnew System::EventHandler(this, &Login_window::label1_Click);
			// 
			// login_login_input
			// 
			this->login_login_input->Location = System::Drawing::Point(63, 97);
			this->login_login_input->Name = L"login_login_input";
			this->login_login_input->Size = System::Drawing::Size(154, 20);
			this->login_login_input->TabIndex = 1;
			// 
			// login_password_input
			// 
			this->login_password_input->Location = System::Drawing::Point(63, 148);
			this->login_password_input->Name = L"login_password_input";
			this->login_password_input->ShortcutsEnabled = false;
			this->login_password_input->Size = System::Drawing::Size(154, 20);
			this->login_password_input->TabIndex = 2;
			this->login_password_input->UseSystemPasswordChar = true;
			// 
			// login_login_label
			// 
			this->login_login_label->AutoSize = true;
			this->login_login_label->Location = System::Drawing::Point(60, 81);
			this->login_login_label->Name = L"login_login_label";
			this->login_login_label->Size = System::Drawing::Size(33, 13);
			this->login_login_label->TabIndex = 3;
			this->login_login_label->Text = L"Login";
			// 
			// login_password_label
			// 
			this->login_password_label->AutoSize = true;
			this->login_password_label->Location = System::Drawing::Point(60, 132);
			this->login_password_label->Name = L"login_password_label";
			this->login_password_label->Size = System::Drawing::Size(53, 13);
			this->login_password_label->TabIndex = 4;
			this->login_password_label->Text = L"Password";
			// 
			// login_button
			// 
			this->login_button->Location = System::Drawing::Point(63, 198);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(154, 23);
			this->login_button->TabIndex = 5;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Click += gcnew System::EventHandler(this, &Login_window::login_button_Click);
			// 
			// login_register_button
			// 
			this->login_register_button->Location = System::Drawing::Point(63, 227);
			this->login_register_button->Name = L"login_register_button";
			this->login_register_button->Size = System::Drawing::Size(154, 23);
			this->login_register_button->TabIndex = 6;
			this->login_register_button->Text = L"Register a new  account";
			this->login_register_button->UseVisualStyleBackColor = true;
			this->login_register_button->Click += gcnew System::EventHandler(this, &Login_window::login_register_button_Click);
			// 
			// login_adminCheckbox
			// 
			this->login_adminCheckbox->AutoSize = true;
			this->login_adminCheckbox->Location = System::Drawing::Point(63, 175);
			this->login_adminCheckbox->Name = L"login_adminCheckbox";
			this->login_adminCheckbox->Size = System::Drawing::Size(97, 17);
			this->login_adminCheckbox->TabIndex = 7;
			this->login_adminCheckbox->Text = L"Enter as Admin";
			this->login_adminCheckbox->UseVisualStyleBackColor = true;
			// 
			// Login_window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 367);
			this->Controls->Add(this->login_adminCheckbox);
			this->Controls->Add(this->login_register_button);
			this->Controls->Add(this->login_button);
			this->Controls->Add(this->login_password_label);
			this->Controls->Add(this->login_login_label);
			this->Controls->Add(this->login_password_input);
			this->Controls->Add(this->login_login_input);
			this->Controls->Add(this->login_label);
			this->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login_window";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login_window";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string inputLogin = msclr::interop::marshal_as<std::string>(login_login_input->Text);
		std::string inputPassword = msclr::interop::marshal_as<std::string>(login_password_input->Text);
		bool isAuthenticated = false;
		std::ifstream file;
		if (login_adminCheckbox->Checked) {
			file.open("admins.csv");
		}
		else {
			file.open("users.csv");
		}
		if (!file.is_open()) {
			MessageBox::Show("Failed to open a file! check project's directory", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		std::string line;
		while (std::getline(file, line)) {
			std::stringstream stream(line);
			std::string login, password;
			if (std::getline(stream, login, ',') && (std::getline(stream, password, ','))) {
				if (login == inputLogin && password == inputPassword) {
					isAuthenticated = true;
					break;
				}
			}
		}
		file.close();
		if (isAuthenticated) {
			MessageBox::Show("Logged in succesfully!", "Succes!", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Incorrect login or password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void login_register_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Register^ registerr = gcnew Register();
	registerr->Show();
}
};
}
