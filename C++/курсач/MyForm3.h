#pragma once
#include "MyForm.h";
#include <string>
#include <msclr/marshal_cppstd.h>
namespace курсач {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	private:
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ розовыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лагунаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тёмныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розовыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лагунаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тёмныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->label1->Text = L"№ Паспорта";
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
			this->label2->Text = L"Место выдачи";
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
			this->label3->Text = L"ФИО";
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
			this->label4->Text = L"Дата рождения";
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
			this->button1->Text = L"Зарегистрировать";
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
			this->label5->Text = L"№ Паспорта";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(370, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 33);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Найти";
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
			this->label6->Text = L"Удалить по ФИО";
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
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1258, 30);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветToolStripMenuItem,
					this->языкToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(100, 26);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			// 
			// цветToolStripMenuItem
			// 
			this->цветToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->розовыйToolStripMenuItem,
					this->лагунаToolStripMenuItem, this->тёмныйToolStripMenuItem
			});
			this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			this->цветToolStripMenuItem->Size = System::Drawing::Size(129, 26);
			this->цветToolStripMenuItem->Text = L"Цвет";
			// 
			// розовыйToolStripMenuItem
			// 
			this->розовыйToolStripMenuItem->Name = L"розовыйToolStripMenuItem";
			this->розовыйToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->розовыйToolStripMenuItem->Text = L"Розовый";
			this->розовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::розовыйToolStripMenuItem_Click);
			// 
			// лагунаToolStripMenuItem
			// 
			this->лагунаToolStripMenuItem->Name = L"лагунаToolStripMenuItem";
			this->лагунаToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->лагунаToolStripMenuItem->Text = L"Лагуна";
			this->лагунаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::лагунаToolStripMenuItem_Click);
			// 
			// тёмныйToolStripMenuItem
			// 
			this->тёмныйToolStripMenuItem->Name = L"тёмныйToolStripMenuItem";
			this->тёмныйToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->тёмныйToolStripMenuItem->Text = L"Тёмный";
			this->тёмныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::тёмныйToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->русскийToolStripMenuItem,
					this->английскийToolStripMenuItem, this->белорусскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(129, 26);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::русскийToolStripMenuItem_Click);
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::английскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm3::белорусскийToolStripMenuItem_Click);
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
			this->button4->Text = L"Вернуться на главное окно";
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
		table->Columns->Add("№ пасспорта", String::typeid);
		table->Columns->Add("Место выдачи", String::typeid);
		table->Columns->Add("ФИО", String::typeid);
		table->Columns->Add("Год рождения", String::typeid);
		
		}
	private: System::Void розовыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = Color::LightPink;
		button1->BackColor = Color::DarkSlateBlue;
		button2->BackColor = Color::DarkSlateBlue;
		button3->BackColor = Color::DarkSlateBlue;
		button4->BackColor = Color::DarkSlateBlue;
	}

private: System::Void лагунаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{

	this->BackColor = Color::MidnightBlue;
	button1->BackColor = Color::Lavender;
	button2->BackColor = Color::Lavender;
	button3->BackColor = Color::Lavender;
	button4->BackColor = Color::Lavender;
}

private: System::Void тёмныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->BackColor = Color::DarkOliveGreen;
	button1->BackColor = Color::LightYellow;
	button2->BackColor = Color::LightYellow;
	button3->BackColor = Color::LightYellow;
	button4->BackColor = Color::LightYellow;
}

private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	настройкиToolStripMenuItem->Text = "Настройки";
	русскийToolStripMenuItem->Text = "Русский";
	белорусскийToolStripMenuItem->Text = "Белорусский";
	английскийToolStripMenuItem->Text = "Английский";
	цветToolStripMenuItem->Text = "Цвет";
	розовыйToolStripMenuItem->Text = "Розовый";
	лагунаToolStripMenuItem->Text = "Лагуна";
	тёмныйToolStripMenuItem->Text = "Тёмный";
	языкToolStripMenuItem->Text = "Язык";
	настройкиToolStripMenuItem->Text = "Настройки";
	label1->Text = "№ Паспорта";
	label2->Text = "Место выдачи";
	label3->Text = "ФИО";
	label4->Text = "Год рождения";
	label5->Text = "№ Паспорта";
	label6->Text = "Удалить по ФИО";
	button1->Text = "Зарегестрировать";
	button2->Text = "Найти";
	button3->Text = "Удалить";
	button4->Text = "Вернуться на главное окно";
	
}
private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	настройкиToolStripMenuItem->Text = "Settings";
	русскийToolStripMenuItem->Text = "Russian";
	белорусскийToolStripMenuItem->Text = "Belarussian";
	английскийToolStripMenuItem->Text = "English";
	цветToolStripMenuItem->Text = "Color";
	розовыйToolStripMenuItem->Text = "Pink";
	лагунаToolStripMenuItem->Text = "Lagoon";
	тёмныйToolStripMenuItem->Text = "Drak";
	языкToolStripMenuItem->Text = "Language";
	настройкиToolStripMenuItem->Text = "Settings";
	button4->Text = "Back to main window";
	label1->Text = "№ passpotrs";
	label2->Text = "Place of issue";
	label3->Text = "SNP";
	label4->Text = "Year of birht";
	label5->Text = "№ passpotrs";
	label6->Text = "delete by SNP";
	button1->Text = "Register";
	button2->Text = "Find";
	button3->Text = "Delete";
}

