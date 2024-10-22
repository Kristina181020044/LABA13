#pragma once

namespace курсач {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ToolStripMenuItem^ темаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ розовыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ синийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фиолетовыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;

	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->темаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->розовыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фиолетовыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(116, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(855, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->темаToolStripMenuItem,
					this->языкToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			// 
			// темаToolStripMenuItem
			// 
			this->темаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->розовыйToolStripMenuItem,
					this->синийToolStripMenuItem, this->зеленыйToolStripMenuItem, this->фиолетовыйToolStripMenuItem
			});
			this->темаToolStripMenuItem->Name = L"темаToolStripMenuItem";
			this->темаToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->темаToolStripMenuItem->Text = L"Тема";
			// 
			// розовыйToolStripMenuItem
			// 
			this->розовыйToolStripMenuItem->Name = L"розовыйToolStripMenuItem";
			this->розовыйToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->розовыйToolStripMenuItem->Text = L"Розовый";
			this->розовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm4::розовыйToolStripMenuItem_Click);
			// 
			// синийToolStripMenuItem
			// 
			this->синийToolStripMenuItem->Name = L"синийToolStripMenuItem";
			this->синийToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->синийToolStripMenuItem->Text = L"Синий";
			this->синийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm4::синийToolStripMenuItem_Click);
			// 
			// зеленыйToolStripMenuItem
			// 
			this->зеленыйToolStripMenuItem->Name = L"зеленыйToolStripMenuItem";
			this->зеленыйToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->зеленыйToolStripMenuItem->Text = L"Зелёный";
			this->зеленыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm4::зеленыйToolStripMenuItem_Click);
			// 
			// фиолетовыйToolStripMenuItem
			// 
			this->фиолетовыйToolStripMenuItem->Name = L"фиолетовыйToolStripMenuItem";
			this->фиолетовыйToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->фиолетовыйToolStripMenuItem->Text = L"Фиолетовый";
			this->фиолетовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm4::фиолетовыйToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->русскийToolStripMenuItem,
					this->белорусскийToolStripMenuItem, this->английскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm4::русскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm4::белорусскийToolStripMenuItem_Click);
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm4::английскийToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(519, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Данная программа предназначена для регистрации пассажиров на авиарейсы.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(539, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(266, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Администратор может добавить рейса, ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(197, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"удалить рейс или найти рейс.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(213, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(634, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Для регистрации на рейс пассажира, админитмратор должен  ввести личные данные пас"
				L"сажира";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(11, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(244, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"(ФИО),а так же паспортные данные.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(257, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(531, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Администратор и пассажир смогут искать нужные рейсы и билеты на эти рейсы.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(13, 135);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(448, 17);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Администратор имеет возможность поиска и удаления пассажиров.";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Tan;
			this->ClientSize = System::Drawing::Size(855, 196);
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
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Text = "Справка";
	}

private: System::Void розовыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::LightPink;
}

private: System::Void синийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::CadetBlue;
}

private: System::Void зеленыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::DarkOliveGreen;
}

private: System::Void фиолетовыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->BackColor = Color::MediumPurple;
}

private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Text = "Справка";
	label2->Text = "Данная программа предназначена для регистрации пассажиров на авиарейсы.";
	label3->Text = "Администратор может добавить рейса, ";
	label4->Text = "удалить рейс или найти рейс.";
	label5->Text = "Для регистрации на рейс пассажира, админитмратор должен  ввести личные данные пассажира";
	label6->Text = "(ФИО),а так же паспортные данные.";
	label8->Text = "Администратор и пассажир смогут искать нужные рейсы и билеты на эти рейсы.";
	label9->Text = "Администратор имеет возможность поиска и удаления пассажиров.";
	настройкиToolStripMenuItem->Text = "Настройки";
	темаToolStripMenuItem->Text = "Тема";
	языкToolStripMenuItem->Text = "Язык";
	розовыйToolStripMenuItem->Text = "Розовый";
	зеленыйToolStripMenuItem->Text = "Зелёный";
	синийToolStripMenuItem->Text = "Синий";
	фиолетовыйToolStripMenuItem->Text = "Фиолетовый";
	белорусскийToolStripMenuItem->Text = "Белорусский";
	русскийToolStripMenuItem->Text = "Русский";
	английскийToolStripMenuItem->Text = "Английский";
}

private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Text = "Даведка";
	label2->Text = "Гэта праграма прызначана для рэгістрацыі пасажыраў на авіярэйсы.";
	label3->Text = "Адміністратар можа дадаць рэйса,";
	label4->Text = "выдаліць рэйс ці знайсці рэйс.";
	label5->Text = "Для рэгістрацыі на рэйс пасажыра, адміністратар павінен увесці асабістыя дадзеныя пасажыра";
	label6->Text = "(ПІБ), а таксама пашпартныя дадзеныя.";
	label8->Text = "Адміністратар і пасажыр змогуць шукаць патрэбныя рэйсы і білеты на гэтыя рэйсы.";
	label9->Text = "Адміністратар мае магчымасць пошуку і выдаленні пасажыраў.";
	настройкиToolStripMenuItem->Text = "Налады";
	темаToolStripMenuItem->Text = "Тэма";
	языкToolStripMenuItem->Text = "Мова";
	розовыйToolStripMenuItem->Text = "Ружовы";
	зеленыйToolStripMenuItem->Text = "Зялёны";
	синийToolStripMenuItem->Text = "Сіні";
	фиолетовыйToolStripMenuItem->Text = "Фіялетавы";
	белорусскийToolStripMenuItem->Text = "Беларускі";
	русскийToolStripMenuItem->Text = "Рускі";
	английскийToolStripMenuItem->Text = "Англійскі";
}

private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Text = "Reference";
	label2->Text = "This program is designed to check in passengers for flights.";
	label3->Text = "Admin can add flight,";
	label4->Text = "delete a flight or find a flight.";
	label5->Text = "To register a passenger for a flight, the administrator must enter the passenger's personal data";
	label6->Text = "(full name), as well as passport data.";
	label8->Text = "The administrator and the passenger will be able to search for the desired flights and tickets for these flights.";
	label9->Text = "The administrator has the ability to search and delete passengers.";
	настройкиToolStripMenuItem->Text = "Settings";
	темаToolStripMenuItem->Text = "Subject";
	языкToolStripMenuItem->Text = "Language";
	розовыйToolStripMenuItem->Text = "Pink";
	зеленыйToolStripMenuItem->Text = "Green";
	синийToolStripMenuItem->Text = "Blue";
	фиолетовыйToolStripMenuItem->Text = "Purple";
	белорусскийToolStripMenuItem->Text = "Belarussian";
	русскийToolStripMenuItem->Text = "Russian";
	английскийToolStripMenuItem->Text = "English";
}
};
}
