#pragma once
#include"MyForm2.h"
#include"MyForm.h"
using namespace System::IO;
namespace êóğñà÷ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãîëóáîéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñåğûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğîçîâûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îğàíæåâûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÿçûêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëîğóññêèéToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->íàñòğîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãîëóáîéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñåğûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğîçîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îğàíæåâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÿçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëèéñêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëîğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(302, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(358, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(302, 187);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(358, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm1::textBox2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(41, 252);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 59);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Âûõîä";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(302, 252);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(216, 59);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Âîéòè â ñóùåñòâóşùèé àêêàóíò";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(576, 252);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 59);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Çàğåãèñòğèğîâàòüñÿ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(169, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(548, 47);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Ğåãèñòğàöèÿ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 28);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ëîãèí";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(51, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 28);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ïàğîëü";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->íàñòğîéêèToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(822, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// íàñòğîéêèToolStripMenuItem
			// 
			this->íàñòğîéêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->öâåòToolStripMenuItem,
					this->ÿçûêToolStripMenuItem
			});
			this->íàñòğîéêèToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->íàñòğîéêèToolStripMenuItem->Name = L"íàñòğîéêèToolStripMenuItem";
			this->íàñòğîéêèToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->íàñòğîéêèToolStripMenuItem->Text = L"Íàñòğîéêè";
			// 
			// öâåòToolStripMenuItem
			// 
			this->öâåòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ãîëóáîéToolStripMenuItem,
					this->ñåğûéToolStripMenuItem, this->ğîçîâûéToolStripMenuItem, this->îğàíæåâûéToolStripMenuItem
			});
			this->öâåòToolStripMenuItem->Name = L"öâåòToolStripMenuItem";
			this->öâåòToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->öâåòToolStripMenuItem->Text = L"Öâåò";
			// 
			// ãîëóáîéToolStripMenuItem
			// 
			this->ãîëóáîéToolStripMenuItem->Name = L"ãîëóáîéToolStripMenuItem";
			this->ãîëóáîéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ãîëóáîéToolStripMenuItem->Text = L"Ãîëóáîé";
			this->ãîëóáîéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ãîëóáîéToolStripMenuItem_Click);
			// 
			// ñåğûéToolStripMenuItem
			// 
			this->ñåğûéToolStripMenuItem->Name = L"ñåğûéToolStripMenuItem";
			this->ñåğûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ñåğûéToolStripMenuItem->Text = L"Ñåğûé";
			this->ñåğûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ñåğûéToolStripMenuItem_Click);
			// 
			// ğîçîâûéToolStripMenuItem
			// 
			this->ğîçîâûéToolStripMenuItem->Name = L"ğîçîâûéToolStripMenuItem";
			this->ğîçîâûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ğîçîâûéToolStripMenuItem->Text = L"Ğîçîâûé";
			this->ğîçîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ğîçîâûéToolStripMenuItem_Click);
			// 
			// îğàíæåâûéToolStripMenuItem
			// 
			this->îğàíæåâûéToolStripMenuItem->Name = L"îğàíæåâûéToolStripMenuItem";
			this->îğàíæåâûéToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->îğàíæåâûéToolStripMenuItem->Text = L"Îğàíæåâûé";
			this->îğàíæåâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::îğàíæåâûéToolStripMenuItem_Click);
			// 
			// ÿçûêToolStripMenuItem
			// 
			this->ÿçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->àíãëèéñêèéToolStripMenuItem,
					this->ğóññêèéToolStripMenuItem, this->áåëîğóññêèéToolStripMenuItem
			});
			this->ÿçûêToolStripMenuItem->Name = L"ÿçûêToolStripMenuItem";
			this->ÿçûêToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ÿçûêToolStripMenuItem->Text = L"ßçûê";
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			this->àíãëèéñêèéToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->àíãëèéñêèéToolStripMenuItem->Text = L"Àíãëèéñêèé";
			this->àíãëèéñêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::àíãëèéñêèéToolStripMenuItem_Click);
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->ğóññêèéToolStripMenuItem->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ğóññêèéToolStripMenuItem_Click);
			// 
			// áåëîğóññêèéToolStripMenuItem
			// 
			this->áåëîğóññêèéToolStripMenuItem->Name = L"áåëîğóññêèéToolStripMenuItem";
			this->áåëîğóññêèéToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->áåëîğóññêèéToolStripMenuItem->Text = L"Áåëîğóññêèé";
			this->áåëîğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::áåëîğóññêèéToolStripMenuItem_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(822, 402);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"Ğåãèñòğàöèÿ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm2^ form2 = gcnew MyForm2();
	form2->Show();
	this->Hide();
}
private: System::Void ãîëóáîéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::LightBlue;
	button1->BackColor = Color::LightCoral;
	button2->BackColor = Color::LightCoral;
	button3->BackColor = Color::LightCoral;
}

private: System::Void ñåğûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::LightGray;
	button1->BackColor = Color::LightGreen;
	button2->BackColor = Color::LightGreen;
	button3->BackColor = Color::LightGreen;
}