private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	настройкиToolStripMenuItem->Text = "Налады";
	русскийToolStripMenuItem->Text = "Русский";
	белорусскийToolStripMenuItem->Text = "Белорусский";
	английскийToolStripMenuItem->Text = "Англійскі";
	настройкиToolStripMenuItem->Text = "Налады";
	цветToolStripMenuItem->Text = "Цвет";
	розовыйToolStripMenuItem->Text = "Розовый";
	лагунаToolStripMenuItem->Text = "Лагуна";
	тёмныйToolStripMenuItem->Text = "Тёмный";
	языкToolStripMenuItem->Text = "Язык";
	button4->Text = "Вярнуцца на глванае акно";
	label1->Text = "№ Пашпарты";
	label2->Text = "Месца выдачы";
	label3->Text = "ПІБ";
	label4->Text = "Год нараджэння";
	label5->Text = "№ Пашпарты";
	label6->Text = "Выдаліць па ПІБ";
	button1->Text = "Зарэгістраваць";
	button2->Text = "Знайсці";
	button3->Text = "Выдаліць";
}
	///	Добавление пассажира   
	///поиск по номеру паспорта
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// Получение значения из текстового поля textBox5
	String^ textBoxValuem = textBox5->Text;
	// Снятие выделения со всех строк в dataGridView1
	dataGridView1->ClearSelection();
	// Переменная для отслеживания, была ли найдена строка
	bool rowFound = false;
	// Перебор всех строк в dataGridView1
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		// Получение текущей строки dataGridView1
		DataGridViewRow^ row = dataGridView1->Rows[i];
		// Перебор всех столбцов в текущей строке
		for (int j = 0; j < dataGridView1->ColumnCount; j++)
		{
			// Проверка, не является ли значение ячейки пустым и равным textBoxValuem
			if (row->Cells[j]->Value != nullptr && row->Cells[j]->Value->ToString() == textBoxValuem)
			{
				// Если значение совпадает, выделяем строку
				row->Selected = true;
				rowFound = true;
				break;// Прекращаем перебор столбцов, так как значение уже найдено
			}
		}
		// Если строка была найдена, выходим из цикла
		if (rowFound)
			break;
	}
	// Обработка случая, когда строка не найдена
	if (!rowFound)
	{
		MessageBox::Show("Строка не найдена.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
	///удаление по ФИО
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Получаем значение из textBox6
	String^ textBoxValue = textBox6->Text;

	// Переменная для отслеживания найденной строки
	bool found = false;

	// Проходим по каждой строке в dataGridView1
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		// Получаем текущую строку
		DataGridViewRow^ row = dataGridView1->Rows[i];

		// Проверяем, что значение ячейки в первом столбце не является пустым и равно textBoxValue
		if (row->Cells[0]->Value != nullptr && row->Cells[0]->Value->ToString() == textBoxValue)
		{
			// Если условие выполняется, удаляем текущую строку из dataGridView1
			dataGridView1->Rows->Remove(row);
			found = true; // Устанавливаем флаг, что строка была найдена
			break; // Прекращаем дальнейший поиск, так как уже нашли и удалили строку
		}
	}
	// Если строка не была найдена, выбрасываем исключение
	if (!found)
	{
		throw gcnew Exception("Строка не найдена.");
	}
}
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) 
{
	Table();
	this->Text = "MyForm";
	DataRow^ row = table->NewRow();
	row = table->NewRow();
	row["№ пасспорта"] = "MP3578598";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Петров Юрий Владимирович";
	row["Год рождения"] = "12.11.2000";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "MP1338565";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Кузина Мария Эдуардовна";
	row["Год рождения"] = "23.09.1983";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AB3574134";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Баклав Петр Николаевич";
	row["Год рождения"] = "15.10.1978";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AB1395612";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Борш Нина Витальевна";
	row["Год рождения"] = "04.02.1996";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AE6524890";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Панчик Анна Дмитриевна";
	row["Год рождения"] = "14.10.2004";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AC3498675";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";


	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AB3498675";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AC3498449";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AE3498675";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AP3498675";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AC3498675";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AB3498675";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "AC3498675";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";
	table->Rows->Add(row);
	row = table->NewRow();
	row["№ пасспорта"] = "MP3498675";
	row["Место выдачи"] = "г.Москва";
	row["ФИО"] = "Шелф Максим Маркович";
	row["Год рождения"] = "17.02.2002";
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
	row["№ пасспорта"] = data1;
	row["Место выдачи"] = data2;
	row["ФИО"] = data3;
	row["Год рождения"] = data4;
	table->Rows->Add(row);
	dataGridView1->DataSource = table;
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
};
}
