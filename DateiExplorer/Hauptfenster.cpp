#include "Hauptfenster.h"



System::Void DateiExplorer::Hauptfenster::button_FarbeWaehlen_Click(System::Object^  sender, System::EventArgs^  e)
{
	System::Windows::Forms::DialogResult result = colorDialog1->ShowDialog();
	
	// Nur wenn der Benutzer die Farbwahl aktiv bestätigt hat
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		BackColor = colorDialog1->Color;
	}
}


System::Void DateiExplorer::Hauptfenster::button_DateiOeffnen_Click(System::Object^  sender, System::EventArgs^  e)
{
	// Pfad festlegen, wo der Explorer geöffnet wird
	String^ initialPath = "C:\\Users\\Alfa\\source\\repos\\DateiExplorer\\test";
	openFileDialog1->InitialDirectory = initialPath;

	System::Windows::Forms::DialogResult result = openFileDialog1->ShowDialog();
	if (result == System::Windows::Forms::DialogResult::OK)
	{
		String^ filename = openFileDialog1->FileName;
		

		try
		{
			// gesamten Inhalt der Datei lesen
			String^ dateiText = System::IO::File::ReadAllText(filename, System::Text::Encoding::Default);

			// Dateiinhalt in die Textbox schreiben
			textBox_Dateiinhalt->Text = dateiText;

			// Datei Zeilenweise lesen
			array<String^>^ zeilenListe = System::IO::File::ReadAllLines(filename, System::Text::Encoding::Default);

			// Zeilen einzelen verarbeiten
			for each (String^ zeile in zeilenListe)
			{
				textBox_Dateiinhalt->Text += zeile + "\r\n";
			}

		}
		catch (Exception^ exception1)
		{
			MessageBox::Show("Du Idiot, lass das!!! \r\n");
			Console::WriteLine(exception1);
		}
	}
}


System::Void DateiExplorer::Hauptfenster::toolStripMenu_DateiOeffnen_Click(System::Object^  sender, System::EventArgs^  e)
{
	button_DateiOeffnen->PerformClick();
}


System::Void DateiExplorer::Hauptfenster::button_DateiSpeichern_Click(System::Object^  sender, System::EventArgs^  e)
{

	saveFileDialog1->Filter = "Textdatei | *.txt | dsDatei| *.ds";

	System::Windows::Forms::DialogResult result = saveFileDialog1->ShowDialog();

	if (result == System::Windows::Forms::DialogResult::OK)
	{
		String^ dateiText = textBox_Dateiinhalt->Text;

		try
		{
			System::IO::File::WriteAllText(saveFileDialog1->FileName, dateiText, System::Text::Encoding::Default);
		}
		catch (Exception^ exception)
		{
			MessageBox::Show("Du Idiot, lass das!!! \r\n");
			Console::WriteLine(exception);
		}
	}
}