private: System::Void ğîçîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->BackColor = Color::LightPink;
	button1->BackColor = Color::MediumPurple;
	button2->BackColor = Color::MediumPurple;
	button3->BackColor = Color::MediumPurple;
}

private: System::Void îğàíæåâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->BackColor = Color::Orange;
	button1->BackColor = Color::LightYellow;
	button2->BackColor = Color::LightYellow;
	button3->BackColor = Color::LightYellow;
}

private: System::Void àíãëèéñêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Registration";
	label2->Text = "Login";
	label3->Text = "Password";
	button1->Text = "Exit";
	button2->Text = "Login to an existing account";
	button3->Text = "Register";
	ÿçûêToolStripMenuItem->Text = "Language";
	ğóññêèéToolStripMenuItem->Text = "Russian";
	àíãëèéñêèéToolStripMenuItem->Text = "English";
	áåëîğóññêèéToolStripMenuItem->Text = "Belarusian";
	íàñòğîéêèToolStripMenuItem->Text = "Setting";
	öâåòToolStripMenuItem->Text = "Color";
	ğîçîâûéToolStripMenuItem->Text = "Pink";
	îğàíæåâûéToolStripMenuItem->Text = "Orange";
	ñåğûéToolStripMenuItem->Text = "Gray";
	ãîëóáîéToolStripMenuItem->Text = "Blue";
	this->Text = "Registration";
}

private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Ğåãèñòğàöèÿ";
	label2->Text = "Ëîãèí";
	label3->Text = "Ïàğîëü";
	button1->Text = "Âûõîä";
	button2->Text = "Âîéòè â ñóùåñòâóşùèé àêêàóíò";
	button3->Text = "Çàğåãèñòğèğîâàòüñÿ";
	ÿçûêToolStripMenuItem->Text = "ßçûê";
	ğóññêèéToolStripMenuItem->Text = "Ğóññêèé";
	àíãëèéñêèéToolStripMenuItem->Text = "Àíãëèéñêèé";
	áåëîğóññêèéToolStripMenuItem->Text = "Áåëàğóññêèé";
	íàñòğîéêèToolStripMenuItem->Text = "Íàñòğîéêè";
	öâåòToolStripMenuItem->Text = "Öâåò";
	ğîçîâûéToolStripMenuItem->Text = "Ğîçîâûé";
	îğàíæåâûéToolStripMenuItem->Text = "Îğàíæåâûé";
	ñåğûéToolStripMenuItem->Text = "Ñåğûé";
	ãîëóáîéToolStripMenuItem->Text = "Ãîëóáîé";
	this->Text = "Ğåãèñòğàöèÿ";
}

private: System::Void áåëîğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Ğıã³ñòğàöûÿ";
	label2->Text = "Ëàã³í";
	label3->Text = "Ïàğîëü";
	button1->Text = "Âûíàõàä";
	button2->Text = "Óâàéñö³ ¢ ³ñíóş÷û ğàõóíàê";
	button3->Text = "Çàğıã³ñòğàâàööà";
	ÿçûêToolStripMenuItem->Text = "";
	ğóññêèéToolStripMenuItem->Text = "";
	àíãëèéñêèéToolStripMenuItem->Text = "";
	áåëîğóññêèéToolStripMenuItem->Text = "";
	íàñòğîéêèToolStripMenuItem->Text = "";
	öâåòToolStripMenuItem->Text = "";
	ğîçîâûéToolStripMenuItem->Text = "";
	îğàíæåâûéToolStripMenuItem->Text = "";
	ñåğûéToolStripMenuItem->Text = "";
	ãîëóáîéToolStripMenuItem->Text = "";
	this->Text = "Ğıã³ñòğàöûÿ";
}
	   bool login_pas(String^ login, String^ pas)
	   {
		   if (login == "qwe" && pas == "123")
		   {
			   return true;
		   }
		   else
		   {
			   MessageBox::Show(this, "Ïîëüçîâàòåëÿ ñ òàêèì èìåíåì íå ñóùåñòâóåò", "Ñîîáùåíèå", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   return false;
		   }
	   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ log = textBox1->Text;
	String^ pas = textBox2->Text;

	// Ñîçäàåì ıêçåìïëÿğ StreamWriter äëÿ çàïèñè â ôàéë
	StreamWriter^ writer = gcnew StreamWriter("output.txt");
	StreamWriter^ writer2 = gcnew StreamWriter("output2.txt");

	// Çàïèñûâàåì çíà÷åíèå â ôàéë
	writer->WriteLine(log);
	writer2->WriteLine(pas);

	// Çàêğûâàåì StreamWriter
	writer->Close();
	writer2->Close();

	// Âûâîäèì ñîîáùåíèå îá óñïåøíîì ñîõğàíåíèè
	MessageBox::Show(this, "Âû çàğåãèñòğèğîâàëèñü", "Ñîîáùåíèå", MessageBoxButtons::OK, MessageBoxIcon::Information);
	textBox1->Text = "";
	textBox2->Text = "";
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox2->PasswordChar = '*';
}
};
}
