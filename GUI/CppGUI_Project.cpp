/*
* Alex Reilly, CS240, reilly099
* The windows form solution
*/

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace My240P1;
[STAThread]
int main(array<System::String^>^ args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew MyForm());
	return 0;
}

