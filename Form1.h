#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "Calc.h"
#include "Notify.h"

namespace SWT_Projekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using msclr::interop::marshal_as;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	protected: 

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(248, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1003, 108);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bundestagswahl 2013";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(266, 142);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series1->ChartArea = L"ChartArea1";
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Parteien";
			series1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(400, 400);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(711, 142);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series2->IsVisibleInLegend = false;
			series2->Legend = L"Legend1";
			series2->Name = L"Parteien";
			series2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(400, 400);
			this->chart2->TabIndex = 2;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(1158, 142);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"Parteien";
			series3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(400, 400);
			this->chart3->TabIndex = 3;
			this->chart3->Text = L"chart3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(711, 569);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 50);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Beenden";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"GRÜNE";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"PIRATEN";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(22, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"LINKE";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(22, 361);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"SPD";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(22, 442);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"FDP";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 522);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"UNION";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(118, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(118, 215);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 20);
			this->label9->TabIndex = 12;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(118, 288);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 20);
			this->label10->TabIndex = 13;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(118, 361);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 20);
			this->label11->TabIndex = 14;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(118, 442);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 20);
			this->label12->TabIndex = 15;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(118, 522);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 20);
			this->label13->TabIndex = 16;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1273, 569);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 20);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Quelle:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1154, 599);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(184, 20);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Letzte Aktualisierung:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1358, 569);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(67, 20);
			this->label16->TabIndex = 19;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(1358, 599);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 20);
			this->label17->TabIndex = 20;
			this->label17->Text = L"label17";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1581, 646);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Hochrechnungsprogramm";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Komplette Form wird neu gezeichnet
		public: void redrawview() {
					
			double gruene = readnumber(14);
			double piraten = readnumber(17);
			double linke = readnumber(20);
			double spd = readnumber(23);
			double fdp = readnumber(26);
			double uni = readnumber(29);

		    this->chart1->Series["Parteien"]->Points->Clear();
			this->chart1->Series["Parteien"]->Points->AddXY("Grüne",gruene);
			this->chart1->Series["Parteien"]->Points->AddXY("Piraten",piraten);
			this->chart1->Series["Parteien"]->Points->AddXY("Linke",linke);
			this->chart1->Series["Parteien"]->Points->AddXY("SPD",spd);
			this->chart1->Series["Parteien"]->Points->AddXY("FDP",fdp);
			this->chart1->Series["Parteien"]->Points->AddXY("Union",uni);
		
			this->chart2->Series["Parteien"]->Points->Clear();
			this->chart2->Series["Parteien"]->Points->AddXY("Grüne",gruene);
			this->chart2->Series["Parteien"]->Points->AddXY("Piraten",piraten);
			this->chart2->Series["Parteien"]->Points->AddXY("Linke",linke);
			this->chart2->Series["Parteien"]->Points->AddXY("SPD",spd);
			this->chart2->Series["Parteien"]->Points->AddXY("FDP",fdp);
			this->chart2->Series["Parteien"]->Points->AddXY("Union",uni);

			this->chart3->Series["Parteien"]->Points->Clear();
			this->chart3->Series["Parteien"]->Points->AddXY("Grüne",gruene);
			this->chart3->Series["Parteien"]->Points->AddXY("Piraten",piraten);
			this->chart3->Series["Parteien"]->Points->AddXY("Linke",linke);
			this->chart3->Series["Parteien"]->Points->AddXY("SPD",spd);
			this->chart3->Series["Parteien"]->Points->AddXY("FDP",fdp);
			this->chart3->Series["Parteien"]->Points->AddXY("Union",uni);

			String^ source = marshal_as<String^>(getstring(2)); //Umwandlung von Standartstring in Unicodestring
			this->label16->Text = source;

			String^ time = marshal_as<String^>(getstring(5)); //Umwandlung von Standartstring in Unicodestring
			this->label17->Text = time;

			String^ gr = marshal_as<String^>(getstring(9) + "%"); //Umwandlung von Standartstring in Unicodestring
			this->label8->Text = gr;
			String^ pi = marshal_as<String^>(getstring(11) + "%"); //Umwandlung von Standartstring in Unicodestring
			this->label9->Text = pi;
			String^ li = marshal_as<String^>(getstring(13) + "%"); //Umwandlung von Standartstring in Unicodestring
			this->label10->Text = li;
			String^ s = marshal_as<String^>(getstring(15) + "%"); //Umwandlung von Standartstring in Unicodestring
			this->label11->Text = s;
			String^ f = marshal_as<String^>(getstring(17) + "%"); //Umwandlung von Standartstring in Unicodestring
			this->label12->Text = f;
			String^ u = marshal_as<String^>(getstring(19) + "%"); //Umwandlung von Standartstring in Unicodestring
			this->label13->Text = u;


		}				
		
		//zweiter Thread wird ausgeführt
		public: void newthread() {
			notify();			
			invoke_elements();	
			newthread();
		}
				
		private: delegate void InvokeDelegate();
		
		//In dieser Methode wird der Befehl Invoke verwendet, um einen Zugriff über die Threads auf die Diagramme und Labels zu bekommen
		public: void invoke_elements(){
								
			this->chart1->Invoke(gcnew InvokeDelegate(this, &Form1::redrawview));
			this->chart2->Invoke(gcnew InvokeDelegate(this, &Form1::redrawview));
			this->chart3->Invoke(gcnew InvokeDelegate(this, &Form1::redrawview));									
			this->label17->Invoke(gcnew InvokeDelegate(this, &Form1::redrawview));					
		}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
			Thread^ Thread_calc = gcnew Thread( gcnew ThreadStart( this,&Form1::newthread));
			Thread_calc->Start();
			
			redrawview();

			}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			fileDelete();
			exit(0);
		 }
};
}
