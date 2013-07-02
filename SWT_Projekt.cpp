// SWT_Projekt.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "Form1.h"

using namespace SWT_Projekt;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
  fileload();
	// Aktivieren visueller Effekte von Windows XP, bevor Steuerelemente erstellt werden
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Hauptfenster erstellen und ausführen
	Application::Run(gcnew Form1());
	return 0;
}
