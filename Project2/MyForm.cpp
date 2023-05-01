#include "MyForm.h"
#include<string>
#include<vector>
#include"player.h"
#include"team.h"
#include"league.h"
using namespace System;

using namespace System::Windows::Forms;
using namespace std;
[STAThread]

void main()

{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Project2::MyForm form;

	Application::Run(% form);

}