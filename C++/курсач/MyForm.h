#pragma once
#include "MyForm3.h";
#include "MyForm4.h";
#include "MyForm5.h";
#include <string>
#include <msclr/marshal_cppstd.h>
#include <vector>
#include <algorithm>
using namespace System::IO;
namespace ������ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{

			InitializeComponent();
			
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label12;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripMenuItem1,
					this->���������ToolStripMenuItem, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6,
					this->toolStripMenuItem7
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(105, 24);
			this->toolStripMenuItem1->Text = L"���������";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(78, 24);
			this->toolStripMenuItem3->Text = L"������";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->������ToolStripMenuItem,
					this->�����ToolStripMenuItem, this->�������ToolStripMenuItem, this->������������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->toolStripMenuItem4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(59, 24);
			this->toolStripMenuItem4->Text = L"����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->������ToolStripMenuItem->Text = L"׸����";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->������������ToolStripMenuItem->Text = L"������-������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->toolStripMenuItem5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(60, 24);
			this->toolStripMenuItem5->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(83, 24);
			this->toolStripMenuItem6->Text = L"�������";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(99, 24);
			this->toolStripMenuItem7->Text = L"���������";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(4, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"� ���������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(4, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"������������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(4, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"�������� �����������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(4, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"���� �����������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(7, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"���������� ����";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(364, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"�������� ��������";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(367, 88);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(163, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"����� �����������";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(367, 123);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"���������";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(4, 289);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(175, 20);
			this->label9->TabIndex = 9;
			this->label9->Text = L"����� �� ����������";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(4, 345);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 20);
			this->label10->TabIndex = 10;
			this->label10->Text = L"����� �� ������ �����";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(4, 400);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 20);
			this->label11->TabIndex = 11;
			this->label11->Text = L"������� ����";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(228, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(122, 22);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(228, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(122, 22);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(228, 125);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 22);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(228, 171);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(122, 22);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(228, 214);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(122, 22);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(551, 49);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(129, 22);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(551, 88);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(129, 22);
			this->textBox7->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(551, 125);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(129, 22);
			this->textBox8->TabIndex = 19;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(287, 289);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(175, 22);
			this->textBox9->TabIndex = 20;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(287, 348);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(175, 22);
			this->textBox10->TabIndex = 21;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(542, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 36);
			this->button1->TabIndex = 22;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(542, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 33);
			this->button2->TabIndex = 23;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(542, 344);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 30);
			this->button3->TabIndex = 24;
			this->button3->Text = L"�����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(542, 397);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 32);
			this->button4->TabIndex = 25;
			this->button4->Text = L"�������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DarkOliveGreen;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(722, 49);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1167, 692);
			this->dataGridView1->TabIndex = 26;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(287, 403);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(175, 22);
			this->textBox11->TabIndex = 27;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(31, 726);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(607, 38);
			this->button5->TabIndex = 28;
			this->button5->Text = L"������� ���������";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"21000", L"45000", L"15000", L"9500", L"17000",
					L"22000", L"10000", L"12000", L"18500", L"65000", L"13000", L"7000", L"4500", L"10000", L"6000", L"8000", L"14000", L"15000",
					L"9500", L"13500"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 483);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(231, 24);
			this->comboBox1->TabIndex = 29;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(300, 484);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(195, 23);
			this->button6->TabIndex = 30;
			this->button6->Text = L"�����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 451);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(219, 20);
			this->label12->TabIndex = 31;
			this->label12->Text = L"����� �� ��������� �������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1924, 795);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		DataTable^ table = gcnew DataTable();
		void Table()
		{
			table->Columns->Add("� �����", String::typeid);
			table->Columns->Add("������������", String::typeid);
			table->Columns->Add("�������� �����������", String::typeid);
			table->Columns->Add("�������� ��������", String::typeid);
			table->Columns->Add("���� �����������", String::typeid);
			table->Columns->Add("����� �����������", String::typeid);
			table->Columns->Add("���������� ����", String::typeid);
			table->Columns->Add("���������", String::typeid);
		}
	private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::LightSlateGray;
		//this->BackColor = Color::White;
	}

	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::LightGray;
		//this->BackColor = Color::White;
	}

	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::LightPink;
		//this->BackColor = Color::White;
	}

	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::LightGreen;
		//this->BackColor = Color::White;
	}

	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::LightBlue;
		//this->BackColor = Color::White;
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		toolStripMenuItem1->Text = "���������";
		toolStripMenuItem3->Text = "������";
		toolStripMenuItem4->Text = "����";
		������ToolStripMenuItem->Text = "׸����";
		�����ToolStripMenuItem->Text = "�����";
		�������ToolStripMenuItem->Text = "�������";
		������������ToolStripMenuItem->Text = "������-������";
		�������ToolStripMenuItem->Text = "�������";
		toolStripMenuItem5->Text = "����";
		�������ToolStripMenuItem->Text = "�������";
		�����������ToolStripMenuItem->Text = "�����������";
		����������ToolStripMenuItem->Text = "����������";
		toolStripMenuItem6->Text = "�������";
		toolStripMenuItem7->Text = "���������";
		���������ToolStripMenuItem->Text = "���������";
		label1->Text = "� ���������";
		label2->Text = "������������";
		label3->Text = "�������� �����������";
		label4->Text = "���� �����������";
		label5->Text = "���������� ����";
		label6->Text = "�������� ��������";
		label7->Text = "����� �����������";
		label8->Text = "���������";
		label9->Text = "����� �� ��������� ��������";
		label10->Text = "����� �� ������ �����";
		label11->Text = "������� ����";
		label12->Text = "����� �� ��������� �������";
		button1->Text = "��������";
		button2->Text = "�����";
		button3->Text = "�����";
		button4->Text = "�������";
		button5->Text = "������� ���������";
		button6->Text = "�����";
		this->Text = "��������";
	}
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		toolStripMenuItem1->Text = "�������";
		toolStripMenuItem3->Text = "������";
		toolStripMenuItem4->Text = "�����";
		������ToolStripMenuItem->Text = "�����";
		�����ToolStripMenuItem->Text = "����";
		�������ToolStripMenuItem->Text = "������";
		������������ToolStripMenuItem->Text = "������-�����";
		�������ToolStripMenuItem->Text = "�������";
		toolStripMenuItem5->Text = "����";
		�������ToolStripMenuItem->Text = "����";
		�����������ToolStripMenuItem->Text = "��������";
		����������ToolStripMenuItem->Text = "�������";
		toolStripMenuItem6->Text = "�������";
		toolStripMenuItem7->Text = "��������";
		���������ToolStripMenuItem->Text = "�������";
		label1->Text = "� �������";
		label2->Text = "����������";
		label3->Text = "�������� ����������";
		label4->Text = "���� ����������";
		label5->Text = "���������� ����";
		label6->Text = "�������� ��������";
		label7->Text = "��� ����������";
		label8->Text = "����";
		label9->Text = "����� �� ��������� ��������";
		label10->Text = "����� �� ������ �����";
		label11->Text = "������� ����";
		label12->Text = "����� �� ����� �����";
		button1->Text = "������";
		button2->Text = "�������";
		button3->Text = "�������";
		button4->Text = "�������";
		button5->Text = "������� ��������";
		button6->Text = "������� ";
		this->Text = "��������";
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		toolStripMenuItem1->Text = "Flights";
		toolStripMenuItem3->Text = "Tickets";
		toolStripMenuItem4->Text = "Color";
		������ToolStripMenuItem->Text = "Black";
		�����ToolStripMenuItem->Text = "Gray";
		�������ToolStripMenuItem->Text = "Pink";
		������������ToolStripMenuItem->Text = "Light-green";
		�������ToolStripMenuItem->Text = "Blue";
		toolStripMenuItem5->Text = "Language";
		�������ToolStripMenuItem->Text = "Russian";
		�����������ToolStripMenuItem->Text = "Belarusian";
		����������ToolStripMenuItem->Text = "English";
		toolStripMenuItem6->Text = "Reference";
		toolStripMenuItem7->Text = "Save";
		���������ToolStripMenuItem->Text = "Passengers";
		label1->Text = "� Flight";
		label2->Text = "Airline";
		label3->Text = "Departure airport";
		label4->Text = "Departure date";
		label5->Text = "Number of seats";
		label6->Text = "Arrival airport";
		label7->Text = "Departure time";
		label8->Text = "Price";
		label9->Text = "Search by arrival airport";
		label10->Text = "Search by flight number";
		label11->Text = "Delete flight";
		label12->Text = "Search by ticket price";
		button1->Text = "Add";
		button2->Text = "Find";
		button3->Text = "Find";
		button4->Text = "Delete";
		button5->Text = "Close program";
		button6->Text = "Find";
		this->Text = "Airport";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm3^ form3 = gcnew MyForm3();
	form3->Owner = this;
	form3->Show();
	/*this->Hide();*/
}
	   ///����� �� ����������
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// ��������� �������� �� ���������� ���� textBox9
	String^ textBoxValuem = textBox9->Text;
	// ������ ��������� �� ���� ����� � dataGridView1
	dataGridView1->ClearSelection();
	// ���������� ��� ������������, ���� �� ������� ������
	bool rowFound = false;
	// ������� ���� ����� � dataGridView1
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		// ��������� ������� ������ dataGridView1
		DataGridViewRow^ row = dataGridView1->Rows[i];
		// ������� ���� ����� � dataGridView1
		for (int j = 0; j < dataGridView1->ColumnCount; j++)
		{
			// ��������, �� �������� �� �������� ������ ������ � ������ textBoxValuem
			if (row->Cells[j]->Value != nullptr && row->Cells[j]->Value->ToString() == textBoxValuem)
			{
				// ���� �������� ���������, �������� ������
				row->Selected = true;
				rowFound = true;
				break;
			}
		}
		// ���� ������ ���� �������, ������� �� �����
		if (rowFound)
			break;
	}
	// ��������� ������, ����� ������ �� �������
	if (!rowFound)
	{
		MessageBox::Show("������ �� �������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm4^ form4 = gcnew MyForm4();
	form4->Owner = this;
	form4->Show();
	/*this->Hide();*/
}
private: System::Void toolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ a = textBox1->Text;
	String^ b = textBox2->Text;
	String^ c = textBox3->Text;
	String^ d = textBox4->Text;
	String^ p = textBox5->Text;
	String^ r = textBox6->Text;
	String^ t = textBox7->Text;
	String^ y = textBox8->Text;
	String^ u = textBox9->Text;
	String^ i = textBox10->Text;
	String^ x = textBox11->Text;
	StreamWriter^ write = gcnew StreamWriter("baz.txt");
	write->WriteLine(a);
	write->WriteLine(b);
	write->WriteLine(c);
	write->WriteLine(d);
	write->WriteLine(p);
	write->WriteLine(r);
	write->WriteLine(t);
	write->WriteLine(y);
	write->WriteLine(u);
	write->WriteLine(i);
	write->WriteLine(x);
	write->Close();
	MessageBox::Show(this, "������ ���������", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
	///����� �� ������
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// ��������� �������� �� ���������� ���� textBox10
		String^ textBoxValuem = textBox10->Text;
		// ������ ��������� �� ���� ����� � dataGridView1
		dataGridView1->ClearSelection();
		// ���������� ��� ������������, ���� �� ������� ������
		bool rowFound = false;
		// ������� ���� ����� � dataGridView1
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			// ��������� ������� ������ dataGridView1
			DataGridViewRow^ row = dataGridView1->Rows[i];
			// ������� ���� �������� � ������� ������
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				// ��������, �� �������� �� �������� ������ ������ � ������ textBoxValuem
				if (row->Cells[j]->Value != nullptr && row->Cells[j]->Value->ToString() == textBoxValuem)
				{
					// ���� �������� ���������, �������� ������
					row->Selected = true;
					rowFound = true;
					break;
				}

			}
			// ���� ������ ���� �������, ������� �� �����
			if (rowFound)
				break;
		}
		// ��������� ������, ����� ������ �� �������
		if (!rowFound)
		{
			MessageBox::Show("������ �� �������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	   ///�������� �� �����
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// �������� �������� �� textBox11
	String^ textBoxValue = textBox11->Text;
	// ���������� ��� ������������ ��������� ������
	bool found = false;
	// ������� ���� ����� � dataGridView1
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		// ��������� ������� ������ dataGridView1
		DataGridViewRow^row= dataGridView1->Rows[i];
		// ��������, �� �������� �� �������� ������ � ������ ������� ������ � ������ textBoxValue
		if (row->Cells[0]->Value != nullptr && row->Cells[0]->Value->ToString() == textBoxValue)
		{
			// ���� �������� ���������, ������� ������
			dataGridView1->Rows->Remove(row);
			found = true; // ������������� ����, ��� ������ ���� �������
			break;
		}
	}
	// ���� ������ �� ���� �������, ����������� ����������
	if (!found)
	{
		throw gcnew Exception("������ �� �������.");
	}
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	Table();
	this->Text = "��������";
	DataRow^ row = table->NewRow();
	row["� �����"] = "123 - 004";
	row["������������"] = "��������";
	row["�������� �����������"] = "����������";
	row["�������� ��������"] = "�����";
	row["���� �����������"] = "11.10.2023";
	row["����� �����������"] = "14:00";
	row["���������� ����"] = "146/150";
	row["���������"] = "21000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "123 - 005";
	row["������������"] = "������";
	row["�������� �����������"] = "���-����";
	row["�������� ��������"] = "����������";
	row["���� �����������"] = "14.10.2023";
	row["����� �����������"] = "10:00";
	row["���������� ����"] = "125/140";
	row["���������"] = "45000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "123 - 006";
	row["������������"] = "������";
	row["�������� �����������"] = "�����������";
	row["�������� ��������"] = "���������";
	row["���� �����������"] = "15.10.2023";
	row["����� �����������"] = "11:30";
	row["���������� ����"] = "138/140";
	row["���������"] = "15000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "123 - 008";
	row["������������"] = "��������";
	row["�������� �����������"] = "����������";
	row["�������� ��������"] = "����";
	row["���� �����������"] = "15.10.2023";
	row["����� �����������"] = "16:55";
	row["���������� ����"] = "130/155";
	row["���������"] = "9500";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "124 - 009";
	row["������������"] = "��������";
	row["�������� �����������"] = "���������";
	row["�������� ��������"] = "������";
	row["���� �����������"] = "16.10.2023";
	row["����� �����������"] = "9:30";
	row["���������� ����"] = "122/145";
	row["���������"] = "17000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "125 - 006";
	row["������������"] = "������";
	row["�������� �����������"] = "�����";
	row["�������� ��������"] = "����������";
	row["���� �����������"] = "17.10.2023";
	row["����� �����������"] = "22:15";
	row["���������� ����"] = "130/135";
	row["���������"] = "22000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "126 - 002";
	row["������������"] = "������";
	row["�������� �����������"] = "�����������";
	row["�������� ��������"] = "����������";
	row["���� �����������"] = "17.10.2023";
	row["����� �����������"] = "11:30";
	row["���������� ����"] = "145/160";
	row["���������"] = "10000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "126 - 006";
	row["������������"] = "��������";
	row["�������� �����������"] = "������";
	row["�������� ��������"] = "�����-���������";
	row["���� �����������"] = "18.10.2023";
	row["����� �����������"] = "7:30";
	row["���������� ����"] = "160/175";
	row["���������"] = "12000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "126 - 007";
	row["������������"] = "�������";
	row["�������� �����������"] = "�����-���������";
	row["�������� ��������"] = "�����";
	row["���� �����������"] = "19.10.2023";
	row["����� �����������"] = "16:50";
	row["���������� ����"] = "138/140";
	row["���������"] = "18500";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "126 - 009";
	row["������������"] = "������";
	row["�������� �����������"] = "������";
	row["�������� ��������"] = "������";
	row["���� �����������"] = "22.10.2023";
	row["����� �����������"] = "22:25";
	row["���������� ����"] = "127/140";
	row["���������"] = "65000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "126 - 011";
	row["������������"] = "������";
	row["�������� �����������"] = "�����������";
	row["�������� ��������"] = "������";
	row["���� �����������"] = "23.10.2023";
	row["����� �����������"] = "11:30";
	row["���������� ����"] = "128/140";
	row["���������"] = "13000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "127 - 001";
	row["������������"] = "��������";
	row["�������� �����������"] = "����������";
	row["�������� ��������"] = "�����-���������";
	row["���� �����������"] = "28.10.2023";
	row["����� �����������"] = "08:30";
	row["���������� ����"] = "136/140";
	row["���������"] = "7000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "127 - 003";
	row["������������"] = "��������";
	row["�������� �����������"] = "������";
	row["�������� ��������"] = "������";
	row["���� �����������"] = "03.11.2023";
	row["����� �����������"] = "11:30";
	row["���������� ����"] = "110/120";
	row["���������"] = "4500";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "127 - 004";
	row["������������"] = "��������";
	row["�������� �����������"] = "������";
	row["�������� ��������"] = "������";
	row["���� �����������"] = "05.11.2023";
	row["����� �����������"] = "17:30";
	row["���������� ����"] = "115/120";
	row["���������"] = "10000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "127 - 006";
	row["������������"] = "��������";
	row["�������� �����������"] = "�����������";
	row["�������� ��������"] = "������";
	row["���� �����������"] = "12.11.2023";
	row["����� �����������"] = "10:30";
	row["���������� ����"] = "120/140";
	row["���������"] = "6000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "127 - 007";
	row["������������"] = "������";
	row["�������� �����������"] = "������";
	row["�������� ��������"] = "���������";
	row["���� �����������"] = "13.11.2023";
	row["����� �����������"] = "11:30";
	row["���������� ����"] = "132/140";
	row["���������"] = "8000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "127 - 009";
	row["������������"] = "������";
	row["�������� �����������"] = "������������";
	row["�������� ��������"] = "���������";
	row["���� �����������"] = "15.11.2023";
	row["����� �����������"] = "13:00";
	row["���������� ����"] = "125/130";
	row["���������"] = "14000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "128 - 003";
	row["������������"] = "��������";
	row["�������� �����������"] = "�����������";
	row["�������� ��������"] = "���������";
	row["���� �����������"] = "16.11.2023";
	row["����� �����������"] = "10:30";
	row["���������� ����"] = "125/140";
	row["���������"] = "15000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "128 - 005";
	row["������������"] = "��������";
	row["�������� �����������"] = "�����";
	row["�������� ��������"] = "�����������";
	row["���� �����������"] = "16.11.2023";
	row["����� �����������"] = "16:40";
	row["���������� ����"] = "130/155";
	row["���������"] = "9500";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� �����"] = "128 - 007";
	row["������������"] = "�� ����";
	row["�������� �����������"] = "���������";
	row["�������� ��������"] = "����������";
	row["���� �����������"] = "17.11.2023";
	row["����� �����������"] = "00:30";
	row["���������� ����"] = "130/145";
	row["���������"] = "13500";
	table->Rows->Add(row);
	dataGridView1->DataSource = table;

	comboBox1->SelectedIndex = 0;
	comboBox1->Items->Clear();

	comboBox1->Items->Add("21000");
	comboBox1->Items->Add("45000");
	comboBox1->Items->Add("15000");
	comboBox1->Items->Add("9500");
	comboBox1->Items->Add("17000");
	comboBox1->Items->Add("22000");
	comboBox1->Items->Add("10000");
	comboBox1->Items->Add("12000");
	comboBox1->Items->Add("18500");
	comboBox1->Items->Add("65000");
	comboBox1->Items->Add("13000");
	comboBox1->Items->Add("7000");
	comboBox1->Items->Add("4500");
	comboBox1->Items->Add("10000");
	comboBox1->Items->Add("6000");
	comboBox1->Items->Add("8000");
	comboBox1->Items->Add("14000");
	comboBox1->Items->Add("15000");
	comboBox1->Items->Add("9500");
	comboBox1->Items->Add("13500");
}
private:
std::string ConvertToStdString(String^ managedString)
{
	return marshal_as<std::string>(managedString);
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{

	String^ data1 = textBox1->Text;
	String^ data2 = textBox2->Text;
	String^ data3 = textBox3->Text;
	String^ data4 = textBox4->Text;
	String^ data5 = textBox5->Text;
	String^ data6 = textBox6->Text;
	String^ data7 = textBox7->Text;
	String^ data8 = textBox8->Text;

	std::string dat = ConvertToStdString(data1);
	
	DataRow^ row = table->NewRow();
	row["� �����"] = data1;
	row["������������"] = data2;
	row["�������� �����������"] = data3;
	row["�������� ��������"] = data4;
	row["���� �����������"] = data5;
	row["����� �����������"] = data6;
	row["���������� ����"] = data7;
	row["���������"] = data8;
	table->Rows->Add(row);
	dataGridView1->DataSource = table;
	
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MyForm5^ form5 = gcnew MyForm5();
	form5->Owner = this;
	form5->Show();
	/*this->Hide();*/
}
/// �������� ����������
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ selectedItem1 = comboBox1->Text;
	// ������ �� ������ ������ � DataGridView
	// ����� ���������� � DataGrid View
	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		// ��������� �������� � ������� �� ���������� ComboBox
		if (row->Cells[7]->Value->ToString() == selectedItem1)
		{
			// ��������� ������ � ��������� �����������
			row->Selected = true;
			// ��������� DataGrid View � ��������� ������
			dataGridView1->FirstDisplayedScrollingRowIndex = row->Index;
			break;
		}
	}
}
};
}
