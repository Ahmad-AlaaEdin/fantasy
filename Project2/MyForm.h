#pragma once
#include<string>
#include<vector>
#include"player.h"
#include"team.h"
#include"league.h"
string s;
vector<league>leagues;
vector<player> players;
int selectedLeague, selectedTeam;
namespace Project2 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			comboBox2->Enabled = false;
			comboBox3->Enabled = false;


			
			league LaLiga;
			LaLiga.name = "LaLiga";
			league PremierLeague;
			PremierLeague.name = "PremierLeague";
			team barcelona;
			barcelona.name = "barcelona";
			barcelona.players.push_back(0);
			
			team realmadrid;
			realmadrid.name = "realmadrid";
			realmadrid.players.push_back(1);
			team liverbool;
			liverbool.name = "liverbool";
			liverbool.players.push_back(2);
			team arsenal;
			arsenal.name = "arsenal";
			arsenal.players.push_back(3);
			leagues.push_back(LaLiga);
			leagues.push_back(PremierLeague);
			leagues[0].teams.push_back(barcelona);
			leagues[0].teams.push_back(realmadrid);
			leagues[1].teams.push_back(liverbool);
			leagues[1].teams.push_back(arsenal);
			
			player s("messi", 22, 50000);
			player s1("ronaldo", 33, 6000);
			player s2("m.salah", 44, 30000);
			player s3("henry", 55, 400000);
			players.push_back(s);
			players.push_back(s1);
			players.push_back(s2);
			players.push_back(s3);
			PopulateComboBox();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		void PopulateComboBox()
		{
			string arr[5] = { "hello","hello1" ,"hello2" ,"hello3" ,"hello4" };
			//string s = "Sasad";
			for (auto i : leagues) {
              this->leagueBox->Items->Add(gcnew String(i.name.c_str()));
			}

			
		
		}
	private: System::Windows::Forms::ComboBox^  leagueBox;
	protected:

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	protected:



		



	protected:

	private:

		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->leagueBox = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// leagueBox
			// 
			this->leagueBox->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leagueBox->FormattingEnabled = true;
			this->leagueBox->Location = System::Drawing::Point(91, 51);
			this->leagueBox->Name = L"leagueBox";
			this->leagueBox->Size = System::Drawing::Size(121, 27);
			this->leagueBox->TabIndex = 0;
			this->leagueBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::leagueBox_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(91, 107);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 27);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(91, 163);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 27);
			this->comboBox3->TabIndex = 2;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(174, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 23);
			this->label1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(174, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 23);
			this->label2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(174, 279);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 23);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(47, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 23);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Points :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(47, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 23);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Price :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 333);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->leagueBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void leagueBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 selectedLeague = leagueBox->SelectedIndex;
		comboBox2->Items->Clear();
		for (auto i : leagues[selectedLeague].teams) {
			this->comboBox2->Items->Add(gcnew String(i.name.c_str()));
		}
		comboBox2->Enabled = true;
		comboBox3->Enabled = false;
		
	}

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	selectedTeam = comboBox2->SelectedIndex;
	comboBox3->Items->Clear();
	for (auto i : leagues[selectedLeague].teams[selectedTeam].players) {
		this->comboBox3->Items->Add(gcnew String(players[i].name.c_str()));
	}
	/*this->comboBox3->Items->Add(gcnew String(players[leagues[0].teams[0].players[0]].name.c_str()));
	this->comboBox3->Items->Add(gcnew String(players[leagues[0].teams[1].players[0]].name.c_str()));
	this->comboBox3->Items->Add(gcnew String(players[leagues[1].teams[0].players[0]].name.c_str()));
	this->comboBox3->Items->Add(gcnew String(players[leagues[1].teams[1].players[0]].name.c_str()));*/
	comboBox3->Enabled = true;
}	 private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	int index = comboBox3->SelectedIndex;

	player temp=players[leagues[selectedLeague].teams[selectedTeam].players[index]];
	label1->Text = gcnew String(temp.name.c_str());
	label2->Text = temp.points.ToString();
	label3->Text = temp.price.ToString();
	
		 }
};
}
