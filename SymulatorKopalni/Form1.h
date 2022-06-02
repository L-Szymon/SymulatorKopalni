#pragma once
#include "LGornikow.h"
#include "Gornik.h"
#include <list>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ labelNazwaKopalni;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewListaO;
	private: System::Windows::Forms::DataGridView^ dataGridViewListaG;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Label^ labelStanWegla;

	private: System::Windows::Forms::Label^ labelSumaZapotrzebowania;
	private: System::Windows::Forms::Label^ labelBudzet;
	private: System::Windows::Forms::Label^ labelSumaWydobycia;
	private: System::ComponentModel::IContainer^ components;


	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->labelSumaZapotrzebowania = (gcnew System::Windows::Forms::Label());
			this->labelBudzet = (gcnew System::Windows::Forms::Label());
			this->labelSumaWydobycia = (gcnew System::Windows::Forms::Label());
			this->labelStanWegla = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewListaO = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewListaG = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->labelNazwaKopalni = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListaO))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListaG))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(1098, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 724);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->dataGridViewListaO);
			this->panel2->Controls->Add(this->dataGridViewListaG);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1098, 724);
			this->panel2->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->labelSumaZapotrzebowania);
			this->panel5->Controls->Add(this->labelBudzet);
			this->panel5->Controls->Add(this->labelSumaWydobycia);
			this->panel5->Controls->Add(this->labelStanWegla);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(850, 76);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(248, 648);
			this->panel5->TabIndex = 5;
			// 
			// labelSumaZapotrzebowania
			// 
			this->labelSumaZapotrzebowania->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelSumaZapotrzebowania->Location = System::Drawing::Point(6, 90);
			this->labelSumaZapotrzebowania->Name = L"labelSumaZapotrzebowania";
			this->labelSumaZapotrzebowania->Size = System::Drawing::Size(236, 59);
			this->labelSumaZapotrzebowania->TabIndex = 4;
			this->labelSumaZapotrzebowania->Text = L"suma";
			this->labelSumaZapotrzebowania->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelBudzet
			// 
			this->labelBudzet->AutoSize = true;
			this->labelBudzet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelBudzet->Location = System::Drawing::Point(6, 61);
			this->labelBudzet->Name = L"labelBudzet";
			this->labelBudzet->Size = System::Drawing::Size(61, 29);
			this->labelBudzet->TabIndex = 6;
			this->labelBudzet->Text = L"stan";
			this->labelBudzet->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelSumaWydobycia
			// 
			this->labelSumaWydobycia->AutoSize = true;
			this->labelSumaWydobycia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelSumaWydobycia->Location = System::Drawing::Point(6, 32);
			this->labelSumaWydobycia->Name = L"labelSumaWydobycia";
			this->labelSumaWydobycia->Size = System::Drawing::Size(61, 29);
			this->labelSumaWydobycia->TabIndex = 5;
			this->labelSumaWydobycia->Text = L"stan";
			this->labelSumaWydobycia->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelStanWegla
			// 
			this->labelStanWegla->AutoSize = true;
			this->labelStanWegla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelStanWegla->Location = System::Drawing::Point(6, 3);
			this->labelStanWegla->Name = L"labelStanWegla";
			this->labelStanWegla->Size = System::Drawing::Size(61, 29);
			this->labelStanWegla->TabIndex = 4;
			this->labelStanWegla->Text = L"stan";
			this->labelStanWegla->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(600, 76);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(250, 648);
			this->panel4->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(0, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(247, 59);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Suma zapotrzebowania:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(148, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Bud¿et:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(34, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Suma wydobycia:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(102, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Stan wêgla:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dataGridViewListaO
			// 
			this->dataGridViewListaO->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewListaO->Dock = System::Windows::Forms::DockStyle::Left;
			this->dataGridViewListaO->Location = System::Drawing::Point(300, 76);
			this->dataGridViewListaO->Name = L"dataGridViewListaO";
			this->dataGridViewListaO->RowHeadersWidth = 51;
			this->dataGridViewListaO->RowTemplate->Height = 24;
			this->dataGridViewListaO->Size = System::Drawing::Size(300, 648);
			this->dataGridViewListaO->TabIndex = 3;
			// 
			// dataGridViewListaG
			// 
			this->dataGridViewListaG->AllowUserToAddRows = false;
			this->dataGridViewListaG->AllowUserToDeleteRows = false;
			this->dataGridViewListaG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewListaG->Dock = System::Windows::Forms::DockStyle::Left;
			this->dataGridViewListaG->Location = System::Drawing::Point(0, 76);
			this->dataGridViewListaG->Name = L"dataGridViewListaG";
			this->dataGridViewListaG->ReadOnly = true;
			this->dataGridViewListaG->RowHeadersWidth = 51;
			this->dataGridViewListaG->RowTemplate->Height = 24;
			this->dataGridViewListaG->Size = System::Drawing::Size(300, 648);
			this->dataGridViewListaG->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->labelNazwaKopalni);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1098, 76);
			this->panel3->TabIndex = 0;
			// 
			// labelNazwaKopalni
			// 
			this->labelNazwaKopalni->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelNazwaKopalni->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelNazwaKopalni->Location = System::Drawing::Point(0, 0);
			this->labelNazwaKopalni->Name = L"labelNazwaKopalni";
			this->labelNazwaKopalni->Size = System::Drawing::Size(1096, 74);
			this->labelNazwaKopalni->TabIndex = 0;
			this->labelNazwaKopalni->Text = L"NazwaKopalni";
			this->labelNazwaKopalni->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1353, 724);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Symulator Kopalni";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListaO))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListaG))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
	

};
}
