#pragma once
#include "MyForm.h";
#include <string>
#include<fstream>
#include <msclr/marshal_cppstd.h>
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
	/// ������ ��� MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(42, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�������� ����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(421, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�������� ��������";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"����������", L"���-����", L"�����������", L"���������",
					L"������", L"�����-���������", L"������", L"����������", L"�����", L"������", L"������", L"���������", L"���������", L"�����������",
					L"������������", L"����", L"�����", L"���������"
			});
			this->comboBox1->Location = System::Drawing::Point(16, 79);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(212, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"����������", L"���-����", L"�����������", L"���������",
					L"������", L"�����-���������", L"������", L"����������", L"�����", L"������", L"������", L"���������", L"���������", L"�����������",
					L"������������", L"����", L"�����", L"���������"
			});
			this->comboBox2->Location = System::Drawing::Point(382, 79);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(212, 24);
			this->comboBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(653, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 154);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(608, 384);
			this->dataGridView1->TabIndex = 5;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1315, 28);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(108, 24);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(130, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::����������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::�����������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(130, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::�������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::�������ToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(852, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"��������� �� ������� ����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Location = System::Drawing::Point(694, 154);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(579, 391);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1315, 715);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		 public:
			DataTable^ table = gcnew DataTable();
			void Table() 
			{
				table->Columns->Add("�������� �����������", String::typeid);
				table->Columns->Add("�������� ��������", String::typeid);
				table->Columns->Add("���������", String::typeid);
			}
	private:
		std::string ConvertToStdString(String^ managedString)
		{
			return marshal_as<std::string>(managedString);
		}
		
	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) 
	{

		this->Text = "������";

		comboBox1->SelectedIndex = 0;
		comboBox2->SelectedIndex = 0;

		comboBox1->Items->Clear();
		comboBox2->Items->Clear();

		comboBox1->Items->Add("����������");
		comboBox1->Items->Add("���-����");
		comboBox1->Items->Add("�����������");
		comboBox1->Items->Add("���������");
		comboBox1->Items->Add("������");
		comboBox1->Items->Add("�����-���������");
		comboBox1->Items->Add("������");
		comboBox1->Items->Add("����������");
		comboBox1->Items->Add("�����");
		comboBox1->Items->Add("������");
		comboBox1->Items->Add("������");
		comboBox1->Items->Add("���������");
		comboBox1->Items->Add("���������");
		comboBox1->Items->Add("�����������");
		comboBox1->Items->Add("�����������");
		comboBox1->Items->Add("����");
		comboBox1->Items->Add("�����");
		comboBox1->Items->Add("���������");

		comboBox2->Items->Add("����������");
		comboBox2->Items->Add("���-����");
		comboBox2->Items->Add("�����������");
		comboBox2->Items->Add("���������");
		comboBox2->Items->Add("������");
		comboBox2->Items->Add("�����-���������");
		comboBox2->Items->Add("������");
		comboBox2->Items->Add("����������");
		comboBox2->Items->Add("�����");
		comboBox2->Items->Add("������");
		comboBox2->Items->Add("������");
		comboBox2->Items->Add("���������");
		comboBox2->Items->Add("���������");
		comboBox2->Items->Add("�����������");
		comboBox2->Items->Add("�����������");
		comboBox2->Items->Add("����");
		comboBox2->Items->Add("�����");
		comboBox2->Items->Add("���������");


		Table();
		DataRow^ row = table->NewRow();
		row["�������� �����������"] = "����������";
		row["�������� ��������"] = "�����";
		row["���������"] = "21000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "���-����";
		row["�������� ��������"] = "����������";
		row["���������"] = "45000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "�����������";
		row["�������� ��������"] = "���������";
		row["���������"] ="15000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "����������";
		row["�������� ��������"] = "����";
		row["���������"] = "9500";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "���������";
		row["�������� ��������"] = "������";
		row["���������"] = "17000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "�����";
		row["�������� ��������"] = "����������";
		row["���������"] = "22000";

		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "�����������";
		row["�������� ��������"] = "����������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "������";
		row["�������� ��������"] = "�����-���������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "�����-���������";
		row["�������� ��������"] = "�����";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "������";
		row["�������� ��������"] = "������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "�����������";
		row["�������� ��������"] = "������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "����������";
		row["�������� ��������"] = "�����-���������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "������";
		row["�������� ��������"] = "������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "������";
		row["�������� ��������"] = "������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "�����������";
		row["�������� ��������"] = "������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "������";
		row["�������� ��������"] = "���������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "�����������";
		row["�������� ��������"] = "���������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "�����";
		row["�������� ��������"] = "�����������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["�������� �����������"] = "���������";
		row["�������� ��������"] = "����������";
		row["���������"] = "22000";
		table->Rows->Add(row);
		dataGridView1->DataSource = table;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// ��������� ��������� �������� �� ComboBox
		String^ selectedItem1 = comboBox1->Text;
		String^ selectedItem2 = comboBox2->Text;

		bool rowFound = false; // ���� ��� ������������ ������� ��������� ������
		// ������ �� ������ ������ � DataGridView
		// ����� ���������� � DataGrid View
		for each (DataGridViewRow ^ row in dataGridView1->Rows)
		{
			// ��������, ��� �������� ComboBox ������������� ��������� � �������
			if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr &&
				row->Cells[0]->Value->ToString() == selectedItem1 && row->Cells[1]->Value->ToString() == selectedItem2)
			{
				// ��������� ������ � ��������� �����������
				row->Selected = true;
				// ��������� DataGrid View � ��������� ������
				dataGridView1->FirstDisplayedScrollingRowIndex = row->Index;
				
				// ����������� ����� � PictureBox
				String^ gifImagePath = "C:\\������\\������\\������.gif";
				pictureBox1->Image = Image::FromFile(gifImagePath);
				rowFound = true;
				break;
			}
		}
		// ���� �� ������� ���������� �������� ���������
		if (!rowFound)
		{
			//����� ��������� �� ������
			MessageBox::Show("������ �� �������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->BackColor = Color::HotPink;
	button1->BackColor = Color::Lavender;
}

private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->BackColor = Color::MediumPurple;
	button1->BackColor = Color::Aquamarine;
}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->BackColor = Color::DarkOliveGreen;
	button1->BackColor = Color::Lavender;
}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->BackColor = Color::DodgerBlue;
	button1->BackColor = Color::PaleGreen;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "�������� ����������";
	label2->Text = "�������� ��������";
	button1->Text = "�����";
	button2->Text = "��������� �� ������� ����";
	���������ToolStripMenuItem->Text = "���������";
	����ToolStripMenuItem->Text = "����";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "�������";
	�����������ToolStripMenuItem->Text = "�����������";
	����������ToolStripMenuItem->Text = "����������";
	�������ToolStripMenuItem->Text = "�������";
	����������ToolStripMenuItem->Text = "����������";
	�������ToolStripMenuItem->Text = "������";
	�������ToolStripMenuItem->Text = "�������";
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Departure airport";
	label2->Text = "Arrival airport";
	button1->Text = "Find";
	button2->Text = "Back to main window";
	���������ToolStripMenuItem->Text = "Settings";
	����ToolStripMenuItem->Text = "Subject";
	����ToolStripMenuItem->Text = "Language";
	�������ToolStripMenuItem->Text = "Russian";
	�����������ToolStripMenuItem->Text = "Belarusian";
	����������ToolStripMenuItem->Text = "English";
	�������ToolStripMenuItem->Text = "Pink";
	����������ToolStripMenuItem->Text = "Purple";
	�������ToolStripMenuItem->Text = "Green";
	�������ToolStripMenuItem->Text = "Blue";
}

private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "�������� ���������";
	label2->Text = "�������� ��������";
	button1->Text = "�������";
	button2->Text = "�������� �� ������� ����";
	���������ToolStripMenuItem->Text = "������";
	����ToolStripMenuItem->Text = "����";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "����";
	�����������ToolStripMenuItem->Text = "��������";
	����������ToolStripMenuItem->Text = "�������";
	�������ToolStripMenuItem->Text = "������";
	����������ToolStripMenuItem->Text = "Գ�������";
	�������ToolStripMenuItem->Text = "�����";
	�������ToolStripMenuItem->Text = "�������";
}

};
}