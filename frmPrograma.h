#pragma once
#include "cAdded.h"
#include "cFix.h"	
#include <conio.h>
#include <iostream>
namespace DiagramadeHasse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPrograma
	/// </summary>
	public ref class frmPrograma : public System::Windows::Forms::Form
	{

	public:
		Graphics^ g;
		BufferedGraphicsContext^ Buffer;
		BufferedGraphics^ buffer;
	private:
		cFix* fix;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ Reflexiva;
	private: System::Windows::Forms::ListBox^ Antisimetrica;
	private: System::Windows::Forms::ListBox^ Transitiva;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
		   cAdd* added;
	public:
		frmPrograma(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			g = panel1->CreateGraphics();
			Buffer = BufferedGraphicsManager::Current;
			buffer = Buffer->Allocate(g, panel1->ClientRectangle);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmPrograma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnHallar;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtnumber;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnHallar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtnumber = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Reflexiva = (gcnew System::Windows::Forms::ListBox());
			this->Antisimetrica = (gcnew System::Windows::Forms::ListBox());
			this->Transitiva = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnHallar
			// 
			this->btnHallar->BackColor = System::Drawing::Color::Red;
			this->btnHallar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHallar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHallar->ForeColor = System::Drawing::Color::White;
			this->btnHallar->Location = System::Drawing::Point(346, 10);
			this->btnHallar->Name = L"btnHallar";
			this->btnHallar->Size = System::Drawing::Size(107, 59);
			this->btnHallar->TabIndex = 0;
			this->btnHallar->Text = L"Hallar";
			this->btnHallar->UseVisualStyleBackColor = false;
			this->btnHallar->Click += gcnew System::EventHandler(this, &frmPrograma::btnHallar_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(486, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 59);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Aleatorio";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmPrograma::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(769, 8);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 63);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmPrograma::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Numero Natural";
			// 
			// txtnumber
			// 
			this->txtnumber->Location = System::Drawing::Point(140, 31);
			this->txtnumber->Name = L"txtnumber";
			this->txtnumber->Size = System::Drawing::Size(170, 22);
			this->txtnumber->TabIndex = 4;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(15, 141);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(192, 500);
			this->listBox1->TabIndex = 5;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmPrograma::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(261, 141);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(192, 500);
			this->listBox2->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(505, 141);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(625, 503);
			this->panel1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Conjunto D:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(266, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Conjunto de pares ordenados: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(502, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Diagrama de Hasse";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &frmPrograma::timer1_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(622, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 61);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Limpiar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmPrograma::button1_Click);
			// 
			// Reflexiva
			// 
			this->Reflexiva->FormattingEnabled = true;
			this->Reflexiva->ItemHeight = 16;
			this->Reflexiva->Location = System::Drawing::Point(1208, 8);
			this->Reflexiva->Name = L"Reflexiva";
			this->Reflexiva->Size = System::Drawing::Size(361, 212);
			this->Reflexiva->TabIndex = 12;
			// 
			// Antisimetrica
			// 
			this->Antisimetrica->FormattingEnabled = true;
			this->Antisimetrica->ItemHeight = 16;
			this->Antisimetrica->Location = System::Drawing::Point(1208, 230);
			this->Antisimetrica->Name = L"Antisimetrica";
			this->Antisimetrica->Size = System::Drawing::Size(361, 212);
			this->Antisimetrica->TabIndex = 13;
			// 
			// Transitiva
			// 
			this->Transitiva->FormattingEnabled = true;
			this->Transitiva->ItemHeight = 16;
			this->Transitiva->Location = System::Drawing::Point(1208, 462);
			this->Transitiva->Name = L"Transitiva";
			this->Transitiva->Size = System::Drawing::Size(361, 196);
			this->Transitiva->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1136, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Reflexiva";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1136, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Antisimetrica";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1136, 445);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Transitiva";
			// 
			// frmPrograma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1633, 692);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Transitiva);
			this->Controls->Add(this->Antisimetrica);
			this->Controls->Add(this->Reflexiva);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->txtnumber);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnHallar);
			this->Name = L"frmPrograma";
			this->Text = L"frmPrograma";
			this->Load += gcnew System::EventHandler(this, &frmPrograma::frmPrograma_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmPrograma_Load(System::Object^ sender, System::EventArgs^ e) {
		fix = new cFix;
		added = new cAdd;
	}
	private: System::Void btnHallar_Click(System::Object^ sender, System::EventArgs^ e) {
		int number = Convert::ToInt32(txtnumber->Text);
		added->SET_Contador(number);
		added->CrearArregloConjunto(number);
		added->SET_MCD(number);
		added->CrearArregloMCD(number);
		added->UsarAuxiliar();
		added->AgregarNiveles();
		added->ArregloCantidadNivel();
		fix->Add(added, added->GET_Contador());

		for (int i = 0; i < added->GET_Contador(); i++) {
			listBox1->Items->Add(fix->GET_NumeroConjunto(i));
		}

		for (int i = 0; i < added->GET_Contador(); i++) {
			for (int j = 0; j < added->GET_Contador(); j++) {
				listBox2->Items->Add("(" + fix->GET_NumeroConjunto(i) + ", " + fix->GET_NumeroConjunto(j) + ")");
				if (fix->GET_NumeroConjunto(i) == fix->GET_NumeroConjunto(j))
				{

					Reflexiva->Items->Add("(" + fix->GET_NumeroConjunto(i) + ", " + fix->GET_NumeroConjunto(j) + ")" );

				}
				if (fix->GET_NumeroConjunto(i) < fix->GET_NumeroConjunto(j) && fix->GET_NumeroConjunto(j) % fix->GET_NumeroConjunto(i) == 0)
				{

					Antisimetrica->Items->Add("(" + fix->GET_NumeroConjunto(i) + ", " + fix->GET_NumeroConjunto(j) + ")" );

				}
				for (int z = 0;z < added->GET_Contador();z++)
					if (fix->GET_NumeroConjunto(j) % fix->GET_NumeroConjunto(i) == 0 && fix->GET_NumeroConjunto(z) % fix->GET_NumeroConjunto(j) == 0 && z != i && z != j)
					{
						Transitiva->Items->Add("(" + fix->GET_NumeroConjunto(i) + ", " + fix->GET_NumeroConjunto(j) + ")" + "||   (" + fix->GET_NumeroConjunto(i) + fix->GET_NumeroConjunto(z) + ")" + "//    " + fix->GET_NumeroConjunto(z) + "=" + "k*" + fix->GET_NumeroConjunto(i) );
					}
			}
		}
		timer1->Enabled = true;
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		txtnumber->Text = ((rand() % 100) + 1).ToString();
		added->SET_Contador(Convert::ToInt32(txtnumber->Text));
		added->CrearArregloConjunto(Convert::ToInt32(txtnumber->Text));
		added->SET_MCD(Convert::ToInt32(txtnumber->Text));
		added->CrearArregloMCD(Convert::ToInt32(txtnumber->Text));
		added->UsarAuxiliar();
		added->AgregarNiveles();
		added->ArregloCantidadNivel();
		fix->Add(added, added->GET_Contador());


		for (int i = 0; i < added->GET_Contador(); i++) {
			listBox1->Items->Add(fix->GET_NumeroConjunto(i));
		}

		for (int i = 0; i < added->GET_Contador(); i++) {
			for (int j = 0; j < added->GET_Contador(); j++) {
				listBox2->Items->Add("(" + fix->GET_NumeroConjunto(i) + ", " + fix->GET_NumeroConjunto(j) + ")" );
				if (fix->GET_NumeroConjunto(i) == fix->GET_NumeroConjunto(j))
				{

					Reflexiva->Items->Add("(" + fix->GET_NumeroConjunto(i) + ", " + fix->GET_NumeroConjunto(j) + ")");

				}
				if (fix->GET_NumeroConjunto(i) < fix->GET_NumeroConjunto(j) && fix->GET_NumeroConjunto(j) % fix->GET_NumeroConjunto(i) == 0)
				{

					Antisimetrica->Items->Add("(" + fix->GET_NumeroConjunto(i) + ", " + fix->GET_NumeroConjunto(j) + ")");

				}
				for (int z = 0;z < added->GET_Contador();z++)
					if (fix->GET_NumeroConjunto(j) % fix->GET_NumeroConjunto(i) == 0 && fix->GET_NumeroConjunto(z) % fix->GET_NumeroConjunto(j) == 0 && z != i && z != j)
					{
						Transitiva->Items->Add("(" + fix->GET_NumeroConjunto(i) + ", " + fix->GET_NumeroConjunto(j) + ")" + "||   (" + fix->GET_NumeroConjunto(i) + fix->GET_NumeroConjunto(z) + ")" + "//    " + fix->GET_NumeroConjunto(z) + "=" + "k*" + fix->GET_NumeroConjunto(i));
					}
			}
		}
		timer1->Enabled = true;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			buffer->Graphics->Clear(Color::WhiteSmoke);
			fix->Hasse(buffer->Graphics);
			fix->Line(buffer->Graphics);
			buffer->Render(g);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		if (timer1->Enabled == false)
		{
			txtnumber->Clear();
			listBox1->Items->Clear();
			listBox2->Items->Clear();
			Antisimetrica->Items->Clear();
			Transitiva->Items->Clear();
			Reflexiva->Items->Clear();
			panel1->Invalidate();
		}
	};
	};
}