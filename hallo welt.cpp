// hallo welt.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "Form1.h"
#include "Notify.h"




using namespace hallowelt;



[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
  notify();
	// Aktivieren visueller Effekte von Windows XP, bevor Steuerelemente erstellt werden
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Hauptfenster erstellen und ausführen
	Application::Run(gcnew Form1());
	bool check=false;
	Form1 c;
	for(;;)
	{
		if (check==false){
			notify();
			c.test();
		}
		check=notify();
	}
	return 0;
}













