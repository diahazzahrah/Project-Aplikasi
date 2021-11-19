#pragma once
#include "MyForm4.h"
namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		Form^ MyForm;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm3(Form^ Form3) {
			MyForm = Form3;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown17;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown18;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown19;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown20;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Prestige Elite Std", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(263, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"O R D E R";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"M A K A N A N ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Miyago";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Paket Ayam Geprek";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(12, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 15);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Penne Carbo w/ Chicken BP";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label6->Location = System::Drawing::Point(12, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Paket Burger FF";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(12, 184);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 15);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Pancong Messes";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm3::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label8->Location = System::Drawing::Point(12, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 15);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Soto Ayam";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label9->Location = System::Drawing::Point(12, 241);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 15);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Magelangan";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label10->Location = System::Drawing::Point(12, 270);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(137, 15);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Indomie Goreng + Telur";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label11->Location = System::Drawing::Point(12, 297);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(134, 15);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Indomie Goreng - Telur";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label12->Location = System::Drawing::Point(12, 324);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 15);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Indomie Kuah + Telur";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label13->Location = System::Drawing::Point(12, 350);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(122, 15);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Indomie Kuah - Telur";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(220, 55);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(92, 16);
			this->label14->TabIndex = 13;
			this->label14->Text = L"J U M L A H ";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(192, 75);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 14;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(192, 100);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 15;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(192, 126);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 16;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown3_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(192, 154);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 17;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(192, 179);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 20);
			this->numericUpDown5->TabIndex = 18;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(192, 206);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(120, 20);
			this->numericUpDown6->TabIndex = 19;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown6_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(192, 236);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(120, 20);
			this->numericUpDown7->TabIndex = 20;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown7_ValueChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(192, 265);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(120, 20);
			this->numericUpDown8->TabIndex = 21;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown8_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(192, 292);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(120, 20);
			this->numericUpDown9->TabIndex = 22;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown9_ValueChanged);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(192, 319);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(120, 20);
			this->numericUpDown10->TabIndex = 23;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown10_ValueChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(192, 345);
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(120, 20);
			this->numericUpDown11->TabIndex = 24;
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown11_ValueChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(417, 55);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(103, 16);
			this->label15->TabIndex = 25;
			this->label15->Text = L"M I N U M A N";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label16->Location = System::Drawing::Point(417, 80);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 15);
			this->label16->TabIndex = 26;
			this->label16->Text = L"Es Teh";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label17->Location = System::Drawing::Point(417, 105);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(71, 15);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Teh Hangat";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label18->Location = System::Drawing::Point(417, 131);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(54, 15);
			this->label18->TabIndex = 28;
			this->label18->Text = L"Es Jeruk";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label19->Location = System::Drawing::Point(417, 161);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(80, 15);
			this->label19->TabIndex = 29;
			this->label19->Text = L"Jeruk Hangat";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label20->Location = System::Drawing::Point(417, 184);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(38, 15);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Air Es";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label21->Location = System::Drawing::Point(417, 213);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(64, 15);
			this->label21->TabIndex = 31;
			this->label21->Text = L"Air Hangat";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label22->Location = System::Drawing::Point(417, 243);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 15);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Es Dawet";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label23->Location = System::Drawing::Point(417, 272);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(53, 15);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Es Burjo";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label24->Location = System::Drawing::Point(417, 297);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(80, 15);
			this->label24->TabIndex = 34;
			this->label24->Text = L"Es Kopi Susu";
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(540, 78);
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(120, 20);
			this->numericUpDown12->TabIndex = 35;
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown12_ValueChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(568, 55);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 16);
			this->label25->TabIndex = 36;
			this->label25->Text = L"J U M L A H ";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(540, 105);
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(120, 20);
			this->numericUpDown13->TabIndex = 37;
			this->numericUpDown13->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown13_ValueChanged);
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Location = System::Drawing::Point(540, 131);
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(120, 20);
			this->numericUpDown14->TabIndex = 38;
			this->numericUpDown14->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown14_ValueChanged);
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point(540, 156);
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(120, 20);
			this->numericUpDown15->TabIndex = 39;
			this->numericUpDown15->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown15_ValueChanged);
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Location = System::Drawing::Point(540, 182);
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(120, 20);
			this->numericUpDown16->TabIndex = 40;
			this->numericUpDown16->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown16_ValueChanged);
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Location = System::Drawing::Point(540, 208);
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(120, 20);
			this->numericUpDown17->TabIndex = 41;
			this->numericUpDown17->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown17_ValueChanged);
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->Location = System::Drawing::Point(540, 238);
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(120, 20);
			this->numericUpDown18->TabIndex = 42;
			this->numericUpDown18->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown18_ValueChanged);
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->Location = System::Drawing::Point(540, 267);
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(120, 20);
			this->numericUpDown19->TabIndex = 43;
			this->numericUpDown19->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown19_ValueChanged);
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->Location = System::Drawing::Point(540, 293);
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(120, 20);
			this->numericUpDown20->TabIndex = 44;
			this->numericUpDown20->ValueChanged += gcnew System::EventHandler(this, &MyForm3::numericUpDown20_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(609, 346);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 23);
			this->button1->TabIndex = 45;
			this->button1->Text = L"C O N F I R M ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(519, 346);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 23);
			this->button2->TabIndex = 46;
			this->button2->Text = L"C A N C E L";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(420, 324);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 47;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox1_TextChanged);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(704, 381);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown20);
			this->Controls->Add(this->numericUpDown19);
			this->Controls->Add(this->numericUpDown18);
			this->Controls->Add(this->numericUpDown17);
			this->Controls->Add(this->numericUpDown16);
			this->Controls->Add(this->numericUpDown15);
			this->Controls->Add(this->numericUpDown14);
			this->Controls->Add(this->numericUpDown13);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->numericUpDown12);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown20))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	MyForm->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int Miyago = Convert::ToInt32(this->numericUpDown1->Text);
		int Paket_Ayam_Geprek = Convert::ToInt32(this->numericUpDown2->Text);
		int Penne_Carbo_Chicken_BP = Convert::ToInt32(this->numericUpDown3->Text);
		int Paket_Burger_FF = Convert::ToInt32(this->numericUpDown4->Text);
		int Pancong_Meses = Convert::ToInt32(this->numericUpDown5->Text);
		int Soto_Ayam = Convert::ToInt32(this->numericUpDown6->Text);
		int Magelangan = Convert::ToInt32(this->numericUpDown7->Text);
		int Indomie_Goreng_Telur = Convert::ToInt32(this->numericUpDown8->Text);
		int Indomie_Goreng_Tanpa_Telur = Convert::ToInt32(this->numericUpDown9->Text);
		int Indomie_Kuah_Telur = Convert::ToInt32(this->numericUpDown10->Text);
		int Indomie_Kuah_Tanpa_Telur = Convert::ToInt32(this->numericUpDown11->Text);
		int Es_Teh = Convert::ToInt32(this->numericUpDown12->Text);
		int Teh_Hangat = Convert::ToInt32(this->numericUpDown13->Text);
		int Es_Jeruk = Convert::ToInt32(this->numericUpDown14->Text);
		int Jeruk_Hangat = Convert::ToInt32(this->numericUpDown15->Text);
		int Air_Es = Convert::ToInt32(this->numericUpDown16->Text);
		int Air_Hangat = Convert::ToInt32(this->numericUpDown17->Text);
		int Es_Dawet = Convert::ToInt32(this->numericUpDown18->Text);
		int Es_Burjo = Convert::ToInt32(this->numericUpDown19->Text);
		int Es_Kopi_Susu = Convert::ToInt32(this->numericUpDown20->Text);

		int a, b, c, d, q, f, g, h, i, j, k, l, m, n, o, p, pp, r, s, t;
		a = Miyago * 10000;
		b = Paket_Ayam_Geprek * 11000;
		c = Penne_Carbo_Chicken_BP * 22000;
		d = Paket_Burger_FF * 50000;
		q = Pancong_Meses * 9000;
		f = Soto_Ayam * 6000;
		g = Magelangan * 9000;
		h = Indomie_Goreng_Telur * 8000;
		i = Indomie_Goreng_Tanpa_Telur * 6000;
		j = Indomie_Kuah_Telur * 8000;
		k = Indomie_Kuah_Tanpa_Telur * 6000;
		l = Es_Teh * 2500;
		m = Teh_Hangat * 2500;
		n = Es_Jeruk * 3000;
		o = Jeruk_Hangat * 3000;
		p = Air_Es * 1000;
		pp = Air_Hangat * 1000;
		r = Es_Dawet * 5000;
		s = Es_Burjo * 6000;
		t = Es_Kopi_Susu * 18000;

		int result = a + b + c + d + q + f + g + h + i + j + k + l + m + n + o + p + pp + r + s + t;
		this->textBox1->Text = "Rp. " + result + ",-";
	
	this->Hide();
	MyForm4^ form5 = gcnew MyForm4(this->textBox1->Text);
	form5->ShowDialog();
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown8_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown9_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown10_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown11_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown12_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown13_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown14_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown15_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown16_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown17_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown18_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown19_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numericUpDown20_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
