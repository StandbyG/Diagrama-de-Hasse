#include "Start2.h"
#include <array>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(cli::array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew DiagramadeHasse::Start());
}