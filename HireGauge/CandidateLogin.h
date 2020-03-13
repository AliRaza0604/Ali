#pragma once
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for CandidateLogin
	/// </summary>
	public ref class CandidateLogin : public System::Windows::Forms::Form
	{
	public:
		CandidateLogin(void)
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
		~CandidateLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  helpTxt1;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  titleTxt;
	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Button^  loginBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CandidateLogin::typeid));
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->titleTxt = (gcnew System::Windows::Forms::Label());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// helpTxt1
			// 
			this->helpTxt1->AutoSize = true;
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Location = System::Drawing::Point(276, 104);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(160, 26);
			this->helpTxt1->TabIndex = 0;
			this->helpTxt1->Text = L"Candidate Login";
			// 
			// titleTxt
			// 
			this->titleTxt->AutoSize = true;
			this->titleTxt->Font = (gcnew System::Drawing::Font(L"Candara", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->titleTxt->Location = System::Drawing::Point(182, -1);
			this->titleTxt->Name = L"titleTxt";
			this->titleTxt->Size = System::Drawing::Size(313, 78);
			this->titleTxt->TabIndex = 1;
			this->titleTxt->Text = L"HireGauge";
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Location = System::Drawing::Point(207, 173);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 2;
			this->emailLbl->Text = L"Email:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(173, 224);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Password:";
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(273, 170);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 4;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(273, 221);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(179, 31);
			this->password->TabIndex = 5;
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->ForeColor = System::Drawing::Color::Black;
			this->loginBtn->Location = System::Drawing::Point(294, 269);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(130, 51);
			this->loginBtn->TabIndex = 6;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &CandidateLogin::loginBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(211, 80);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(59, 70);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// CandidateLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(150)), 
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->ClientSize = System::Drawing::Size(680, 358);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->password);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->titleTxt);
			this->Controls->Add(this->helpTxt1);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(153)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"CandidateLogin";
			this->Text = L"CandidateLogin";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			bool login_flag = false;
			try{
				String^ strfilename = "candidateCredentials.txt";
				StreamReader ^reader=gcnew  StreamReader(strfilename);
				do
				{
					String^ LineOfText1 = reader->ReadLine();
					String^ LineOfText2 = reader->ReadLine();
					if ((email->Text == LineOfText1) && (password->Text == LineOfText2)){
						MessageBox::Show("Login Successful!");
						login_flag = true;
						break;
					}
				}while(reader->Peek() != -1);
				if (login_flag == false){
					MessageBox::Show("Error: Incorrect email and/or password.");
				}
			}
			catch(FileNotFoundException ^ex)
			{
				StreamWriter^ outFile = gcnew StreamWriter("candidateCredentials.txt");
				outFile->Close();
				MessageBox::Show("Error: There are currently no candidates in the database.");
			}
	}
};
}
