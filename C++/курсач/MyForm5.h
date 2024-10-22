#pragma once
#include "MyForm.h";
#include <string>
#include<fstream>
#include <msclr/marshal_cppstd.h>
using namespace System::IO;

namespace курсач {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ розовыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фиолетовыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ голубойToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->темаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розовыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фиолетовыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->голубойToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->label1->Text = L"Аэропорт отравления";
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
			this->label2->Text = L"Аэрапорт прибытия";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"Домодедово", L"Нью-Йорк", L"Новосибирск", L"Амстердам",
					L"Москва", L"Санкт-Петербург", L"Казань", L"Красноярск", L"Минск", L"Канада", L"Самара", L"Хабаровск", L"Краснодар", L"Владивосток",
					L"Екатеринбург", L"Мэль", L"Адлер", L"Махачкала"
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
				L"Домодедово", L"Нью-Йорк", L"Новосибирск", L"Амстердам",
					L"Москва", L"Санкт-Петербург", L"Казань", L"Красноярск", L"Минск", L"Канада", L"Самара", L"Хабаровск", L"Краснодар", L"Владивосток",
					L"Екатеринбург", L"Мэль", L"Адлер", L"Махачкала"
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
			this->button1->Text = L"Найти";
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1315, 28);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->темаToolStripMenuItem,
					this->языкToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(108, 24);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			// 
			// темаToolStripMenuItem
			// 
			this->темаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->русскийToolStripMenuItem,
					this->английскийToolStripMenuItem, this->белорусскийToolStripMenuItem
			});
			this->темаToolStripMenuItem->Name = L"темаToolStripMenuItem";
			this->темаToolStripMenuItem->Size = System::Drawing::Size(130, 26);
			this->темаToolStripMenuItem->Text = L"Язык";
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::русскийToolStripMenuItem_Click);
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::английскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::белорусскийToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->розовыйToolStripMenuItem,
					this->фиолетовыйToolStripMenuItem, this->зеленыйToolStripMenuItem, this->голубойToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(130, 26);
			this->языкToolStripMenuItem->Text = L"Тема";
			// 
			// розовыйToolStripMenuItem
			// 
			this->розовыйToolStripMenuItem->Name = L"розовыйToolStripMenuItem";
			this->розовыйToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->розовыйToolStripMenuItem->Text = L"Розовый";
			this->розовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::розовыйToolStripMenuItem_Click);
			// 
			// фиолетовыйToolStripMenuItem
			// 
			this->фиолетовыйToolStripMenuItem->Name = L"фиолетовыйToolStripMenuItem";
			this->фиолетовыйToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->фиолетовыйToolStripMenuItem->Text = L"Фиолетовый";
			this->фиолетовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::фиолетовыйToolStripMenuItem_Click);
			// 
			// зеленыйToolStripMenuItem
			// 
			this->зеленыйToolStripMenuItem->Name = L"зеленыйToolStripMenuItem";
			this->зеленыйToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->зеленыйToolStripMenuItem->Text = L"Зеленый";
			this->зеленыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::зеленыйToolStripMenuItem_Click);
			// 
			// голубойToolStripMenuItem
			// 
			this->голубойToolStripMenuItem->Name = L"голубойToolStripMenuItem";
			this->голубойToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->голубойToolStripMenuItem->Text = L"Голубой";
			this->голубойToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm5::голубойToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(852, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Вернуться на главное окно";
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
				table->Columns->Add("Аэропорт отправления", String::typeid);
				table->Columns->Add("Аэропорт прибытия", String::typeid);
				table->Columns->Add("Стоимость", String::typeid);
			}
	private:
		std::string ConvertToStdString(String^ managedString)
		{
			return marshal_as<std::string>(managedString);
		}
		
	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) 
	{

		this->Text = "Билеты";

		comboBox1->SelectedIndex = 0;
		comboBox2->SelectedIndex = 0;

		comboBox1->Items->Clear();
		comboBox2->Items->Clear();

		comboBox1->Items->Add("Домодедово");
		comboBox1->Items->Add("Нью-Йорк");
		comboBox1->Items->Add("Новосибирск");
		comboBox1->Items->Add("Амстердам");
		comboBox1->Items->Add("Москва");
		comboBox1->Items->Add("Санкт-Петербург");
		comboBox1->Items->Add("Казань");
		comboBox1->Items->Add("Красноярск");
		comboBox1->Items->Add("Минск");
		comboBox1->Items->Add("Канада");
		comboBox1->Items->Add("Самара");
		comboBox1->Items->Add("Хабаровск");
		comboBox1->Items->Add("Краснодар");
		comboBox1->Items->Add("Владивасток");
		comboBox1->Items->Add("Екатеринбур");
		comboBox1->Items->Add("Мэль");
		comboBox1->Items->Add("Адлер");
		comboBox1->Items->Add("Махачкала");

		comboBox2->Items->Add("Домодедово");
		comboBox2->Items->Add("Нью-Йорк");
		comboBox2->Items->Add("Новосибирск");
		comboBox2->Items->Add("Амстердам");
		comboBox2->Items->Add("Москва");
		comboBox2->Items->Add("Санкт-Петербург");
		comboBox2->Items->Add("Казань");
		comboBox2->Items->Add("Красноярск");
		comboBox2->Items->Add("Минск");
		comboBox2->Items->Add("Канада");
		comboBox2->Items->Add("Самара");
		comboBox2->Items->Add("Хабаровск");
		comboBox2->Items->Add("Краснодар");
		comboBox2->Items->Add("Владивасток");
		comboBox2->Items->Add("Екатеринбур");
		comboBox2->Items->Add("Мэль");
		comboBox2->Items->Add("Адлер");
		comboBox2->Items->Add("Махачкала");


		Table();
		DataRow^ row = table->NewRow();
		row["Аэропорт отправления"] = "Домодедово";
		row["Аэропорт прибытия"] = "Адлер";
		row["Стоимость"] = "21000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Нью-Йорк";
		row["Аэропорт прибытия"] = "Домодедово";
		row["Стоимость"] = "45000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Новосибирск";
		row["Аэропорт прибытия"] = "Краснодар";
		row["Стоимость"] ="15000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Домодедово";
		row["Аэропорт прибытия"] = "Мэль";
		row["Стоимость"] = "9500";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Амстердам";
		row["Аэропорт прибытия"] = "Москва";
		row["Стоимость"] = "17000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Адлер";
		row["Аэропорт прибытия"] = "Домодедово";
		row["Стоимость"] = "22000";

		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Новосибирск";
		row["Аэропорт прибытия"] = "Красноярск";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Мосвка";
		row["Аэропорт прибытия"] = "Санкт-Петербург";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Санкт-Петербург";
		row["Аэропорт прибытия"] = "Минск";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Москва";
		row["Аэропорт прибытия"] = "Канада";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Новосибирск";
		row["Аэропорт прибытия"] = "Москва";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Красноярск";
		row["Аэропорт прибытия"] = "Санкт-Петербург";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Казань";
		row["Аэропорт прибытия"] = "Самара";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Казань";
		row["Аэропорт прибытия"] = "Москва";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Новосибирск";
		row["Аэропорт прибытия"] = "Самара";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Москва";
		row["Аэропорт прибытия"] = "Краснодар";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Новосибирск";
		row["Аэропорт прибытия"] = "Краснодар";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Адлер";
		row["Аэропорт прибытия"] = "Владивосток";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		row = table->NewRow();
		row["Аэропорт отправления"] = "Махачкала";
		row["Аэропорт прибытия"] = "Красноярск";
		row["Стоимость"] = "22000";
		table->Rows->Add(row);
		dataGridView1->DataSource = table;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Получение выбранных значений из ComboBox
		String^ selectedItem1 = comboBox1->Text;
		String^ selectedItem2 = comboBox2->Text;

		bool rowFound = false; // Флаг для отслеживания наличия найденной строки
		// Проход по каждой строке в DataGridView
		// Поиск совпадений в DataGrid View
		for each (DataGridViewRow ^ row in dataGridView1->Rows)
		{
			// Проверка, что значения ComboBox соответствуют значениям в ячейках
			if (row->Cells[0]->Value != nullptr && row->Cells[1]->Value != nullptr &&
				row->Cells[0]->Value->ToString() == selectedItem1 && row->Cells[1]->Value->ToString() == selectedItem2)
			{
				// Выделение строки с найденным совпадением
				row->Selected = true;
				// Прокрутка DataGrid View к найденной строке
				dataGridView1->FirstDisplayedScrollingRowIndex = row->Index;
				
				// Отображение гифки в PictureBox
				String^ gifImagePath = "C:\\курсач\\курсач\\самолёт.gif";
				pictureBox1->Image = Image::FromFile(gifImagePath);
				rowFound = true;
				break;
			}
		}
		// Если не найдено совпадений показать сообщение
		if (!rowFound)
		{
			//Вывод сообщение об ошибке
			MessageBox::Show("Строка не найдена.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void розовыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->BackColor = Color::HotPink;
	button1->BackColor = Color::Lavender;
}

private: System::Void фиолетовыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->BackColor = Color::MediumPurple;
	button1->BackColor = Color::Aquamarine;
}

private: System::Void зеленыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->BackColor = Color::DarkOliveGreen;
	button1->BackColor = Color::Lavender;
}

