#include "Hauptfenster.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace DateiExplorer;


[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Hauptfenster^ fenster1 = gcnew Hauptfenster;
	Application::Run(fenster1);
}

