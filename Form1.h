#pragma once
#include <fstream>
#include "Calc.h"
//#include "Notify.h"

namespace hallowelt {


  using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;


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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Unscaled;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(16, 150);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Parteien";
			series1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(467, 308);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"Balkendiagramm";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(585, 534);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(333, 62);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Beenden";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(268, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(926, 91);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bundestagswahlen 2013";
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(540, 150);
			this->chart2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Parteien";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(467, 308);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			this->chart2->Click += gcnew System::EventHandler(this, &Form1::chart2_Click);
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(1083, 150);
			this->chart3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart3->Name = L"chart3";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series3->Legend = L"Legend1";
			series3->Name = L"Parteien";
			series3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Chocolate;
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(467, 308);
			this->chart3->TabIndex = 4;
			this->chart3->Text = L"chart3";
			this->chart3->Click += gcnew System::EventHandler(this, &Form1::chart3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1579, 640);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	

		public: void test() {

					double gruene = var(14);
					double piraten = var(17);
					double linke = var(20);
					double spd = var(23);
					double fdp = var(26);
					double uni = var(29);
		
				
					this->chart1->Series["Parteien"]->Points->AddXY("Grüne",gruene);
					this->chart1->Series["Parteien"]->Points->AddXY("Piraten",piraten);
					this->chart1->Series["Parteien"]->Points->AddXY("Linke",linke);
					this->chart1->Series["Parteien"]->Points->AddXY("SPD",spd);
					this->chart1->Series["Parteien"]->Points->AddXY("FDP",fdp);
					this->chart1->Series["Parteien"]->Points->AddXY("Union",uni);

					this->chart2->Series["Parteien"]->Points->AddXY("Grüne",gruene);
					this->chart2->Series["Parteien"]->Points->AddXY("Piraten",piraten);
					this->chart2->Series["Parteien"]->Points->AddXY("Linke",linke);
					this->chart2->Series["Parteien"]->Points->AddXY("SPD",spd);
					this->chart2->Series["Parteien"]->Points->AddXY("FDP",fdp);
					this->chart2->Series["Parteien"]->Points->AddXY("Union",uni);


					 this->chart3->Series["Parteien"]->Points->AddXY("Grüne",gruene);
					 this->chart3->Series["Parteien"]->Points->AddXY("Piraten",piraten);
					 this->chart3->Series["Parteien"]->Points->AddXY("Linke",linke);
					 this->chart3->Series["Parteien"]->Points->AddXY("SPD",spd);
					 this->chart3->Series["Parteien"]->Points->AddXY("FDP",fdp);
					 this->chart3->Series["Parteien"]->Points->AddXY("Union",uni);
					 
				}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 test();
				 
					
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 Form1::Close(); 
			 }
	private: System::Void chart3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void chart2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		 }
};
}