private: System::Void голубойToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->BackColor = Color::DodgerBlue;
	button1->BackColor = Color::PaleGreen;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Аэропорт отравления";
	label2->Text = "Аэропорт прибытия";
	button1->Text = "Найти";
	button2->Text = "Вернуться на главное окно";
	настройкиToolStripMenuItem->Text = "Настройки";
	темаToolStripMenuItem->Text = "Тема";
	языкToolStripMenuItem->Text = "Язык";
	русскийToolStripMenuItem->Text = "Русский";
	белорусскийToolStripMenuItem->Text = "Белорусский";
	английскийToolStripMenuItem->Text = "Английский";
	розовыйToolStripMenuItem->Text = "Розовый";
	фиолетовыйToolStripMenuItem->Text = "Фиолетовый";
	зеленыйToolStripMenuItem->Text = "Зелёный";
	голубойToolStripMenuItem->Text = "Голубой";
}
private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Departure airport";
	label2->Text = "Arrival airport";
	button1->Text = "Find";
	button2->Text = "Back to main window";
	настройкиToolStripMenuItem->Text = "Settings";
	темаToolStripMenuItem->Text = "Subject";
	языкToolStripMenuItem->Text = "Language";
	русскийToolStripMenuItem->Text = "Russian";
	белорусскийToolStripMenuItem->Text = "Belarusian";
	английскийToolStripMenuItem->Text = "English";
	розовыйToolStripMenuItem->Text = "Pink";
	фиолетовыйToolStripMenuItem->Text = "Purple";
	зеленыйToolStripMenuItem->Text = "Green";
	голубойToolStripMenuItem->Text = "Blue";
}

private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Аэрапорт атручэння";
	label2->Text = "Аэрапорт прыбыцця";
	button1->Text = "Знайсці";
	button2->Text = "Вярнуцца на глванае акно";
	настройкиToolStripMenuItem->Text = "Налады";
	темаToolStripMenuItem->Text = "Тэма";
	языкToolStripMenuItem->Text = "Мова";
	русскийToolStripMenuItem->Text = "Рускі";
	белорусскийToolStripMenuItem->Text = "Беларускі";
	английскийToolStripMenuItem->Text = "Англійскі";
	розовыйToolStripMenuItem->Text = "Ружовы";
	фиолетовыйToolStripMenuItem->Text = "Фіялетавы";
	зеленыйToolStripMenuItem->Text = "Зялёны";
	голубойToolStripMenuItem->Text = "Блакітны";
}

};
}