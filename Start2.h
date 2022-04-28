#pragma once

#include "frmPrograma.h"
namespace DiagramadeHasse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Start
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnEjecutar;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnIntegrantes;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnIntegrantes = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->BackColor = System::Drawing::Color::Red;
			this->btnEjecutar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEjecutar->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjecutar->ForeColor = System::Drawing::Color::White;
			this->btnEjecutar->Location = System::Drawing::Point(53, 398);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(130, 58);
			this->btnEjecutar->TabIndex = 0;
			this->btnEjecutar->Text = L"Ejecutar";
			this->btnEjecutar->UseVisualStyleBackColor = false;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &Start::btnEjecutar_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(222, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(8, 8);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::Red;
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->ForeColor = System::Drawing::Color::White;
			this->btnSalir->Location = System::Drawing::Point(494, 400);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(131, 58);
			this->btnSalir->TabIndex = 2;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &Start::btnSalir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(53, 157);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Size = System::Drawing::Size(572, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Relacion de orden Pacial";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnIntegrantes
			// 
			this->btnIntegrantes->BackColor = System::Drawing::Color::Red;
			this->btnIntegrantes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIntegrantes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIntegrantes->ForeColor = System::Drawing::Color::White;
			this->btnIntegrantes->Location = System::Drawing::Point(270, 398);
			this->btnIntegrantes->Name = L"btnIntegrantes";
			this->btnIntegrantes->Size = System::Drawing::Size(132, 63);
			this->btnIntegrantes->TabIndex = 3;
			this->btnIntegrantes->Text = L"Integrantes";
			this->btnIntegrantes->UseVisualStyleBackColor = false;
			this->btnIntegrantes->Click += gcnew System::EventHandler(this, &Start::btnIntegrantes_Click);
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 526);
			this->Controls->Add(this->btnIntegrantes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnEjecutar);
			this->Name = L"Start";
			this->Text = L"Start";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnEjecutar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPrograma^ frmprograma = gcnew frmPrograma();
		frmprograma->ShowDialog();
	}
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void btnIntegrantes_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Piero Alessando Mendieta Chavez\nGabriel Ronaldo Meza Prada\n Sebastian Gonzalo Cuadrado Rodriguez\n Diego William Chavez Huaccha \n Gabriel Martell Cevallos ");
	}
};
}