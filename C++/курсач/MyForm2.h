#pragma once
#include "MyForm.h";
using namespace System::IO;
namespace ������ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(160, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(160, 145);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(163, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm2::textBox2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(172, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"�����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"������";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(36, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(317, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 41);
			this->button2->TabIndex = 6;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(462, 30);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����ToolStripMenuItem, this->�����ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(129, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->�����ToolStripMenuItem->Text = L"Ƹ����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(129, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::����������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�����������ToolStripMenuItem_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(462, 345);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		label1->Text = "�����������";
		label2->Text = "�����";
		label3->Text = "������";
		button1->Text = "�����";
		button2->Text = "����";
		���������ToolStripMenuItem->Text = "���������";
		����ToolStripMenuItem->Text = "����";
		�������ToolStripMenuItem->Text = "�������";
		����������ToolStripMenuItem->Text = "����������";
		�����������ToolStripMenuItem->Text = "�����������";
		����ToolStripMenuItem->Text = "����";
		�������ToolStripMenuItem->Text = "�������";
		�������ToolStripMenuItem->Text = "�������";
		�����ToolStripMenuItem->Text = "�����";
		�����ToolStripMenuItem->Text = "Ƹ����";
		����ToolStripMenuItem->Text = "����";
		this->Text = "�����������";
	}

private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Authorization";
	label2->Text = "Login";
	label3->Text = "Password";
	button1->Text = "Exit";
	button2->Text = "Entrance";
	���������ToolStripMenuItem->Text = "";
	����ToolStripMenuItem->Text = "";
	�������ToolStripMenuItem->Text = "";
	����������ToolStripMenuItem->Text = "";
	�����������ToolStripMenuItem->Text = "";
	����ToolStripMenuItem->Text = "";
	�������ToolStripMenuItem->Text = "";
	�������ToolStripMenuItem->Text = "";
	�����ToolStripMenuItem->Text = "";
	�����ToolStripMenuItem->Text = "";
	����ToolStripMenuItem->Text = "";
	this->Text = "Authorization";
}

private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = "�����������";
	label2->Text = "����";
	label3->Text = "������";
	button1->Text = "�������";
	button2->Text = "������";
	���������ToolStripMenuItem->Text = "";
	����ToolStripMenuItem->Text = "";
	�������ToolStripMenuItem->Text = "";
	����������ToolStripMenuItem->Text = "";
	�����������ToolStripMenuItem->Text = "";
	����ToolStripMenuItem->Text = "";
	�������ToolStripMenuItem->Text = "";
	�������ToolStripMenuItem->Text = "";
	�����ToolStripMenuItem->Text = "";
	�����ToolStripMenuItem->Text = "";
	����ToolStripMenuItem->Text = "";
	this->Text = "�����������";
}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::IndianRed;
	button1->BackColor = Color::LightSeaGreen;
	button2->BackColor = Color::LightSeaGreen;
}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::DarkOliveGreen;
	button1->BackColor = Color::LightGoldenrodYellow;
	button2->BackColor = Color::LightGoldenrodYellow;
}

private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::AliceBlue;
	button1->BackColor = Color::MediumPurple;
	button2->BackColor = Color::MediumPurple;
}

private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::LightYellow;
	button1->BackColor = Color::PeachPuff;
	button2->BackColor = Color::PeachPuff;
}

private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->BackColor = Color::Aqua;
	button1->BackColor = Color::Orchid;
	button2->BackColor = Color::Orchid;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{

	StreamReader^ reader = gcnew StreamReader("output.txt");
	StreamReader^ reader2 = gcnew StreamReader("output2.txt");

	// ������ ������ ������ �� �����
	String^ savedValue = reader->ReadLine();
	String^ savedValue2 = reader2->ReadLine();

	// ��������� StreamReader
	reader->Close();
	reader2->Close();

	// �������� �������� �� ���������� ����
	String^ currentValue = textBox1->Text;
	String^ currentValue2 = textBox2->Text;

	// ���������� ��������
	if (savedValue == currentValue && savedValue2 == currentValue2)
	{

		MyForm^ form = gcnew MyForm(); //������ ����� ���������
		form->Owner = this;
		form->Show(); //��������� ����� �����
		this->Hide(); //�������� ������ �����
	}
	else
	{
		MessageBox::Show(this, "������������ � ����� ������ �� ����������", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox2->PasswordChar = '*';
}
};
}
