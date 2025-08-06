#pragma once

namespace AirBrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ register_label;
	private: System::Windows::Forms::CheckBox^ register_adminCheckbox;
	private: System::Windows::Forms::TextBox^ register_login_input;
	private: System::Windows::Forms::TextBox^ register_password_input;



	private: System::Windows::Forms::Button^ register_button;
	private: System::Windows::Forms::Label^ register_password_label;
	private: System::Windows::Forms::Label^ register_login_label;

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
			this->register_label = (gcnew System::Windows::Forms::Label());
			this->register_adminCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->register_login_input = (gcnew System::Windows::Forms::TextBox());
			this->register_password_input = (gcnew System::Windows::Forms::TextBox());
			this->register_button = (gcnew System::Windows::Forms::Button());
			this->register_password_label = (gcnew System::Windows::Forms::Label());
			this->register_login_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// register_label
			// 
			this->register_label->AutoSize = true;
			this->register_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_label->Location = System::Drawing::Point(54, 9);
			this->register_label->Name = L"register_label";
			this->register_label->Size = System::Drawing::Size(176, 20);
			this->register_label->TabIndex = 0;
			this->register_label->Text = L"Register a new account";
			this->register_label->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// register_adminCheckbox
			// 
			this->register_adminCheckbox->AutoSize = true;
			this->register_adminCheckbox->Location = System::Drawing::Point(74, 155);
			this->register_adminCheckbox->Name = L"register_adminCheckbox";
			this->register_adminCheckbox->Size = System::Drawing::Size(97, 17);
			this->register_adminCheckbox->TabIndex = 1;
			this->register_adminCheckbox->Text = L"Admin account";
			this->register_adminCheckbox->UseVisualStyleBackColor = true;
			this->register_adminCheckbox->CheckedChanged += gcnew System::EventHandler(this, &Register::adminCheckbox_CheckedChanged);
			// 
			// register_login_input
			// 
			this->register_login_input->Location = System::Drawing::Point(74, 64);
			this->register_login_input->Name = L"register_login_input";
			this->register_login_input->Size = System::Drawing::Size(140, 20);
			this->register_login_input->TabIndex = 2;
			// 
			// register_password_input
			// 
			this->register_password_input->Location = System::Drawing::Point(74, 119);
			this->register_password_input->Name = L"register_password_input";
			this->register_password_input->Size = System::Drawing::Size(140, 20);
			this->register_password_input->TabIndex = 3;
			// 
			// register_button
			// 
			this->register_button->Location = System::Drawing::Point(74, 190);
			this->register_button->Name = L"register_button";
			this->register_button->Size = System::Drawing::Size(140, 23);
			this->register_button->TabIndex = 4;
			this->register_button->Text = L"Register";
			this->register_button->UseVisualStyleBackColor = true;
			// 
			// register_password_label
			// 
			this->register_password_label->AutoSize = true;
			this->register_password_label->Location = System::Drawing::Point(71, 103);
			this->register_password_label->Name = L"register_password_label";
			this->register_password_label->Size = System::Drawing::Size(53, 13);
			this->register_password_label->TabIndex = 5;
			this->register_password_label->Text = L"Password";
			// 
			// register_login_label
			// 
			this->register_login_label->AutoSize = true;
			this->register_login_label->Location = System::Drawing::Point(71, 48);
			this->register_login_label->Name = L"register_login_label";
			this->register_login_label->Size = System::Drawing::Size(33, 13);
			this->register_login_label->TabIndex = 6;
			this->register_login_label->Text = L"Login";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->register_login_label);
			this->Controls->Add(this->register_password_label);
			this->Controls->Add(this->register_button);
			this->Controls->Add(this->register_password_input);
			this->Controls->Add(this->register_login_input);
			this->Controls->Add(this->register_adminCheckbox);
			this->Controls->Add(this->register_label);
			this->ForeColor = System::Drawing::SystemColors::Highlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void adminCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
