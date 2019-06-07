#pragma once

namespace DateiExplorer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Hauptfenster
	/// </summary>
	public ref class Hauptfenster : public System::Windows::Forms::Form
	{
	public:
		Hauptfenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Hauptfenster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_FarbeWaehlen;
	protected:

	protected:
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::TextBox^  textBox_Dateiinhalt;
	private: System::Windows::Forms::Button^  button_DateiOeffnen;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenu_DateiOeffnen;
	private: System::Windows::Forms::Button^  button_DateiSpeichern;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hauptfenster::typeid));
			this->button_FarbeWaehlen = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->textBox_Dateiinhalt = (gcnew System::Windows::Forms::TextBox());
			this->button_DateiOeffnen = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenu_DateiOeffnen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_DateiSpeichern = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_FarbeWaehlen
			// 
			this->button_FarbeWaehlen->Location = System::Drawing::Point(582, 426);
			this->button_FarbeWaehlen->Name = L"button_FarbeWaehlen";
			this->button_FarbeWaehlen->Size = System::Drawing::Size(113, 23);
			this->button_FarbeWaehlen->TabIndex = 0;
			this->button_FarbeWaehlen->Text = L"Farbe wählen";
			this->button_FarbeWaehlen->UseVisualStyleBackColor = true;
			this->button_FarbeWaehlen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_FarbeWaehlen_Click);
			// 
			// textBox_Dateiinhalt
			// 
			this->textBox_Dateiinhalt->Location = System::Drawing::Point(12, 39);
			this->textBox_Dateiinhalt->Multiline = true;
			this->textBox_Dateiinhalt->Name = L"textBox_Dateiinhalt";
			this->textBox_Dateiinhalt->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox_Dateiinhalt->Size = System::Drawing::Size(564, 410);
			this->textBox_Dateiinhalt->TabIndex = 1;
			// 
			// button_DateiOeffnen
			// 
			this->button_DateiOeffnen->Location = System::Drawing::Point(582, 39);
			this->button_DateiOeffnen->Name = L"button_DateiOeffnen";
			this->button_DateiOeffnen->Size = System::Drawing::Size(113, 23);
			this->button_DateiOeffnen->TabIndex = 2;
			this->button_DateiOeffnen->Text = L"Datei öffnen";
			this->button_DateiOeffnen->UseVisualStyleBackColor = true;
			this->button_DateiOeffnen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_DateiOeffnen_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenu_DateiOeffnen });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(709, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenu_DateiOeffnen
			// 
			this->toolStripMenu_DateiOeffnen->Name = L"toolStripMenu_DateiOeffnen";
			this->toolStripMenu_DateiOeffnen->Size = System::Drawing::Size(84, 20);
			this->toolStripMenu_DateiOeffnen->Text = L"Datei öffnen";
			this->toolStripMenu_DateiOeffnen->Click += gcnew System::EventHandler(this, &Hauptfenster::toolStripMenu_DateiOeffnen_Click);
			// 
			// button_DateiSpeichern
			// 
			this->button_DateiSpeichern->Location = System::Drawing::Point(582, 68);
			this->button_DateiSpeichern->Name = L"button_DateiSpeichern";
			this->button_DateiSpeichern->Size = System::Drawing::Size(113, 23);
			this->button_DateiSpeichern->TabIndex = 4;
			this->button_DateiSpeichern->Text = L"Datei speichern";
			this->button_DateiSpeichern->UseVisualStyleBackColor = true;
			this->button_DateiSpeichern->Click += gcnew System::EventHandler(this, &Hauptfenster::button_DateiSpeichern_Click);
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(709, 465);
			this->Controls->Add(this->button_DateiSpeichern);
			this->Controls->Add(this->button_DateiOeffnen);
			this->Controls->Add(this->textBox_Dateiinhalt);
			this->Controls->Add(this->button_FarbeWaehlen);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Hauptfenster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DateiExplorer";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_FarbeWaehlen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_DateiOeffnen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripMenu_DateiOeffnen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_DateiSpeichern_Click(System::Object^  sender, System::EventArgs^  e);
};
}
