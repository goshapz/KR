#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace DLLlibrary;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	KR::MyForm form;
	Application::Run(% form);
}
