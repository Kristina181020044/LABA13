#pragma once
#include "MyForm.h";
#include <string>
#include <msclr/marshal_cppstd.h>
namespace ������ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// ������ ��� MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	private:
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;









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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"� ��������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����� ������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(14, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"���";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(14, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"���� ��������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(187, 143);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(234, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 208);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(234, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(187, 262);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(234, 22);
			this->textBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(187, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(234, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"����������������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 396);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"� ��������";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(370, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 33);
			this->button2->TabIndex = 11;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 453);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"������� �� ���";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(187, 399);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(172, 22);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(187, 456);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(172, 22);
			this->textBox6->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(370, 452);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 32);
			this->button3->TabIndex = 15;
			this->button3->Text = L"�������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1258, 30);
			this->menuStrip1->TabIndex = 16;
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
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(100, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�����ToolStripMenuItem
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
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::�������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->�����ToolStripMenuItem->Text = L"Ҹ����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::�����ToolStripMenuItem_Click);
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
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::����������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::�����������ToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Ivory;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(497, 36);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(685, 532);
			this->dataGridView1->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 553);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 37);
			this->button4->TabIndex = 17;
			this->button4->Text = L"��������� �� ������� ����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(1258, 675);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
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
		table->Columns->Add("� ���������", String::typeid);
		table->Columns->Add("����� ������", String::typeid);
		table->Columns->Add("���", String::typeid);
		table->Columns->Add("��� ��������", String::typeid);
		
		}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::LightPink;
		button1->BackColor = Color::DarkSlateBlue;
		button2->BackColor = Color::DarkSlateBlue;
		button3->BackColor = Color::DarkSlateBlue;
		button4->BackColor = Color::DarkSlateBlue;
	}

private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{

	this->BackColor = Color::MidnightBlue;
	button1->BackColor = Color::Lavender;
	button2->BackColor = Color::Lavender;
	button3->BackColor = Color::Lavender;
	button4->BackColor = Color::Lavender;
}

private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->BackColor = Color::DarkOliveGreen;
	button1->BackColor = Color::LightYellow;
	button2->BackColor = Color::LightYellow;
	button3->BackColor = Color::LightYellow;
	button4->BackColor = Color::LightYellow;
}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	���������ToolStripMenuItem->Text = "���������";
	�������ToolStripMenuItem->Text = "�������";
	�����������ToolStripMenuItem->Text = "�����������";
	����������ToolStripMenuItem->Text = "����������";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "�������";
	������ToolStripMenuItem->Text = "������";
	�����ToolStripMenuItem->Text = "Ҹ����";
	����ToolStripMenuItem->Text = "����";
	���������ToolStripMenuItem->Text = "���������";
	label1->Text = "� ��������";
	label2->Text = "����� ������";
	label3->Text = "���";
	label4->Text = "��� ��������";
	label5->Text = "� ��������";
	label6->Text = "������� �� ���";
	button1->Text = "����������������";
	button2->Text = "�����";
	button3->Text = "�������";
	button4->Text = "��������� �� ������� ����";
	
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	���������ToolStripMenuItem->Text = "Settings";
	�������ToolStripMenuItem->Text = "Russian";
	�����������ToolStripMenuItem->Text = "Belarussian";
	����������ToolStripMenuItem->Text = "English";
	����ToolStripMenuItem->Text = "Color";
	�������ToolStripMenuItem->Text = "Pink";
	������ToolStripMenuItem->Text = "Lagoon";
	�����ToolStripMenuItem->Text = "Drak";
	����ToolStripMenuItem->Text = "Language";
	���������ToolStripMenuItem->Text = "Settings";
	button4->Text = "Back to main window";
	label1->Text = "� passpotrs";
	label2->Text = "Place of issue";
	label3->Text = "SNP";
	label4->Text = "Year of birht";
	label5->Text = "� passpotrs";
	label6->Text = "delete by SNP";
	button1->Text = "Register";
	button2->Text = "Find";
	button3->Text = "Delete";
}

private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	���������ToolStripMenuItem->Text = "������";
	�������ToolStripMenuItem->Text = "�������";
	�����������ToolStripMenuItem->Text = "�����������";
	����������ToolStripMenuItem->Text = "�������";
	���������ToolStripMenuItem->Text = "������";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "�������";
	������ToolStripMenuItem->Text = "������";
	�����ToolStripMenuItem->Text = "Ҹ����";
	����ToolStripMenuItem->Text = "����";
	button4->Text = "�������� �� ������� ����";
	label1->Text = "� ��������";
	label2->Text = "����� ������";
	label3->Text = "ϲ�";
	label4->Text = "��� ����������";
	label5->Text = "� ��������";
	label6->Text = "������� �� ϲ�";
	button1->Text = "�������������";
	button2->Text = "�������";
	button3->Text = "�������";
}
	///	���������� ���������   
	///����� �� ������ ��������
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// ��������� �������� �� ���������� ���� textBox5
	String^ textBoxValuem = textBox5->Text;
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
				break;// ���������� ������� ��������, ��� ��� �������� ��� �������
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
	///�������� �� ���
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	// �������� �������� �� textBox6
	String^ textBoxValue = textBox6->Text;

	// ���������� ��� ������������ ��������� ������
	bool found = false;

	// �������� �� ������ ������ � dataGridView1
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		// �������� ������� ������
		DataGridViewRow^ row = dataGridView1->Rows[i];

		// ���������, ��� �������� ������ � ������ ������� �� �������� ������ � ����� textBoxValue
		if (row->Cells[0]->Value != nullptr && row->Cells[0]->Value->ToString() == textBoxValue)
		{
			// ���� ������� �����������, ������� ������� ������ �� dataGridView1
			dataGridView1->Rows->Remove(row);
			found = true; // ������������� ����, ��� ������ ���� �������
			break; // ���������� ���������� �����, ��� ��� ��� ����� � ������� ������
		}
	}
	// ���� ������ �� ���� �������, ����������� ����������
	if (!found)
	{
		throw gcnew Exception("������ �� �������.");
	}
}
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) 
{
	Table();
	this->Text = "MyForm";
	DataRow^ row = table->NewRow();
	row = table->NewRow();
	row["� ���������"] = "MP3578598";
	row["����� ������"] = "�.������";
	row["���"] = "������ ���� ������������";
	row["��� ��������"] = "12.11.2000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "MP1338565";
	row["����� ������"] = "�.������";
	row["���"] = "������ ����� ����������";
	row["��� ��������"] = "23.09.1983";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AB3574134";
	row["����� ������"] = "�.������";
	row["���"] = "������ ���� ����������";
	row["��� ��������"] = "15.10.1978";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AB1395612";
	row["����� ������"] = "�.������";
	row["���"] = "���� ���� ����������";
	row["��� ��������"] = "04.02.1996";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AE6524890";
	row["����� ������"] = "�.������";
	row["���"] = "������ ���� ����������";
	row["��� ��������"] = "14.10.2004";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AC3498675";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";


	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AB3498675";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AC3498449";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AE3498675";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AP3498675";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AC3498675";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AB3498675";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "AC3498675";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["� ���������"] = "MP3498675";
	row["����� ������"] = "�.������";
	row["���"] = "���� ������ ��������";
	row["��� ��������"] = "17.02.2002";
	table->Rows->Add(row);
	dataGridView1->DataSource = table;
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
	

	std::string dat = ConvertToStdString(data1);

	DataRow^ row = table->NewRow();
	row["� ���������"] = data1;
	row["����� ������"] = data2;
	row["���"] = data3;
	row["��� ��������"] = data4;
	table->Rows->Add(row);
	dataGridView1->DataSource = table;
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
};
}
