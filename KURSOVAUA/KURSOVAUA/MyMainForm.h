#pragma once
#include"MainFunction.h"
using namespace std;

string test;
string arr[3];
char dlinna_uchactha[100] = { "длинна участка" };

namespace KURSOVAUA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::Office::Interop;
#define Excel   Microsoft::Office::Interop::Excel

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  A11;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  A13;
	private: System::Windows::Forms::TextBox^  A22;
	private: System::Windows::Forms::TextBox^  A23;
	private: System::Windows::Forms::TextBox^  A21;
	private: System::Windows::Forms::TextBox^  A12;
	private: System::Windows::Forms::TextBox^  A14;
	private: System::Windows::Forms::TextBox^  A25;
	private: System::Windows::Forms::TextBox^  A31;
	private: System::Windows::Forms::TextBox^  A32;
	private: System::Windows::Forms::TextBox^  A33;
    private: System::Windows::Forms::TextBox^  A24;
	private: System::Windows::Forms::TextBox^  A15;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  A55;
	private: System::Windows::Forms::TextBox^  A54;
	private: System::Windows::Forms::TextBox^  A53;
	private: System::Windows::Forms::TextBox^  A52;
	private: System::Windows::Forms::TextBox^  A51;

	private: System::Windows::Forms::TextBox^  A45;

	private: System::Windows::Forms::TextBox^  A44;

	private: System::Windows::Forms::TextBox^  A43;

	private: System::Windows::Forms::TextBox^  A42;

	private: System::Windows::Forms::TextBox^  A41;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  A35;

	private: System::Windows::Forms::TextBox^  A34;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  B55;

private: System::Windows::Forms::TextBox^  B54;

private: System::Windows::Forms::TextBox^  B53;

private: System::Windows::Forms::TextBox^  B52;

private: System::Windows::Forms::TextBox^  B51;

private: System::Windows::Forms::TextBox^  B45;

private: System::Windows::Forms::TextBox^  B44;

private: System::Windows::Forms::TextBox^  B43;

private: System::Windows::Forms::TextBox^  B42;

private: System::Windows::Forms::TextBox^  B41;

	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::TextBox^  B35;

private: System::Windows::Forms::TextBox^  B34;

	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  B13;

	private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::TextBox^  B22;

	private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::TextBox^  B23;

	private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::TextBox^  B21;

	private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::TextBox^  B12;
private: System::Windows::Forms::TextBox^  B14;
private: System::Windows::Forms::TextBox^  B25;
private: System::Windows::Forms::TextBox^  B31;
private: System::Windows::Forms::TextBox^  B32;
private: System::Windows::Forms::TextBox^  B33;






private: System::Windows::Forms::TextBox^  B24;

private: System::Windows::Forms::TextBox^  B15;

private: System::Windows::Forms::TextBox^  B11;
private: System::Windows::Forms::NumericUpDown^  SIZE_A_N;



private: System::Windows::Forms::NumericUpDown^  SIZE_A_M;

	private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label52;


private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::NumericUpDown^  SIZE_B_M;
private: System::Windows::Forms::NumericUpDown^  SIZE_B_N;
private: System::Windows::Forms::Button^  DeterminantA;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::TextBox^  C55;

private: System::Windows::Forms::TextBox^  C54;

private: System::Windows::Forms::TextBox^  C53;

private: System::Windows::Forms::TextBox^  C52;

private: System::Windows::Forms::TextBox^  C51;

private: System::Windows::Forms::TextBox^  C45;

private: System::Windows::Forms::TextBox^  C44;

private: System::Windows::Forms::TextBox^  C43;

private: System::Windows::Forms::TextBox^  C42;

private: System::Windows::Forms::TextBox^  C41;

private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::TextBox^  C35;

private: System::Windows::Forms::TextBox^  C34;

private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::TextBox^  C13;

private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::TextBox^  C22;

private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::TextBox^  C23;

private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::TextBox^  C21;

private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::TextBox^  C12;
private: System::Windows::Forms::TextBox^  C14;
private: System::Windows::Forms::TextBox^  C25;
private: System::Windows::Forms::TextBox^  C31;
private: System::Windows::Forms::TextBox^  C32;
private: System::Windows::Forms::TextBox^  C33;






private: System::Windows::Forms::TextBox^  C24;

private: System::Windows::Forms::TextBox^  C15;

private: System::Windows::Forms::TextBox^  C11;

private: System::Windows::Forms::TextBox^  MainTextBox;
private: System::Windows::Forms::Button^  determinantB;
private: System::Windows::Forms::Button^  TransponierteA;
private: System::Windows::Forms::Button^  TransponierteB;
private: System::Windows::Forms::Button^  MultiplicationA;
private: System::Windows::Forms::TextBox^  multiplierA;





private: System::Windows::Forms::Button^  MultiplicationB;
private: System::Windows::Forms::TextBox^  multiplierB;


private: System::Windows::Forms::GroupBox^  groupBox4;

private: System::Windows::Forms::Button^  exponentiationA;
private: System::Windows::Forms::TextBox^  ExponentA;
private: System::Windows::Forms::Button^  exponentiationB;
private: System::Windows::Forms::TextBox^  ExponentB;

private: System::Windows::Forms::Button^  CleaningA;
private: System::Windows::Forms::Button^  CleaningB;
private: System::Windows::Forms::Button^  SummAB;
private: System::Windows::Forms::Button^  сAB;

private: System::Windows::Forms::Button^  multiplicationAB;
private: System::Windows::Forms::Button^  subtractionBA;
private: System::Windows::Forms::TextBox^  Y1;
private: System::Windows::Forms::TextBox^  Y2;
private: System::Windows::Forms::TextBox^  Y3;
private: System::Windows::Forms::TextBox^  Y4;
private: System::Windows::Forms::TextBox^  Y5;






private: System::Windows::Forms::Button^  Gauss_method;
private: System::Windows::Forms::GroupBox^  groupBox7;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::TextBox^  x1;
private: System::Windows::Forms::TextBox^  x2;
private: System::Windows::Forms::TextBox^  x3;
private: System::Windows::Forms::TextBox^  x4;
private: System::Windows::Forms::TextBox^  x5;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Button^  AvB;
private: System::Windows::Forms::Button^  CvB;


private: System::Windows::Forms::Button^  CvA;

private: System::Windows::Forms::Button^  BvC;

private: System::Windows::Forms::Button^  BvA;

private: System::Windows::Forms::Button^  AvC;

private: System::Windows::Forms::Button^  CleanALL;
private: System::Windows::Forms::GroupBox^  groupBox8;
private: System::Windows::Forms::Button^  SwapCB;
private: System::Windows::Forms::Button^  SwapAB;
private: System::Windows::Forms::Button^  SwapAC;
private: System::Windows::Forms::GroupBox^  groupBox9;
private: System::Windows::Forms::Button^  InverseMatrixB;
private: System::Windows::Forms::Button^  InverseMatrixA;
private: System::Windows::Forms::HelpProvider^  helpProvider1;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;






















	protected:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		private: System::ComponentModel::IContainer^  components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->A55 = (gcnew System::Windows::Forms::TextBox());
			this->A54 = (gcnew System::Windows::Forms::TextBox());
			this->A53 = (gcnew System::Windows::Forms::TextBox());
			this->A52 = (gcnew System::Windows::Forms::TextBox());
			this->A51 = (gcnew System::Windows::Forms::TextBox());
			this->A45 = (gcnew System::Windows::Forms::TextBox());
			this->A44 = (gcnew System::Windows::Forms::TextBox());
			this->A43 = (gcnew System::Windows::Forms::TextBox());
			this->A42 = (gcnew System::Windows::Forms::TextBox());
			this->A41 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->A35 = (gcnew System::Windows::Forms::TextBox());
			this->A34 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->A13 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->A22 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->A23 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->A21 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->A12 = (gcnew System::Windows::Forms::TextBox());
			this->A14 = (gcnew System::Windows::Forms::TextBox());
			this->A25 = (gcnew System::Windows::Forms::TextBox());
			this->A31 = (gcnew System::Windows::Forms::TextBox());
			this->A32 = (gcnew System::Windows::Forms::TextBox());
			this->A33 = (gcnew System::Windows::Forms::TextBox());
			this->A24 = (gcnew System::Windows::Forms::TextBox());
			this->A15 = (gcnew System::Windows::Forms::TextBox());
			this->A11 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->B55 = (gcnew System::Windows::Forms::TextBox());
			this->B54 = (gcnew System::Windows::Forms::TextBox());
			this->B53 = (gcnew System::Windows::Forms::TextBox());
			this->B52 = (gcnew System::Windows::Forms::TextBox());
			this->B51 = (gcnew System::Windows::Forms::TextBox());
			this->B45 = (gcnew System::Windows::Forms::TextBox());
			this->B44 = (gcnew System::Windows::Forms::TextBox());
			this->B43 = (gcnew System::Windows::Forms::TextBox());
			this->B42 = (gcnew System::Windows::Forms::TextBox());
			this->B41 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->B35 = (gcnew System::Windows::Forms::TextBox());
			this->B34 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->B13 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->B22 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->B23 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->B21 = (gcnew System::Windows::Forms::TextBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->B12 = (gcnew System::Windows::Forms::TextBox());
			this->B14 = (gcnew System::Windows::Forms::TextBox());
			this->B25 = (gcnew System::Windows::Forms::TextBox());
			this->B31 = (gcnew System::Windows::Forms::TextBox());
			this->B32 = (gcnew System::Windows::Forms::TextBox());
			this->B33 = (gcnew System::Windows::Forms::TextBox());
			this->B24 = (gcnew System::Windows::Forms::TextBox());
			this->B15 = (gcnew System::Windows::Forms::TextBox());
			this->B11 = (gcnew System::Windows::Forms::TextBox());
			this->SIZE_A_N = (gcnew System::Windows::Forms::NumericUpDown());
			this->SIZE_A_M = (gcnew System::Windows::Forms::NumericUpDown());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->SIZE_B_M = (gcnew System::Windows::Forms::NumericUpDown());
			this->SIZE_B_N = (gcnew System::Windows::Forms::NumericUpDown());
			this->DeterminantA = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->C55 = (gcnew System::Windows::Forms::TextBox());
			this->C54 = (gcnew System::Windows::Forms::TextBox());
			this->C53 = (gcnew System::Windows::Forms::TextBox());
			this->C52 = (gcnew System::Windows::Forms::TextBox());
			this->C51 = (gcnew System::Windows::Forms::TextBox());
			this->C45 = (gcnew System::Windows::Forms::TextBox());
			this->C44 = (gcnew System::Windows::Forms::TextBox());
			this->C43 = (gcnew System::Windows::Forms::TextBox());
			this->C42 = (gcnew System::Windows::Forms::TextBox());
			this->C41 = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->C35 = (gcnew System::Windows::Forms::TextBox());
			this->C34 = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->C13 = (gcnew System::Windows::Forms::TextBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->C22 = (gcnew System::Windows::Forms::TextBox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->C23 = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->C21 = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->C12 = (gcnew System::Windows::Forms::TextBox());
			this->C14 = (gcnew System::Windows::Forms::TextBox());
			this->C25 = (gcnew System::Windows::Forms::TextBox());
			this->C31 = (gcnew System::Windows::Forms::TextBox());
			this->C32 = (gcnew System::Windows::Forms::TextBox());
			this->C33 = (gcnew System::Windows::Forms::TextBox());
			this->C24 = (gcnew System::Windows::Forms::TextBox());
			this->C15 = (gcnew System::Windows::Forms::TextBox());
			this->C11 = (gcnew System::Windows::Forms::TextBox());
			this->MainTextBox = (gcnew System::Windows::Forms::TextBox());
			this->determinantB = (gcnew System::Windows::Forms::Button());
			this->TransponierteA = (gcnew System::Windows::Forms::Button());
			this->TransponierteB = (gcnew System::Windows::Forms::Button());
			this->MultiplicationA = (gcnew System::Windows::Forms::Button());
			this->multiplierA = (gcnew System::Windows::Forms::TextBox());
			this->MultiplicationB = (gcnew System::Windows::Forms::Button());
			this->multiplierB = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->multiplicationAB = (gcnew System::Windows::Forms::Button());
			this->subtractionBA = (gcnew System::Windows::Forms::Button());
			this->сAB = (gcnew System::Windows::Forms::Button());
			this->SummAB = (gcnew System::Windows::Forms::Button());
			this->exponentiationA = (gcnew System::Windows::Forms::Button());
			this->ExponentA = (gcnew System::Windows::Forms::TextBox());
			this->exponentiationB = (gcnew System::Windows::Forms::Button());
			this->ExponentB = (gcnew System::Windows::Forms::TextBox());
			this->CleaningB = (gcnew System::Windows::Forms::Button());
			this->CleaningA = (gcnew System::Windows::Forms::Button());
			this->Y1 = (gcnew System::Windows::Forms::TextBox());
			this->Y2 = (gcnew System::Windows::Forms::TextBox());
			this->Y3 = (gcnew System::Windows::Forms::TextBox());
			this->Y4 = (gcnew System::Windows::Forms::TextBox());
			this->Y5 = (gcnew System::Windows::Forms::TextBox());
			this->Gauss_method = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->x3 = (gcnew System::Windows::Forms::TextBox());
			this->x4 = (gcnew System::Windows::Forms::TextBox());
			this->x5 = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->CvB = (gcnew System::Windows::Forms::Button());
			this->CvA = (gcnew System::Windows::Forms::Button());
			this->BvC = (gcnew System::Windows::Forms::Button());
			this->BvA = (gcnew System::Windows::Forms::Button());
			this->AvC = (gcnew System::Windows::Forms::Button());
			this->AvB = (gcnew System::Windows::Forms::Button());
			this->CleanALL = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->SwapCB = (gcnew System::Windows::Forms::Button());
			this->SwapAB = (gcnew System::Windows::Forms::Button());
			this->SwapAC = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->InverseMatrixB = (gcnew System::Windows::Forms::Button());
			this->InverseMatrixA = (gcnew System::Windows::Forms::Button());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SIZE_A_N))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SIZE_A_M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SIZE_B_M))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SIZE_B_N))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->A55);
			this->groupBox1->Controls->Add(this->A54);
			this->groupBox1->Controls->Add(this->A53);
			this->groupBox1->Controls->Add(this->A52);
			this->groupBox1->Controls->Add(this->A51);
			this->groupBox1->Controls->Add(this->A45);
			this->groupBox1->Controls->Add(this->A44);
			this->groupBox1->Controls->Add(this->A43);
			this->groupBox1->Controls->Add(this->A42);
			this->groupBox1->Controls->Add(this->A41);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->A35);
			this->groupBox1->Controls->Add(this->A34);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->A13);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->A22);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->A23);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->A21);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->A12);
			this->groupBox1->Controls->Add(this->A14);
			this->groupBox1->Controls->Add(this->A25);
			this->groupBox1->Controls->Add(this->A31);
			this->groupBox1->Controls->Add(this->A32);
			this->groupBox1->Controls->Add(this->A33);
			this->groupBox1->Controls->Add(this->A24);
			this->groupBox1->Controls->Add(this->A15);
			this->groupBox1->Controls->Add(this->A11);
			this->groupBox1->Location = System::Drawing::Point(176, 14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(208, 211);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Матрица А";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(174, 196);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(21, 10);
			this->label25->TabIndex = 60;
			this->label25->Text = L"  5 5";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(131, 196);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(19, 10);
			this->label24->TabIndex = 59;
			this->label24->Text = L" 5 4";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(92, 196);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 10);
			this->label23->TabIndex = 58;
			this->label23->Text = L" 5 3";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(53, 196);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(19, 10);
			this->label22->TabIndex = 57;
			this->label22->Text = L" 5 2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(14, 196);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 10);
			this->label11->TabIndex = 56;
			this->label11->Text = L" 5 1";
			// 
			// A55
			// 
			this->A55->Location = System::Drawing::Point(166, 171);
			this->A55->Multiline = true;
			this->A55->Name = L"A55";
			this->A55->Size = System::Drawing::Size(34, 22);
			this->A55->TabIndex = 55;
			this->A55->Text = L"0";
			this->A55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A55_KeyPress);
			this->A55->Leave += gcnew System::EventHandler(this, &MyForm::A55_Leave);
			// 
			// A54
			// 
			this->A54->Location = System::Drawing::Point(126, 171);
			this->A54->Multiline = true;
			this->A54->Name = L"A54";
			this->A54->Size = System::Drawing::Size(34, 22);
			this->A54->TabIndex = 54;
			this->A54->Text = L"0";
			this->A54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A54_KeyPress);
			this->A54->Leave += gcnew System::EventHandler(this, &MyForm::A54_Leave);
			// 
			// A53
			// 
			this->A53->Location = System::Drawing::Point(86, 171);
			this->A53->Multiline = true;
			this->A53->Name = L"A53";
			this->A53->Size = System::Drawing::Size(34, 22);
			this->A53->TabIndex = 53;
			this->A53->Text = L"0";
			this->A53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A53_KeyPress);
			this->A53->Leave += gcnew System::EventHandler(this, &MyForm::A53_Leave);
			// 
			// A52
			// 
			this->A52->Location = System::Drawing::Point(46, 171);
			this->A52->Multiline = true;
			this->A52->Name = L"A52";
			this->A52->Size = System::Drawing::Size(34, 22);
			this->A52->TabIndex = 52;
			this->A52->Text = L"0";
			this->A52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A52_KeyPress);
			this->A52->Leave += gcnew System::EventHandler(this, &MyForm::A52_Leave);
			// 
			// A51
			// 
			this->A51->Location = System::Drawing::Point(6, 171);
			this->A51->Multiline = true;
			this->A51->Name = L"A51";
			this->A51->Size = System::Drawing::Size(34, 22);
			this->A51->TabIndex = 51;
			this->A51->Text = L"0";
			this->A51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A51_KeyPress);
			this->A51->Leave += gcnew System::EventHandler(this, &MyForm::A51_Leave);
			// 
			// A45
			// 
			this->A45->Location = System::Drawing::Point(166, 133);
			this->A45->Multiline = true;
			this->A45->Name = L"A45";
			this->A45->Size = System::Drawing::Size(34, 22);
			this->A45->TabIndex = 50;
			this->A45->Text = L"0";
			this->A45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A45_KeyPress);
			this->A45->Leave += gcnew System::EventHandler(this, &MyForm::A45_Leave);
			// 
			// A44
			// 
			this->A44->Location = System::Drawing::Point(126, 133);
			this->A44->Multiline = true;
			this->A44->Name = L"A44";
			this->A44->Size = System::Drawing::Size(34, 22);
			this->A44->TabIndex = 49;
			this->A44->Text = L"0";
			this->A44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A44_KeyPress);
			this->A44->Leave += gcnew System::EventHandler(this, &MyForm::A44_Leave);
			// 
			// A43
			// 
			this->A43->Location = System::Drawing::Point(86, 133);
			this->A43->Multiline = true;
			this->A43->Name = L"A43";
			this->A43->Size = System::Drawing::Size(34, 22);
			this->A43->TabIndex = 48;
			this->A43->Text = L"0";
			this->A43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A43_KeyPress);
			this->A43->Leave += gcnew System::EventHandler(this, &MyForm::A43_Leave);
			// 
			// A42
			// 
			this->A42->Location = System::Drawing::Point(46, 133);
			this->A42->Multiline = true;
			this->A42->Name = L"A42";
			this->A42->Size = System::Drawing::Size(34, 22);
			this->A42->TabIndex = 47;
			this->A42->Text = L"0";
			this->A42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A42_KeyPress);
			this->A42->Leave += gcnew System::EventHandler(this, &MyForm::A42_Leave);
			// 
			// A41
			// 
			this->A41->Location = System::Drawing::Point(6, 133);
			this->A41->Multiline = true;
			this->A41->Name = L"A41";
			this->A41->Size = System::Drawing::Size(34, 22);
			this->A41->TabIndex = 46;
			this->A41->Text = L"0";
			this->A41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A41_KeyPress);
			this->A41->Leave += gcnew System::EventHandler(this, &MyForm::A41_Leave);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(174, 158);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(19, 10);
			this->label21->TabIndex = 45;
			this->label21->Text = L" 4 5";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(131, 158);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 10);
			this->label20->TabIndex = 44;
			this->label20->Text = L" 4 4";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(92, 158);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 10);
			this->label19->TabIndex = 43;
			this->label19->Text = L" 4 3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(53, 120);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(19, 10);
			this->label18->TabIndex = 42;
			this->label18->Text = L" 3 2";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(14, 158);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(19, 10);
			this->label17->TabIndex = 41;
			this->label17->Text = L" 4 1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(174, 120);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 10);
			this->label16->TabIndex = 40;
			this->label16->Text = L" 3 5";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(131, 120);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 10);
			this->label15->TabIndex = 39;
			this->label15->Text = L" 3 4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(92, 120);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(19, 10);
			this->label14->TabIndex = 38;
			this->label14->Text = L" 3 3";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(53, 158);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 10);
			this->label13->TabIndex = 37;
			this->label13->Text = L" 4 2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(14, 120);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 10);
			this->label12->TabIndex = 36;
			this->label12->Text = L" 3 1";
			// 
			// A35
			// 
			this->A35->Location = System::Drawing::Point(166, 95);
			this->A35->Multiline = true;
			this->A35->Name = L"A35";
			this->A35->Size = System::Drawing::Size(34, 22);
			this->A35->TabIndex = 35;
			this->A35->Text = L"0";
			this->A35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A35_KeyPress);
			this->A35->Leave += gcnew System::EventHandler(this, &MyForm::A35_Leave);
			// 
			// A34
			// 
			this->A34->Location = System::Drawing::Point(126, 95);
			this->A34->Multiline = true;
			this->A34->Name = L"A34";
			this->A34->Size = System::Drawing::Size(34, 22);
			this->A34->TabIndex = 34;
			this->A34->Text = L"0";
			this->A34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A34_KeyPress);
			this->A34->Leave += gcnew System::EventHandler(this, &MyForm::A34_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(92, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 10);
			this->label3->TabIndex = 25;
			this->label3->Text = L" 1 3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(174, 82);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 10);
			this->label10->TabIndex = 32;
			this->label10->Text = L" 2 5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(53, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 10);
			this->label2->TabIndex = 2;
			this->label2->Text = L" 1 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(131, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 10);
			this->label9->TabIndex = 31;
			this->label9->Text = L" 2 4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 10);
			this->label1->TabIndex = 1;
			this->label1->Text = L" 1 1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(92, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 10);
			this->label8->TabIndex = 30;
			this->label8->Text = L" 2 3";
			// 
			// A13
			// 
			this->A13->Location = System::Drawing::Point(86, 19);
			this->A13->Multiline = true;
			this->A13->Name = L"A13";
			this->A13->Size = System::Drawing::Size(34, 22);
			this->A13->TabIndex = 24;
			this->A13->Text = L"0";
			this->A13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A13_KeyPress);
			this->A13->Leave += gcnew System::EventHandler(this, &MyForm::A13_Leave);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(53, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 10);
			this->label7->TabIndex = 29;
			this->label7->Text = L" 2 2";
			// 
			// A22
			// 
			this->A22->Location = System::Drawing::Point(46, 57);
			this->A22->Multiline = true;
			this->A22->Name = L"A22";
			this->A22->Size = System::Drawing::Size(34, 22);
			this->A22->TabIndex = 23;
			this->A22->Text = L"0";
			this->A22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A22_KeyPress);
			this->A22->Leave += gcnew System::EventHandler(this, &MyForm::A22_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(14, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 10);
			this->label6->TabIndex = 28;
			this->label6->Text = L" 2 1";
			// 
			// A23
			// 
			this->A23->Location = System::Drawing::Point(86, 57);
			this->A23->Multiline = true;
			this->A23->Name = L"A23";
			this->A23->Size = System::Drawing::Size(34, 22);
			this->A23->TabIndex = 22;
			this->A23->Text = L"0";
			this->A23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A23_KeyPress);
			this->A23->Leave += gcnew System::EventHandler(this, &MyForm::A23_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(174, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 10);
			this->label5->TabIndex = 27;
			this->label5->Text = L" 1 5";
			// 
			// A21
			// 
			this->A21->Location = System::Drawing::Point(6, 57);
			this->A21->Multiline = true;
			this->A21->Name = L"A21";
			this->A21->Size = System::Drawing::Size(34, 22);
			this->A21->TabIndex = 21;
			this->A21->Text = L"0";
			this->A21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A21_KeyPress);
			this->A21->Leave += gcnew System::EventHandler(this, &MyForm::A21_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(131, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 10);
			this->label4->TabIndex = 26;
			this->label4->Text = L" 1 4";
			// 
			// A12
			// 
			this->A12->Location = System::Drawing::Point(46, 19);
			this->A12->Multiline = true;
			this->A12->Name = L"A12";
			this->A12->Size = System::Drawing::Size(34, 22);
			this->A12->TabIndex = 20;
			this->A12->Text = L"0";
			this->A12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A12_KeyPress);
			this->A12->Leave += gcnew System::EventHandler(this, &MyForm::A12_Leave);
			// 
			// A14
			// 
			this->A14->Location = System::Drawing::Point(126, 19);
			this->A14->Multiline = true;
			this->A14->Name = L"A14";
			this->A14->Size = System::Drawing::Size(34, 22);
			this->A14->TabIndex = 19;
			this->A14->Text = L"0";
			this->A14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A14_KeyPress);
			this->A14->Leave += gcnew System::EventHandler(this, &MyForm::A14_Leave);
			// 
			// A25
			// 
			this->A25->Location = System::Drawing::Point(166, 57);
			this->A25->Multiline = true;
			this->A25->Name = L"A25";
			this->A25->Size = System::Drawing::Size(34, 22);
			this->A25->TabIndex = 6;
			this->A25->Text = L"0";
			this->A25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A25_KeyPress);
			this->A25->Leave += gcnew System::EventHandler(this, &MyForm::A25_Leave);
			// 
			// A31
			// 
			this->A31->Location = System::Drawing::Point(6, 95);
			this->A31->Multiline = true;
			this->A31->Name = L"A31";
			this->A31->Size = System::Drawing::Size(34, 22);
			this->A31->TabIndex = 5;
			this->A31->Text = L"0";
			this->A31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A31_KeyPress);
			this->A31->Leave += gcnew System::EventHandler(this, &MyForm::A31_Leave);
			// 
			// A32
			// 
			this->A32->Location = System::Drawing::Point(46, 95);
			this->A32->Multiline = true;
			this->A32->Name = L"A32";
			this->A32->Size = System::Drawing::Size(34, 22);
			this->A32->TabIndex = 4;
			this->A32->Text = L"0";
			this->A32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A32_KeyPress);
			this->A32->Leave += gcnew System::EventHandler(this, &MyForm::A32_Leave);
			// 
			// A33
			// 
			this->A33->Location = System::Drawing::Point(86, 95);
			this->A33->Multiline = true;
			this->A33->Name = L"A33";
			this->A33->Size = System::Drawing::Size(34, 22);
			this->A33->TabIndex = 3;
			this->A33->Text = L"0";
			this->A33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A33_KeyPress);
			this->A33->Leave += gcnew System::EventHandler(this, &MyForm::A33_Leave);
			// 
			// A24
			// 
			this->A24->Location = System::Drawing::Point(126, 57);
			this->A24->Multiline = true;
			this->A24->Name = L"A24";
			this->A24->Size = System::Drawing::Size(34, 22);
			this->A24->TabIndex = 2;
			this->A24->Text = L"0";
			this->A24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A24_KeyPress);
			this->A24->Leave += gcnew System::EventHandler(this, &MyForm::A24_Leave);
			// 
			// A15
			// 
			this->A15->Location = System::Drawing::Point(166, 19);
			this->A15->Multiline = true;
			this->A15->Name = L"A15";
			this->A15->Size = System::Drawing::Size(34, 22);
			this->A15->TabIndex = 1;
			this->A15->Text = L"0";
			this->A15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A15_KeyPress);
			this->A15->Leave += gcnew System::EventHandler(this, &MyForm::A15_Leave);
			// 
			// A11
			// 
			this->A11->Location = System::Drawing::Point(6, 19);
			this->A11->Multiline = true;
			this->A11->Name = L"A11";
			this->A11->Size = System::Drawing::Size(34, 22);
			this->A11->TabIndex = 0;
			this->A11->Text = L"0";
			this->A11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::A11_KeyPress);
			this->A11->Leave += gcnew System::EventHandler(this, &MyForm::A11_Leave);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->B55);
			this->groupBox2->Controls->Add(this->B54);
			this->groupBox2->Controls->Add(this->B53);
			this->groupBox2->Controls->Add(this->B52);
			this->groupBox2->Controls->Add(this->B51);
			this->groupBox2->Controls->Add(this->B45);
			this->groupBox2->Controls->Add(this->B44);
			this->groupBox2->Controls->Add(this->B43);
			this->groupBox2->Controls->Add(this->B42);
			this->groupBox2->Controls->Add(this->B41);
			this->groupBox2->Controls->Add(this->label31);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->label33);
			this->groupBox2->Controls->Add(this->label34);
			this->groupBox2->Controls->Add(this->label35);
			this->groupBox2->Controls->Add(this->label36);
			this->groupBox2->Controls->Add(this->label37);
			this->groupBox2->Controls->Add(this->label38);
			this->groupBox2->Controls->Add(this->label39);
			this->groupBox2->Controls->Add(this->label40);
			this->groupBox2->Controls->Add(this->B35);
			this->groupBox2->Controls->Add(this->B34);
			this->groupBox2->Controls->Add(this->label41);
			this->groupBox2->Controls->Add(this->label42);
			this->groupBox2->Controls->Add(this->label43);
			this->groupBox2->Controls->Add(this->label44);
			this->groupBox2->Controls->Add(this->label45);
			this->groupBox2->Controls->Add(this->label46);
			this->groupBox2->Controls->Add(this->B13);
			this->groupBox2->Controls->Add(this->label47);
			this->groupBox2->Controls->Add(this->B22);
			this->groupBox2->Controls->Add(this->label48);
			this->groupBox2->Controls->Add(this->B23);
			this->groupBox2->Controls->Add(this->label49);
			this->groupBox2->Controls->Add(this->B21);
			this->groupBox2->Controls->Add(this->label50);
			this->groupBox2->Controls->Add(this->B12);
			this->groupBox2->Controls->Add(this->B14);
			this->groupBox2->Controls->Add(this->B25);
			this->groupBox2->Controls->Add(this->B31);
			this->groupBox2->Controls->Add(this->B32);
			this->groupBox2->Controls->Add(this->B33);
			this->groupBox2->Controls->Add(this->B24);
			this->groupBox2->Controls->Add(this->B15);
			this->groupBox2->Controls->Add(this->B11);
			this->groupBox2->Location = System::Drawing::Point(560, 14);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(208, 211);
			this->groupBox2->TabIndex = 61;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Матрица В";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(174, 196);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(21, 10);
			this->label26->TabIndex = 60;
			this->label26->Text = L"  5 5";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(131, 196);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(19, 10);
			this->label27->TabIndex = 59;
			this->label27->Text = L" 5 4";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(92, 196);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(19, 10);
			this->label28->TabIndex = 58;
			this->label28->Text = L" 5 3";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(53, 196);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(19, 10);
			this->label29->TabIndex = 57;
			this->label29->Text = L" 5 2";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(14, 196);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(19, 10);
			this->label30->TabIndex = 56;
			this->label30->Text = L" 5 1";
			// 
			// B55
			// 
			this->B55->Location = System::Drawing::Point(166, 171);
			this->B55->Multiline = true;
			this->B55->Name = L"B55";
			this->B55->Size = System::Drawing::Size(34, 22);
			this->B55->TabIndex = 55;
			this->B55->Text = L"0";
			this->B55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B55_KeyPress);
			this->B55->Leave += gcnew System::EventHandler(this, &MyForm::B55_Leave);
			// 
			// B54
			// 
			this->B54->Location = System::Drawing::Point(126, 171);
			this->B54->Multiline = true;
			this->B54->Name = L"B54";
			this->B54->Size = System::Drawing::Size(34, 22);
			this->B54->TabIndex = 54;
			this->B54->Text = L"0";
			this->B54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B54_KeyPress);
			this->B54->Leave += gcnew System::EventHandler(this, &MyForm::B54_Leave);
			// 
			// B53
			// 
			this->B53->Location = System::Drawing::Point(86, 171);
			this->B53->Multiline = true;
			this->B53->Name = L"B53";
			this->B53->Size = System::Drawing::Size(34, 22);
			this->B53->TabIndex = 53;
			this->B53->Text = L"0";
			this->B53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B53_KeyPress);
			this->B53->Leave += gcnew System::EventHandler(this, &MyForm::B53_Leave);
			// 
			// B52
			// 
			this->B52->Location = System::Drawing::Point(46, 171);
			this->B52->Multiline = true;
			this->B52->Name = L"B52";
			this->B52->Size = System::Drawing::Size(34, 22);
			this->B52->TabIndex = 52;
			this->B52->Text = L"0";
			this->B52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B52_KeyPress);
			this->B52->Leave += gcnew System::EventHandler(this, &MyForm::B52_Leave);
			// 
			// B51
			// 
			this->B51->Location = System::Drawing::Point(6, 171);
			this->B51->Multiline = true;
			this->B51->Name = L"B51";
			this->B51->Size = System::Drawing::Size(34, 22);
			this->B51->TabIndex = 51;
			this->B51->Text = L"0";
			this->B51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B51_KeyPress);
			this->B51->Leave += gcnew System::EventHandler(this, &MyForm::B51_Leave);
			// 
			// B45
			// 
			this->B45->Location = System::Drawing::Point(166, 133);
			this->B45->Multiline = true;
			this->B45->Name = L"B45";
			this->B45->Size = System::Drawing::Size(34, 22);
			this->B45->TabIndex = 50;
			this->B45->Text = L"0";
			this->B45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B45_KeyPress);
			this->B45->Leave += gcnew System::EventHandler(this, &MyForm::B45_Leave);
			// 
			// B44
			// 
			this->B44->Location = System::Drawing::Point(126, 133);
			this->B44->Multiline = true;
			this->B44->Name = L"B44";
			this->B44->Size = System::Drawing::Size(34, 22);
			this->B44->TabIndex = 49;
			this->B44->Text = L"0";
			this->B44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B44_KeyPress);
			this->B44->Leave += gcnew System::EventHandler(this, &MyForm::B44_Leave);
			// 
			// B43
			// 
			this->B43->Location = System::Drawing::Point(86, 133);
			this->B43->Multiline = true;
			this->B43->Name = L"B43";
			this->B43->Size = System::Drawing::Size(34, 22);
			this->B43->TabIndex = 48;
			this->B43->Text = L"0";
			this->B43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B43_KeyPress);
			this->B43->Leave += gcnew System::EventHandler(this, &MyForm::B43_Leave);
			// 
			// B42
			// 
			this->B42->Location = System::Drawing::Point(46, 133);
			this->B42->Multiline = true;
			this->B42->Name = L"B42";
			this->B42->Size = System::Drawing::Size(34, 22);
			this->B42->TabIndex = 47;
			this->B42->Text = L"0";
			this->B42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B42_KeyPress);
			this->B42->Leave += gcnew System::EventHandler(this, &MyForm::B42_Leave);
			// 
			// B41
			// 
			this->B41->Location = System::Drawing::Point(6, 133);
			this->B41->Multiline = true;
			this->B41->Name = L"B41";
			this->B41->Size = System::Drawing::Size(34, 22);
			this->B41->TabIndex = 46;
			this->B41->Text = L"0";
			this->B41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B41_KeyPress);
			this->B41->Leave += gcnew System::EventHandler(this, &MyForm::B41_Leave);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(174, 158);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(19, 10);
			this->label31->TabIndex = 45;
			this->label31->Text = L" 4 5";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(131, 158);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(19, 10);
			this->label32->TabIndex = 44;
			this->label32->Text = L" 4 4";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(92, 158);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(19, 10);
			this->label33->TabIndex = 43;
			this->label33->Text = L" 4 3";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(53, 120);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(19, 10);
			this->label34->TabIndex = 42;
			this->label34->Text = L" 3 2";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(14, 158);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(19, 10);
			this->label35->TabIndex = 41;
			this->label35->Text = L" 4 1";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(174, 120);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(19, 10);
			this->label36->TabIndex = 40;
			this->label36->Text = L" 3 5";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->Location = System::Drawing::Point(131, 120);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(19, 10);
			this->label37->TabIndex = 39;
			this->label37->Text = L" 3 4";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(92, 120);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(19, 10);
			this->label38->TabIndex = 38;
			this->label38->Text = L" 3 3";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(53, 158);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(19, 10);
			this->label39->TabIndex = 37;
			this->label39->Text = L" 4 2";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(14, 120);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(19, 10);
			this->label40->TabIndex = 36;
			this->label40->Text = L" 3 1";
			// 
			// B35
			// 
			this->B35->Location = System::Drawing::Point(166, 95);
			this->B35->Multiline = true;
			this->B35->Name = L"B35";
			this->B35->Size = System::Drawing::Size(34, 22);
			this->B35->TabIndex = 35;
			this->B35->Text = L"0";
			this->B35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B35_KeyPress);
			this->B35->Leave += gcnew System::EventHandler(this, &MyForm::B35_Leave);
			// 
			// B34
			// 
			this->B34->Location = System::Drawing::Point(126, 95);
			this->B34->Multiline = true;
			this->B34->Name = L"B34";
			this->B34->Size = System::Drawing::Size(34, 22);
			this->B34->TabIndex = 34;
			this->B34->Text = L"0";
			this->B34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B34_KeyPress);
			this->B34->Leave += gcnew System::EventHandler(this, &MyForm::B34_Leave);
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(92, 44);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(19, 10);
			this->label41->TabIndex = 25;
			this->label41->Text = L" 1 3";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(174, 82);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(19, 10);
			this->label42->TabIndex = 32;
			this->label42->Text = L" 2 5";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(53, 44);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(19, 10);
			this->label43->TabIndex = 2;
			this->label43->Text = L" 1 2";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(131, 82);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(19, 10);
			this->label44->TabIndex = 31;
			this->label44->Text = L" 2 4";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(14, 44);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(19, 10);
			this->label45->TabIndex = 1;
			this->label45->Text = L" 1 1";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->Location = System::Drawing::Point(92, 82);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(19, 10);
			this->label46->TabIndex = 30;
			this->label46->Text = L" 2 3";
			// 
			// B13
			// 
			this->B13->Location = System::Drawing::Point(86, 19);
			this->B13->Multiline = true;
			this->B13->Name = L"B13";
			this->B13->Size = System::Drawing::Size(34, 22);
			this->B13->TabIndex = 24;
			this->B13->Text = L"0";
			this->B13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B13_KeyPress);
			this->B13->Leave += gcnew System::EventHandler(this, &MyForm::B13_Leave);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->Location = System::Drawing::Point(53, 82);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(19, 10);
			this->label47->TabIndex = 29;
			this->label47->Text = L" 2 2";
			// 
			// B22
			// 
			this->B22->Location = System::Drawing::Point(46, 57);
			this->B22->Multiline = true;
			this->B22->Name = L"B22";
			this->B22->Size = System::Drawing::Size(34, 22);
			this->B22->TabIndex = 23;
			this->B22->Text = L"0";
			this->B22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B22_KeyPress);
			this->B22->Leave += gcnew System::EventHandler(this, &MyForm::B22_Leave);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->Location = System::Drawing::Point(14, 82);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(19, 10);
			this->label48->TabIndex = 28;
			this->label48->Text = L" 2 1";
			// 
			// B23
			// 
			this->B23->Location = System::Drawing::Point(86, 57);
			this->B23->Multiline = true;
			this->B23->Name = L"B23";
			this->B23->Size = System::Drawing::Size(34, 22);
			this->B23->TabIndex = 22;
			this->B23->Text = L"0";
			this->B23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B23_KeyPress);
			this->B23->Leave += gcnew System::EventHandler(this, &MyForm::B23_Leave);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->Location = System::Drawing::Point(174, 44);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(19, 10);
			this->label49->TabIndex = 27;
			this->label49->Text = L" 1 5";
			// 
			// B21
			// 
			this->B21->Location = System::Drawing::Point(6, 57);
			this->B21->Multiline = true;
			this->B21->Name = L"B21";
			this->B21->Size = System::Drawing::Size(34, 22);
			this->B21->TabIndex = 21;
			this->B21->Text = L"0";
			this->B21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B21_KeyPress);
			this->B21->Leave += gcnew System::EventHandler(this, &MyForm::B21_Leave);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->Location = System::Drawing::Point(131, 44);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(19, 10);
			this->label50->TabIndex = 26;
			this->label50->Text = L" 1 4";
			// 
			// B12
			// 
			this->B12->Location = System::Drawing::Point(46, 19);
			this->B12->Multiline = true;
			this->B12->Name = L"B12";
			this->B12->Size = System::Drawing::Size(34, 22);
			this->B12->TabIndex = 20;
			this->B12->Text = L"0";
			this->B12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B12_KeyPress);
			this->B12->Leave += gcnew System::EventHandler(this, &MyForm::B12_Leave);
			// 
			// B14
			// 
			this->B14->Location = System::Drawing::Point(126, 19);
			this->B14->Multiline = true;
			this->B14->Name = L"B14";
			this->B14->Size = System::Drawing::Size(34, 22);
			this->B14->TabIndex = 19;
			this->B14->Text = L"0";
			this->B14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B14_KeyPress);
			this->B14->Leave += gcnew System::EventHandler(this, &MyForm::B14_Leave);
			// 
			// B25
			// 
			this->B25->Location = System::Drawing::Point(166, 57);
			this->B25->Multiline = true;
			this->B25->Name = L"B25";
			this->B25->Size = System::Drawing::Size(34, 22);
			this->B25->TabIndex = 6;
			this->B25->Text = L"0";
			this->B25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B25_KeyPress);
			this->B25->Leave += gcnew System::EventHandler(this, &MyForm::B25_Leave);
			// 
			// B31
			// 
			this->B31->Location = System::Drawing::Point(6, 95);
			this->B31->Multiline = true;
			this->B31->Name = L"B31";
			this->B31->Size = System::Drawing::Size(34, 22);
			this->B31->TabIndex = 5;
			this->B31->Text = L"0";
			this->B31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B31_KeyPress);
			this->B31->Leave += gcnew System::EventHandler(this, &MyForm::B31_Leave);
			// 
			// B32
			// 
			this->B32->Location = System::Drawing::Point(46, 95);
			this->B32->Multiline = true;
			this->B32->Name = L"B32";
			this->B32->Size = System::Drawing::Size(34, 22);
			this->B32->TabIndex = 4;
			this->B32->Text = L"0";
			this->B32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B32_KeyPress);
			this->B32->Leave += gcnew System::EventHandler(this, &MyForm::B32_Leave);
			// 
			// B33
			// 
			this->B33->Location = System::Drawing::Point(86, 95);
			this->B33->Multiline = true;
			this->B33->Name = L"B33";
			this->B33->Size = System::Drawing::Size(34, 22);
			this->B33->TabIndex = 3;
			this->B33->Text = L"0";
			this->B33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B33_KeyPress);
			this->B33->Leave += gcnew System::EventHandler(this, &MyForm::B33_Leave);
			// 
			// B24
			// 
			this->B24->Location = System::Drawing::Point(126, 57);
			this->B24->Multiline = true;
			this->B24->Name = L"B24";
			this->B24->Size = System::Drawing::Size(34, 22);
			this->B24->TabIndex = 2;
			this->B24->Text = L"0";
			this->B24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B24_KeyPress);
			this->B24->Leave += gcnew System::EventHandler(this, &MyForm::B24_Leave);
			// 
			// B15
			// 
			this->B15->Location = System::Drawing::Point(166, 19);
			this->B15->Multiline = true;
			this->B15->Name = L"B15";
			this->B15->Size = System::Drawing::Size(34, 22);
			this->B15->TabIndex = 1;
			this->B15->Text = L"0";
			this->B15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B15_KeyPress);
			this->B15->Leave += gcnew System::EventHandler(this, &MyForm::B15_Leave);
			// 
			// B11
			// 
			this->B11->Location = System::Drawing::Point(6, 19);
			this->B11->Multiline = true;
			this->B11->Name = L"B11";
			this->B11->Size = System::Drawing::Size(34, 22);
			this->B11->TabIndex = 0;
			this->B11->Text = L"0";
			this->B11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::B11_KeyPress);
			this->B11->Leave += gcnew System::EventHandler(this, &MyForm::B11_Leave);
			// 
			// SIZE_A_N
			// 
			this->SIZE_A_N->Location = System::Drawing::Point(135, 53);
			this->SIZE_A_N->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->SIZE_A_N->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SIZE_A_N->Name = L"SIZE_A_N";
			this->SIZE_A_N->Size = System::Drawing::Size(35, 20);
			this->SIZE_A_N->TabIndex = 62;
			this->SIZE_A_N->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// SIZE_A_M
			// 
			this->SIZE_A_M->Location = System::Drawing::Point(135, 31);
			this->SIZE_A_M->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->SIZE_A_M->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SIZE_A_M->Name = L"SIZE_A_M";
			this->SIZE_A_M->Size = System::Drawing::Size(35, 20);
			this->SIZE_A_M->TabIndex = 63;
			this->SIZE_A_M->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->Location = System::Drawing::Point(6, 34);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(126, 13);
			this->label51->TabIndex = 64;
			this->label51->Text = L"Высота матрицы А -";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->Location = System::Drawing::Point(6, 56);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(126, 13);
			this->label52->TabIndex = 65;
			this->label52->Text = L"Ширина матрицы А -";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->Location = System::Drawing::Point(391, 52);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(125, 13);
			this->label53->TabIndex = 69;
			this->label53->Text = L"Ширина матрицы В -";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->Location = System::Drawing::Point(391, 30);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(125, 13);
			this->label54->TabIndex = 68;
			this->label54->Text = L"Высота матрицы В -";
			// 
			// SIZE_B_M
			// 
			this->SIZE_B_M->Location = System::Drawing::Point(519, 27);
			this->SIZE_B_M->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->SIZE_B_M->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SIZE_B_M->Name = L"SIZE_B_M";
			this->SIZE_B_M->Size = System::Drawing::Size(35, 20);
			this->SIZE_B_M->TabIndex = 67;
			this->SIZE_B_M->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// SIZE_B_N
			// 
			this->SIZE_B_N->Location = System::Drawing::Point(519, 49);
			this->SIZE_B_N->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->SIZE_B_N->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SIZE_B_N->Name = L"SIZE_B_N";
			this->SIZE_B_N->Size = System::Drawing::Size(35, 20);
			this->SIZE_B_N->TabIndex = 66;
			this->SIZE_B_N->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// DeterminantA
			// 
			this->DeterminantA->Location = System::Drawing::Point(9, 79);
			this->DeterminantA->Name = L"DeterminantA";
			this->DeterminantA->Size = System::Drawing::Size(161, 24);
			this->DeterminantA->TabIndex = 70;
			this->DeterminantA->Text = L"определитель матрицы А";
			this->DeterminantA->UseVisualStyleBackColor = true;
			this->DeterminantA->Click += gcnew System::EventHandler(this, &MyForm::DeterminantA_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label55);
			this->groupBox3->Controls->Add(this->label56);
			this->groupBox3->Controls->Add(this->label57);
			this->groupBox3->Controls->Add(this->label58);
			this->groupBox3->Controls->Add(this->label59);
			this->groupBox3->Controls->Add(this->C55);
			this->groupBox3->Controls->Add(this->C54);
			this->groupBox3->Controls->Add(this->C53);
			this->groupBox3->Controls->Add(this->C52);
			this->groupBox3->Controls->Add(this->C51);
			this->groupBox3->Controls->Add(this->C45);
			this->groupBox3->Controls->Add(this->C44);
			this->groupBox3->Controls->Add(this->C43);
			this->groupBox3->Controls->Add(this->C42);
			this->groupBox3->Controls->Add(this->C41);
			this->groupBox3->Controls->Add(this->label60);
			this->groupBox3->Controls->Add(this->label61);
			this->groupBox3->Controls->Add(this->label62);
			this->groupBox3->Controls->Add(this->label63);
			this->groupBox3->Controls->Add(this->label64);
			this->groupBox3->Controls->Add(this->label65);
			this->groupBox3->Controls->Add(this->label66);
			this->groupBox3->Controls->Add(this->label67);
			this->groupBox3->Controls->Add(this->label68);
			this->groupBox3->Controls->Add(this->label69);
			this->groupBox3->Controls->Add(this->C35);
			this->groupBox3->Controls->Add(this->C34);
			this->groupBox3->Controls->Add(this->label70);
			this->groupBox3->Controls->Add(this->label71);
			this->groupBox3->Controls->Add(this->label72);
			this->groupBox3->Controls->Add(this->label73);
			this->groupBox3->Controls->Add(this->label74);
			this->groupBox3->Controls->Add(this->label75);
			this->groupBox3->Controls->Add(this->C13);
			this->groupBox3->Controls->Add(this->label76);
			this->groupBox3->Controls->Add(this->C22);
			this->groupBox3->Controls->Add(this->label77);
			this->groupBox3->Controls->Add(this->C23);
			this->groupBox3->Controls->Add(this->label78);
			this->groupBox3->Controls->Add(this->C21);
			this->groupBox3->Controls->Add(this->label79);
			this->groupBox3->Controls->Add(this->C12);
			this->groupBox3->Controls->Add(this->C14);
			this->groupBox3->Controls->Add(this->C25);
			this->groupBox3->Controls->Add(this->C31);
			this->groupBox3->Controls->Add(this->C32);
			this->groupBox3->Controls->Add(this->C33);
			this->groupBox3->Controls->Add(this->C24);
			this->groupBox3->Controls->Add(this->C15);
			this->groupBox3->Controls->Add(this->C11);
			this->groupBox3->Location = System::Drawing::Point(847, 14);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(208, 211);
			this->groupBox3->TabIndex = 72;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Матрица С";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MyForm::groupBox3_Enter);
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->Location = System::Drawing::Point(174, 196);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(21, 10);
			this->label55->TabIndex = 60;
			this->label55->Text = L"  5 5";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label56->Location = System::Drawing::Point(131, 196);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(19, 10);
			this->label56->TabIndex = 59;
			this->label56->Text = L" 5 4";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label57->Location = System::Drawing::Point(92, 196);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(19, 10);
			this->label57->TabIndex = 58;
			this->label57->Text = L" 5 3";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label58->Location = System::Drawing::Point(53, 196);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(19, 10);
			this->label58->TabIndex = 57;
			this->label58->Text = L" 5 2";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label59->Location = System::Drawing::Point(14, 196);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(19, 10);
			this->label59->TabIndex = 56;
			this->label59->Text = L" 5 1";
			// 
			// C55
			// 
			this->C55->Location = System::Drawing::Point(166, 171);
			this->C55->Multiline = true;
			this->C55->Name = L"C55";
			this->C55->Size = System::Drawing::Size(34, 22);
			this->C55->TabIndex = 55;
			this->C55->Text = L"0";
			this->C55->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C55_KeyPress_1);
			this->C55->Leave += gcnew System::EventHandler(this, &MyForm::C55_Leave);
			// 
			// C54
			// 
			this->C54->Location = System::Drawing::Point(126, 171);
			this->C54->Multiline = true;
			this->C54->Name = L"C54";
			this->C54->Size = System::Drawing::Size(34, 22);
			this->C54->TabIndex = 54;
			this->C54->Text = L"0";
			this->C54->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C54_KeyPress_1);
			this->C54->Leave += gcnew System::EventHandler(this, &MyForm::C54_Leave);
			// 
			// C53
			// 
			this->C53->Location = System::Drawing::Point(86, 171);
			this->C53->Multiline = true;
			this->C53->Name = L"C53";
			this->C53->Size = System::Drawing::Size(34, 22);
			this->C53->TabIndex = 53;
			this->C53->Text = L"0";
			this->C53->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C53_KeyPress_1);
			this->C53->Leave += gcnew System::EventHandler(this, &MyForm::C53_Leave);
			// 
			// C52
			// 
			this->C52->Location = System::Drawing::Point(46, 171);
			this->C52->Multiline = true;
			this->C52->Name = L"C52";
			this->C52->Size = System::Drawing::Size(34, 22);
			this->C52->TabIndex = 52;
			this->C52->Text = L"0";
			this->C52->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C52_KeyPress_1);
			this->C52->Leave += gcnew System::EventHandler(this, &MyForm::C52_Leave);
			// 
			// C51
			// 
			this->C51->Location = System::Drawing::Point(6, 171);
			this->C51->Multiline = true;
			this->C51->Name = L"C51";
			this->C51->Size = System::Drawing::Size(34, 22);
			this->C51->TabIndex = 51;
			this->C51->Text = L"0";
			this->C51->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C51_KeyPress_1);
			this->C51->Leave += gcnew System::EventHandler(this, &MyForm::C51_Leave);
			// 
			// C45
			// 
			this->C45->Location = System::Drawing::Point(166, 133);
			this->C45->Multiline = true;
			this->C45->Name = L"C45";
			this->C45->Size = System::Drawing::Size(34, 22);
			this->C45->TabIndex = 50;
			this->C45->Text = L"0";
			this->C45->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C45_KeyPress_1);
			this->C45->Leave += gcnew System::EventHandler(this, &MyForm::C45_Leave);
			// 
			// C44
			// 
			this->C44->Location = System::Drawing::Point(126, 133);
			this->C44->Multiline = true;
			this->C44->Name = L"C44";
			this->C44->Size = System::Drawing::Size(34, 22);
			this->C44->TabIndex = 49;
			this->C44->Text = L"0";
			this->C44->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C44_KeyPress_1);
			this->C44->Leave += gcnew System::EventHandler(this, &MyForm::C44_Leave);
			// 
			// C43
			// 
			this->C43->Location = System::Drawing::Point(86, 133);
			this->C43->Multiline = true;
			this->C43->Name = L"C43";
			this->C43->Size = System::Drawing::Size(34, 22);
			this->C43->TabIndex = 48;
			this->C43->Text = L"0";
			this->C43->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C43_KeyPress_1);
			this->C43->Leave += gcnew System::EventHandler(this, &MyForm::C43_Leave);
			// 
			// C42
			// 
			this->C42->Location = System::Drawing::Point(46, 133);
			this->C42->Multiline = true;
			this->C42->Name = L"C42";
			this->C42->Size = System::Drawing::Size(34, 22);
			this->C42->TabIndex = 47;
			this->C42->Text = L"0";
			this->C42->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C42_KeyPress_1);
			this->C42->Leave += gcnew System::EventHandler(this, &MyForm::C42_Leave);
			// 
			// C41
			// 
			this->C41->Location = System::Drawing::Point(6, 133);
			this->C41->Multiline = true;
			this->C41->Name = L"C41";
			this->C41->Size = System::Drawing::Size(34, 22);
			this->C41->TabIndex = 46;
			this->C41->Text = L"0";
			this->C41->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C41_KeyPress_1);
			this->C41->Leave += gcnew System::EventHandler(this, &MyForm::C41_Leave);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label60->Location = System::Drawing::Point(174, 158);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(19, 10);
			this->label60->TabIndex = 45;
			this->label60->Text = L" 4 5";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label61->Location = System::Drawing::Point(131, 158);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(19, 10);
			this->label61->TabIndex = 44;
			this->label61->Text = L" 4 4";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label62->Location = System::Drawing::Point(92, 158);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(19, 10);
			this->label62->TabIndex = 43;
			this->label62->Text = L" 4 3";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label63->Location = System::Drawing::Point(53, 120);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(19, 10);
			this->label63->TabIndex = 42;
			this->label63->Text = L" 3 2";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label64->Location = System::Drawing::Point(14, 158);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(19, 10);
			this->label64->TabIndex = 41;
			this->label64->Text = L" 4 1";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label65->Location = System::Drawing::Point(174, 120);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(19, 10);
			this->label65->TabIndex = 40;
			this->label65->Text = L" 3 5";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label66->Location = System::Drawing::Point(131, 120);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(19, 10);
			this->label66->TabIndex = 39;
			this->label66->Text = L" 3 4";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label67->Location = System::Drawing::Point(92, 120);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(19, 10);
			this->label67->TabIndex = 38;
			this->label67->Text = L" 3 3";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label68->Location = System::Drawing::Point(53, 158);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(19, 10);
			this->label68->TabIndex = 37;
			this->label68->Text = L" 4 2";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label69->Location = System::Drawing::Point(14, 120);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(19, 10);
			this->label69->TabIndex = 36;
			this->label69->Text = L" 3 1";
			// 
			// C35
			// 
			this->C35->Location = System::Drawing::Point(166, 95);
			this->C35->Multiline = true;
			this->C35->Name = L"C35";
			this->C35->Size = System::Drawing::Size(34, 22);
			this->C35->TabIndex = 35;
			this->C35->Text = L"0";
			this->C35->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C35_KeyPress_1);
			this->C35->Leave += gcnew System::EventHandler(this, &MyForm::C35_Leave);
			// 
			// C34
			// 
			this->C34->Location = System::Drawing::Point(126, 95);
			this->C34->Multiline = true;
			this->C34->Name = L"C34";
			this->C34->Size = System::Drawing::Size(34, 22);
			this->C34->TabIndex = 34;
			this->C34->Text = L"0";
			this->C34->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C34_KeyPress_1);
			this->C34->Leave += gcnew System::EventHandler(this, &MyForm::C34_Leave);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label70->Location = System::Drawing::Point(92, 44);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(19, 10);
			this->label70->TabIndex = 25;
			this->label70->Text = L" 1 3";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label71->Location = System::Drawing::Point(174, 82);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(19, 10);
			this->label71->TabIndex = 32;
			this->label71->Text = L" 2 5";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label72->Location = System::Drawing::Point(53, 44);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(19, 10);
			this->label72->TabIndex = 2;
			this->label72->Text = L" 1 2";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label73->Location = System::Drawing::Point(131, 82);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(19, 10);
			this->label73->TabIndex = 31;
			this->label73->Text = L" 2 4";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label74->Location = System::Drawing::Point(14, 44);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(19, 10);
			this->label74->TabIndex = 1;
			this->label74->Text = L" 1 1";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label75->Location = System::Drawing::Point(92, 82);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(19, 10);
			this->label75->TabIndex = 30;
			this->label75->Text = L" 2 3";
			// 
			// C13
			// 
			this->C13->Location = System::Drawing::Point(86, 19);
			this->C13->Multiline = true;
			this->C13->Name = L"C13";
			this->C13->Size = System::Drawing::Size(34, 22);
			this->C13->TabIndex = 24;
			this->C13->Text = L"0";
			this->C13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C13_KeyPress_1);
			this->C13->Leave += gcnew System::EventHandler(this, &MyForm::C13_Leave);
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label76->Location = System::Drawing::Point(53, 82);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(19, 10);
			this->label76->TabIndex = 29;
			this->label76->Text = L" 2 2";
			// 
			// C22
			// 
			this->C22->Location = System::Drawing::Point(46, 57);
			this->C22->Multiline = true;
			this->C22->Name = L"C22";
			this->C22->Size = System::Drawing::Size(34, 22);
			this->C22->TabIndex = 23;
			this->C22->Text = L"0";
			this->C22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C22_KeyPress_1);
			this->C22->Leave += gcnew System::EventHandler(this, &MyForm::C22_Leave);
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label77->Location = System::Drawing::Point(14, 82);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(19, 10);
			this->label77->TabIndex = 28;
			this->label77->Text = L" 2 1";
			// 
			// C23
			// 
			this->C23->Location = System::Drawing::Point(86, 57);
			this->C23->Multiline = true;
			this->C23->Name = L"C23";
			this->C23->Size = System::Drawing::Size(34, 22);
			this->C23->TabIndex = 22;
			this->C23->Text = L"0";
			this->C23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C23_KeyPress_1);
			this->C23->Leave += gcnew System::EventHandler(this, &MyForm::C23_Leave);
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label78->Location = System::Drawing::Point(174, 44);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(19, 10);
			this->label78->TabIndex = 27;
			this->label78->Text = L" 1 5";
			// 
			// C21
			// 
			this->C21->Location = System::Drawing::Point(6, 57);
			this->C21->Multiline = true;
			this->C21->Name = L"C21";
			this->C21->Size = System::Drawing::Size(34, 22);
			this->C21->TabIndex = 21;
			this->C21->Text = L"0";
			this->C21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C21_KeyPress_1);
			this->C21->Leave += gcnew System::EventHandler(this, &MyForm::C21_Leave);
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label79->Location = System::Drawing::Point(131, 44);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(19, 10);
			this->label79->TabIndex = 26;
			this->label79->Text = L" 1 4";
			// 
			// C12
			// 
			this->C12->Location = System::Drawing::Point(46, 19);
			this->C12->Multiline = true;
			this->C12->Name = L"C12";
			this->C12->Size = System::Drawing::Size(34, 22);
			this->C12->TabIndex = 20;
			this->C12->Text = L"0";
			this->C12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C12_KeyPress_1);
			this->C12->Leave += gcnew System::EventHandler(this, &MyForm::C12_Leave);
			// 
			// C14
			// 
			this->C14->Location = System::Drawing::Point(126, 19);
			this->C14->Multiline = true;
			this->C14->Name = L"C14";
			this->C14->Size = System::Drawing::Size(34, 22);
			this->C14->TabIndex = 19;
			this->C14->Text = L"0";
			this->C14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C14_KeyPress_1);
			this->C14->Leave += gcnew System::EventHandler(this, &MyForm::C14_Leave);
			// 
			// C25
			// 
			this->C25->Location = System::Drawing::Point(166, 57);
			this->C25->Multiline = true;
			this->C25->Name = L"C25";
			this->C25->Size = System::Drawing::Size(34, 22);
			this->C25->TabIndex = 6;
			this->C25->Text = L"0";
			this->C25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C25_KeyPress_1);
			this->C25->Leave += gcnew System::EventHandler(this, &MyForm::C25_Leave);
			// 
			// C31
			// 
			this->C31->Location = System::Drawing::Point(6, 95);
			this->C31->Multiline = true;
			this->C31->Name = L"C31";
			this->C31->Size = System::Drawing::Size(34, 22);
			this->C31->TabIndex = 5;
			this->C31->Text = L"0";
			this->C31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C31_KeyPress_1);
			this->C31->Leave += gcnew System::EventHandler(this, &MyForm::C31_Leave);
			// 
			// C32
			// 
			this->C32->Location = System::Drawing::Point(46, 95);
			this->C32->Multiline = true;
			this->C32->Name = L"C32";
			this->C32->Size = System::Drawing::Size(34, 22);
			this->C32->TabIndex = 4;
			this->C32->Text = L"0";
			this->C32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C32_KeyPress_1);
			this->C32->Leave += gcnew System::EventHandler(this, &MyForm::C32_Leave);
			// 
			// C33
			// 
			this->C33->Location = System::Drawing::Point(86, 95);
			this->C33->Multiline = true;
			this->C33->Name = L"C33";
			this->C33->Size = System::Drawing::Size(34, 22);
			this->C33->TabIndex = 3;
			this->C33->Text = L"0";
			this->C33->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C33_KeyPress_1);
			this->C33->Leave += gcnew System::EventHandler(this, &MyForm::C33_Leave);
			// 
			// C24
			// 
			this->C24->Location = System::Drawing::Point(126, 57);
			this->C24->Multiline = true;
			this->C24->Name = L"C24";
			this->C24->Size = System::Drawing::Size(34, 22);
			this->C24->TabIndex = 2;
			this->C24->Text = L"0";
			this->C24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C24_KeyPress_1);
			this->C24->Leave += gcnew System::EventHandler(this, &MyForm::C24_Leave);
			// 
			// C15
			// 
			this->C15->Location = System::Drawing::Point(166, 19);
			this->C15->Multiline = true;
			this->C15->Name = L"C15";
			this->C15->Size = System::Drawing::Size(34, 22);
			this->C15->TabIndex = 1;
			this->C15->Text = L"0";
			this->C15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C15_KeyPress_1);
			this->C15->Leave += gcnew System::EventHandler(this, &MyForm::C15_Leave);
			// 
			// C11
			// 
			this->C11->Location = System::Drawing::Point(6, 19);
			this->C11->Multiline = true;
			this->C11->Name = L"C11";
			this->C11->Size = System::Drawing::Size(34, 22);
			this->C11->TabIndex = 0;
			this->C11->Text = L"0";
			this->C11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::C11_KeyPress_1);
			this->C11->Leave += gcnew System::EventHandler(this, &MyForm::C11_Leave);
			// 
			// MainTextBox
			// 
			this->MainTextBox->Location = System::Drawing::Point(176, 231);
			this->MainTextBox->Multiline = true;
			this->MainTextBox->Name = L"MainTextBox";
			this->MainTextBox->Size = System::Drawing::Size(208, 150);
			this->MainTextBox->TabIndex = 73;
			// 
			// determinantB
			// 
			this->determinantB->Location = System::Drawing::Point(394, 79);
			this->determinantB->Name = L"determinantB";
			this->determinantB->Size = System::Drawing::Size(161, 24);
			this->determinantB->TabIndex = 74;
			this->determinantB->Text = L"определитель матрицы B";
			this->determinantB->UseVisualStyleBackColor = true;
			this->determinantB->Click += gcnew System::EventHandler(this, &MyForm::determinantB_Click);
			// 
			// TransponierteA
			// 
			this->TransponierteA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TransponierteA->Location = System::Drawing::Point(9, 107);
			this->TransponierteA->Name = L"TransponierteA";
			this->TransponierteA->Size = System::Drawing::Size(161, 23);
			this->TransponierteA->TabIndex = 75;
			this->TransponierteA->Text = L"Транспонирование матрицы А";
			this->TransponierteA->UseVisualStyleBackColor = true;
			this->TransponierteA->Click += gcnew System::EventHandler(this, &MyForm::TransponierteA_Click);
			// 
			// TransponierteB
			// 
			this->TransponierteB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TransponierteB->Location = System::Drawing::Point(394, 109);
			this->TransponierteB->Name = L"TransponierteB";
			this->TransponierteB->Size = System::Drawing::Size(161, 23);
			this->TransponierteB->TabIndex = 76;
			this->TransponierteB->Text = L"Транспонирование матрицы В";
			this->TransponierteB->UseVisualStyleBackColor = true;
			this->TransponierteB->Click += gcnew System::EventHandler(this, &MyForm::TransponierteB_Click);
			// 
			// MultiplicationA
			// 
			this->MultiplicationA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MultiplicationA->Location = System::Drawing::Point(12, 136);
			this->MultiplicationA->Name = L"MultiplicationA";
			this->MultiplicationA->Size = System::Drawing::Size(124, 23);
			this->MultiplicationA->TabIndex = 77;
			this->MultiplicationA->Text = L"Умножить матрицу А на";
			this->MultiplicationA->UseVisualStyleBackColor = true;
			this->MultiplicationA->Click += gcnew System::EventHandler(this, &MyForm::MultiplicationA_Click);
			// 
			// multiplierA
			// 
			this->multiplierA->Location = System::Drawing::Point(142, 136);
			this->multiplierA->Multiline = true;
			this->multiplierA->Name = L"multiplierA";
			this->multiplierA->Size = System::Drawing::Size(28, 23);
			this->multiplierA->TabIndex = 78;
			this->multiplierA->Text = L"1";
			this->multiplierA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::multiplierA_KeyPress);
			this->multiplierA->Leave += gcnew System::EventHandler(this, &MyForm::multiplierA_Leave);
			// 
			// MultiplicationB
			// 
			this->MultiplicationB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MultiplicationB->Location = System::Drawing::Point(394, 138);
			this->MultiplicationB->Name = L"MultiplicationB";
			this->MultiplicationB->Size = System::Drawing::Size(124, 23);
			this->MultiplicationB->TabIndex = 79;
			this->MultiplicationB->Text = L"Умножить матрицу B на";
			this->MultiplicationB->UseVisualStyleBackColor = true;
			this->MultiplicationB->Click += gcnew System::EventHandler(this, &MyForm::MultiplicationB_Click);
			// 
			// multiplierB
			// 
			this->multiplierB->Location = System::Drawing::Point(526, 138);
			this->multiplierB->Multiline = true;
			this->multiplierB->Name = L"multiplierB";
			this->multiplierB->Size = System::Drawing::Size(28, 23);
			this->multiplierB->TabIndex = 80;
			this->multiplierB->Text = L"1";
			this->multiplierB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::multiplierB_KeyPress);
			this->multiplierB->Leave += gcnew System::EventHandler(this, &MyForm::multiplierB_Leave);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->multiplicationAB);
			this->groupBox4->Controls->Add(this->subtractionBA);
			this->groupBox4->Controls->Add(this->сAB);
			this->groupBox4->Controls->Add(this->SummAB);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(12, 231);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(158, 150);
			this->groupBox4->TabIndex = 82;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Арифметические операции над матрицами";
			// 
			// multiplicationAB
			// 
			this->multiplicationAB->Location = System::Drawing::Point(6, 119);
			this->multiplicationAB->Name = L"multiplicationAB";
			this->multiplicationAB->Size = System::Drawing::Size(146, 23);
			this->multiplicationAB->TabIndex = 89;
			this->multiplicationAB->Text = L"A*B=C";
			this->multiplicationAB->UseVisualStyleBackColor = true;
			this->multiplicationAB->Click += gcnew System::EventHandler(this, &MyForm::multiplicationAB_Click);
			// 
			// subtractionBA
			// 
			this->subtractionBA->Location = System::Drawing::Point(6, 90);
			this->subtractionBA->Name = L"subtractionBA";
			this->subtractionBA->Size = System::Drawing::Size(146, 23);
			this->subtractionBA->TabIndex = 89;
			this->subtractionBA->Text = L"B-A=C";
			this->subtractionBA->UseVisualStyleBackColor = true;
			this->subtractionBA->Click += gcnew System::EventHandler(this, &MyForm::subtractionBA_Click);
			// 
			// сAB
			// 
			this->сAB->Location = System::Drawing::Point(6, 61);
			this->сAB->Name = L"сAB";
			this->сAB->Size = System::Drawing::Size(146, 23);
			this->сAB->TabIndex = 89;
			this->сAB->Text = L"А-В=С";
			this->сAB->UseVisualStyleBackColor = true;
			this->сAB->Click += gcnew System::EventHandler(this, &MyForm::subtractionAB_Click);
			// 
			// SummAB
			// 
			this->SummAB->Location = System::Drawing::Point(6, 32);
			this->SummAB->Name = L"SummAB";
			this->SummAB->Size = System::Drawing::Size(146, 23);
			this->SummAB->TabIndex = 89;
			this->SummAB->Text = L"A+B=C";
			this->SummAB->UseVisualStyleBackColor = true;
			this->SummAB->Click += gcnew System::EventHandler(this, &MyForm::SummAB_Click);
			// 
			// exponentiationA
			// 
			this->exponentiationA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exponentiationA->Location = System::Drawing::Point(12, 165);
			this->exponentiationA->Name = L"exponentiationA";
			this->exponentiationA->Size = System::Drawing::Size(124, 23);
			this->exponentiationA->TabIndex = 83;
			this->exponentiationA->Text = L"Возвести матрицу А в степень";
			this->exponentiationA->UseVisualStyleBackColor = true;
			this->exponentiationA->Click += gcnew System::EventHandler(this, &MyForm::exponentiationA_Click);
			// 
			// ExponentA
			// 
			this->ExponentA->Location = System::Drawing::Point(142, 165);
			this->ExponentA->Multiline = true;
			this->ExponentA->Name = L"ExponentA";
			this->ExponentA->Size = System::Drawing::Size(28, 23);
			this->ExponentA->TabIndex = 84;
			this->ExponentA->Text = L"1";
			this->ExponentA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::ExponentA_KeyPress);
			this->ExponentA->Leave += gcnew System::EventHandler(this, &MyForm::ExponentA_Leave);
			// 
			// exponentiationB
			// 
			this->exponentiationB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exponentiationB->Location = System::Drawing::Point(394, 167);
			this->exponentiationB->Name = L"exponentiationB";
			this->exponentiationB->Size = System::Drawing::Size(124, 23);
			this->exponentiationB->TabIndex = 85;
			this->exponentiationB->Text = L"Возвести матрицу А в степень";
			this->exponentiationB->UseVisualStyleBackColor = true;
			this->exponentiationB->Click += gcnew System::EventHandler(this, &MyForm::exponentiationB_Click_1);
			// 
			// ExponentB
			// 
			this->ExponentB->Location = System::Drawing::Point(526, 167);
			this->ExponentB->Multiline = true;
			this->ExponentB->Name = L"ExponentB";
			this->ExponentB->Size = System::Drawing::Size(28, 23);
			this->ExponentB->TabIndex = 86;
			this->ExponentB->Text = L"1";
			this->ExponentB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::ExponentB_KeyPress);
			this->ExponentB->Leave += gcnew System::EventHandler(this, &MyForm::ExponentB_Leave);
			// 
			// CleaningB
			// 
			this->CleaningB->Location = System::Drawing::Point(394, 194);
			this->CleaningB->Name = L"CleaningB";
			this->CleaningB->Size = System::Drawing::Size(160, 23);
			this->CleaningB->TabIndex = 88;
			this->CleaningB->Text = L"Очистка матрицы B";
			this->CleaningB->UseVisualStyleBackColor = true;
			this->CleaningB->Click += gcnew System::EventHandler(this, &MyForm::CleaningB_Click);
			// 
			// CleaningA
			// 
			this->CleaningA->Location = System::Drawing::Point(12, 194);
			this->CleaningA->Name = L"CleaningA";
			this->CleaningA->Size = System::Drawing::Size(158, 23);
			this->CleaningA->TabIndex = 0;
			this->CleaningA->Text = L"Очистка матрицы А";
			this->CleaningA->UseVisualStyleBackColor = true;
			this->CleaningA->Click += gcnew System::EventHandler(this, &MyForm::CleaningA_Click);
			// 
			// Y1
			// 
			this->Y1->Location = System::Drawing::Point(14, 20);
			this->Y1->Multiline = true;
			this->Y1->Name = L"Y1";
			this->Y1->Size = System::Drawing::Size(34, 22);
			this->Y1->TabIndex = 89;
			this->Y1->Text = L"0";
			this->Y1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Y1_KeyPress_1);
			this->Y1->Leave += gcnew System::EventHandler(this, &MyForm::Y1_Leave);
			// 
			// Y2
			// 
			this->Y2->Location = System::Drawing::Point(14, 57);
			this->Y2->Multiline = true;
			this->Y2->Name = L"Y2";
			this->Y2->Size = System::Drawing::Size(34, 22);
			this->Y2->TabIndex = 90;
			this->Y2->Text = L"0";
			this->Y2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Y2_KeyPress_1);
			this->Y2->Leave += gcnew System::EventHandler(this, &MyForm::Y2_Leave);
			// 
			// Y3
			// 
			this->Y3->Location = System::Drawing::Point(14, 96);
			this->Y3->Multiline = true;
			this->Y3->Name = L"Y3";
			this->Y3->Size = System::Drawing::Size(34, 22);
			this->Y3->TabIndex = 91;
			this->Y3->Text = L"0";
			this->Y3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Y3_KeyPress_1);
			this->Y3->Leave += gcnew System::EventHandler(this, &MyForm::Y3_Leave);
			// 
			// Y4
			// 
			this->Y4->Location = System::Drawing::Point(14, 133);
			this->Y4->Multiline = true;
			this->Y4->Name = L"Y4";
			this->Y4->Size = System::Drawing::Size(34, 22);
			this->Y4->TabIndex = 92;
			this->Y4->Text = L"0";
			this->Y4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Y3_KeyPress_1);
			this->Y4->Leave += gcnew System::EventHandler(this, &MyForm::Y4_Leave);
			// 
			// Y5
			// 
			this->Y5->Location = System::Drawing::Point(14, 171);
			this->Y5->Multiline = true;
			this->Y5->Name = L"Y5";
			this->Y5->Size = System::Drawing::Size(34, 22);
			this->Y5->TabIndex = 93;
			this->Y5->Text = L"0";
			this->Y5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Y5_KeyPress_1);
			this->Y5->Leave += gcnew System::EventHandler(this, &MyForm::Y5_Leave);
			// 
			// Gauss_method
			// 
			this->Gauss_method->Location = System::Drawing::Point(7, 43);
			this->Gauss_method->Name = L"Gauss_method";
			this->Gauss_method->Size = System::Drawing::Size(113, 60);
			this->Gauss_method->TabIndex = 100;
			this->Gauss_method->Text = L"Решить матрицу B с помощью метода Гаусса";
			this->Gauss_method->UseVisualStyleBackColor = true;
			this->Gauss_method->Click += gcnew System::EventHandler(this, &MyForm::Gauss_method_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label89);
			this->groupBox7->Controls->Add(this->label85);
			this->groupBox7->Controls->Add(this->label86);
			this->groupBox7->Controls->Add(this->label87);
			this->groupBox7->Controls->Add(this->label88);
			this->groupBox7->Controls->Add(this->Y5);
			this->groupBox7->Controls->Add(this->Y1);
			this->groupBox7->Controls->Add(this->Y2);
			this->groupBox7->Controls->Add(this->Y3);
			this->groupBox7->Controls->Add(this->Y4);
			this->groupBox7->Location = System::Drawing::Point(774, 14);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(67, 211);
			this->groupBox7->TabIndex = 102;
			this->groupBox7->TabStop = false;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label89->Location = System::Drawing::Point(20, 193);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(12, 10);
			this->label89->TabIndex = 104;
			this->label89->Text = L" 5";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label85->Location = System::Drawing::Point(20, 157);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(12, 10);
			this->label85->TabIndex = 104;
			this->label85->Text = L" 4";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label86->Location = System::Drawing::Point(20, 120);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(12, 10);
			this->label86->TabIndex = 105;
			this->label86->Text = L" 3";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label87->Location = System::Drawing::Point(20, 82);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(12, 10);
			this->label87->TabIndex = 106;
			this->label87->Text = L" 2";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label88->Location = System::Drawing::Point(20, 45);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(14, 10);
			this->label88->TabIndex = 107;
			this->label88->Text = L" 1 ";
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(158, 8);
			this->x1->Multiline = true;
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(117, 22);
			this->x1->TabIndex = 104;
			this->x1->Text = L"0";
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(158, 36);
			this->x2->Multiline = true;
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(117, 22);
			this->x2->TabIndex = 105;
			this->x2->Text = L"0";
			// 
			// x3
			// 
			this->x3->Location = System::Drawing::Point(158, 63);
			this->x3->Multiline = true;
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(117, 22);
			this->x3->TabIndex = 106;
			this->x3->Text = L"0";
			// 
			// x4
			// 
			this->x4->Location = System::Drawing::Point(158, 90);
			this->x4->Multiline = true;
			this->x4->Name = L"x4";
			this->x4->Size = System::Drawing::Size(117, 22);
			this->x4->TabIndex = 107;
			this->x4->Text = L"0";
			// 
			// x5
			// 
			this->x5->Location = System::Drawing::Point(158, 118);
			this->x5->Multiline = true;
			this->x5->Name = L"x5";
			this->x5->Size = System::Drawing::Size(117, 22);
			this->x5->TabIndex = 108;
			this->x5->Text = L"0";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(123, 11);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(35, 13);
			this->label80->TabIndex = 109;
			this->label80->Text = L"Х[1] - ";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(123, 39);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(35, 13);
			this->label81->TabIndex = 110;
			this->label81->Text = L"Х[2] - ";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(123, 67);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(35, 13);
			this->label82->TabIndex = 111;
			this->label82->Text = L"Х[3] - ";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label84);
			this->groupBox5->Controls->Add(this->label83);
			this->groupBox5->Controls->Add(this->Gauss_method);
			this->groupBox5->Controls->Add(this->x1);
			this->groupBox5->Controls->Add(this->label82);
			this->groupBox5->Controls->Add(this->x2);
			this->groupBox5->Controls->Add(this->label81);
			this->groupBox5->Controls->Add(this->x3);
			this->groupBox5->Controls->Add(this->label80);
			this->groupBox5->Controls->Add(this->x4);
			this->groupBox5->Controls->Add(this->x5);
			this->groupBox5->Location = System::Drawing::Point(394, 231);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(281, 150);
			this->groupBox5->TabIndex = 112;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Метод Гаусса";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(123, 123);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(35, 13);
			this->label84->TabIndex = 113;
			this->label84->Text = L"Х[5] - ";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(123, 95);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(35, 13);
			this->label83->TabIndex = 112;
			this->label83->Text = L"Х[4] - ";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->CvB);
			this->groupBox6->Controls->Add(this->CvA);
			this->groupBox6->Controls->Add(this->BvC);
			this->groupBox6->Controls->Add(this->BvA);
			this->groupBox6->Controls->Add(this->AvC);
			this->groupBox6->Controls->Add(this->AvB);
			this->groupBox6->Location = System::Drawing::Point(682, 232);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(126, 112);
			this->groupBox6->TabIndex = 113;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Копировать матрицу";
			// 
			// CvB
			// 
			this->CvB->Location = System::Drawing::Point(74, 79);
			this->CvB->Name = L"CvB";
			this->CvB->Size = System::Drawing::Size(46, 23);
			this->CvB->TabIndex = 114;
			this->CvB->Text = L"С в В";
			this->CvB->UseVisualStyleBackColor = true;
			this->CvB->Click += gcnew System::EventHandler(this, &MyForm::CvB_Click);
			// 
			// CvA
			// 
			this->CvA->Location = System::Drawing::Point(74, 49);
			this->CvA->Name = L"CvA";
			this->CvA->Size = System::Drawing::Size(46, 23);
			this->CvA->TabIndex = 114;
			this->CvA->Text = L"С в А";
			this->CvA->UseVisualStyleBackColor = true;
			this->CvA->Click += gcnew System::EventHandler(this, &MyForm::CvA_Click);
			// 
			// BvC
			// 
			this->BvC->Location = System::Drawing::Point(74, 20);
			this->BvC->Name = L"BvC";
			this->BvC->Size = System::Drawing::Size(46, 23);
			this->BvC->TabIndex = 116;
			this->BvC->Text = L"В в С";
			this->BvC->UseVisualStyleBackColor = true;
			this->BvC->Click += gcnew System::EventHandler(this, &MyForm::BvC_Click);
			// 
			// BvA
			// 
			this->BvA->Location = System::Drawing::Point(11, 79);
			this->BvA->Name = L"BvA";
			this->BvA->Size = System::Drawing::Size(46, 23);
			this->BvA->TabIndex = 115;
			this->BvA->Text = L"В в А";
			this->BvA->UseVisualStyleBackColor = true;
			this->BvA->Click += gcnew System::EventHandler(this, &MyForm::BvA_Click);
			// 
			// AvC
			// 
			this->AvC->Location = System::Drawing::Point(11, 49);
			this->AvC->Name = L"AvC";
			this->AvC->Size = System::Drawing::Size(46, 23);
			this->AvC->TabIndex = 114;
			this->AvC->Text = L"А в С";
			this->AvC->UseVisualStyleBackColor = true;
			this->AvC->Click += gcnew System::EventHandler(this, &MyForm::AvC_Click);
			// 
			// AvB
			// 
			this->AvB->Location = System::Drawing::Point(11, 20);
			this->AvB->Name = L"AvB";
			this->AvB->Size = System::Drawing::Size(46, 23);
			this->AvB->TabIndex = 0;
			this->AvB->Text = L"А в В";
			this->AvB->UseVisualStyleBackColor = true;
			this->AvB->Click += gcnew System::EventHandler(this, &MyForm::AvB_Click);
			// 
			// CleanALL
			// 
			this->CleanALL->Location = System::Drawing::Point(682, 349);
			this->CleanALL->Name = L"CleanALL";
			this->CleanALL->Size = System::Drawing::Size(126, 23);
			this->CleanALL->TabIndex = 114;
			this->CleanALL->Text = L"Очистить ВСЕ";
			this->CleanALL->UseVisualStyleBackColor = true;
			this->CleanALL->Click += gcnew System::EventHandler(this, &MyForm::CleanALL_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->SwapCB);
			this->groupBox8->Controls->Add(this->SwapAB);
			this->groupBox8->Controls->Add(this->SwapAC);
			this->groupBox8->Location = System::Drawing::Point(814, 231);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(73, 150);
			this->groupBox8->TabIndex = 115;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Поменять местами матрицы";
			// 
			// SwapCB
			// 
			this->SwapCB->Location = System::Drawing::Point(15, 104);
			this->SwapCB->Name = L"SwapCB";
			this->SwapCB->Size = System::Drawing::Size(46, 23);
			this->SwapCB->TabIndex = 119;
			this->SwapCB->Text = L"C и В";
			this->SwapCB->UseVisualStyleBackColor = true;
			this->SwapCB->Click += gcnew System::EventHandler(this, &MyForm::SwapCB_Click);
			// 
			// SwapAB
			// 
			this->SwapAB->Location = System::Drawing::Point(15, 46);
			this->SwapAB->Name = L"SwapAB";
			this->SwapAB->Size = System::Drawing::Size(46, 23);
			this->SwapAB->TabIndex = 0;
			this->SwapAB->Text = L"А и В";
			this->SwapAB->UseVisualStyleBackColor = true;
			this->SwapAB->Click += gcnew System::EventHandler(this, &MyForm::SwapAB_Click);
			// 
			// SwapAC
			// 
			this->SwapAC->Location = System::Drawing::Point(15, 75);
			this->SwapAC->Name = L"SwapAC";
			this->SwapAC->Size = System::Drawing::Size(46, 23);
			this->SwapAC->TabIndex = 118;
			this->SwapAC->Text = L"А и С";
			this->SwapAC->UseVisualStyleBackColor = true;
			this->SwapAC->Click += gcnew System::EventHandler(this, &MyForm::SwapAC_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->InverseMatrixB);
			this->groupBox9->Controls->Add(this->InverseMatrixA);
			this->groupBox9->Location = System::Drawing::Point(893, 232);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(74, 68);
			this->groupBox9->TabIndex = 116;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Обратная матрица";
			// 
			// InverseMatrixB
			// 
			this->InverseMatrixB->Location = System::Drawing::Point(40, 35);
			this->InverseMatrixB->Name = L"InverseMatrixB";
			this->InverseMatrixB->Size = System::Drawing::Size(28, 23);
			this->InverseMatrixB->TabIndex = 117;
			this->InverseMatrixB->Text = L"B";
			this->InverseMatrixB->UseVisualStyleBackColor = true;
			this->InverseMatrixB->Click += gcnew System::EventHandler(this, &MyForm::InverseMatrixB_Click);
			// 
			// InverseMatrixA
			// 
			this->InverseMatrixA->Location = System::Drawing::Point(6, 35);
			this->InverseMatrixA->Name = L"InverseMatrixA";
			this->InverseMatrixA->Size = System::Drawing::Size(28, 23);
			this->InverseMatrixA->TabIndex = 0;
			this->InverseMatrixA->Text = L"А";
			this->InverseMatrixA->UseVisualStyleBackColor = true;
			this->InverseMatrixA->Click += gcnew System::EventHandler(this, &MyForm::InverseMatrixA_Click);
			// 
			// helpProvider1
			// 
			this->helpProvider1->HelpNamespace = L"C:\\Users\\Андрей\\Downloads\\Title of this help project.chm";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->button3);
			this->groupBox10->Controls->Add(this->button2);
			this->groupBox10->Controls->Add(this->button1);
			this->groupBox10->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox10->Location = System::Drawing::Point(893, 306);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(129, 75);
			this->groupBox10->TabIndex = 117;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Excel";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(77, 15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(28, 25);
			this->button3->TabIndex = 120;
			this->button3->Text = L"C";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(43, 15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(28, 25);
			this->button2->TabIndex = 119;
			this->button2->Text = L"B";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(9, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(28, 25);
			this->button1->TabIndex = 118;
			this->button1->Text = L"А";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1060, 383);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->CleanALL);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->CleaningB);
			this->Controls->Add(this->CleaningA);
			this->Controls->Add(this->ExponentB);
			this->Controls->Add(this->exponentiationB);
			this->Controls->Add(this->ExponentA);
			this->Controls->Add(this->exponentiationA);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->multiplierB);
			this->Controls->Add(this->MultiplicationB);
			this->Controls->Add(this->multiplierA);
			this->Controls->Add(this->MultiplicationA);
			this->Controls->Add(this->TransponierteB);
			this->Controls->Add(this->TransponierteA);
			this->Controls->Add(this->determinantB);
			this->Controls->Add(this->MainTextBox);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->DeterminantA);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->SIZE_B_M);
			this->Controls->Add(this->SIZE_B_N);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->SIZE_A_M);
			this->Controls->Add(this->SIZE_A_N);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->helpProvider1->SetShowHelp(this, true);
			this->Text = L"2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SIZE_A_N))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SIZE_A_M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SIZE_B_M))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SIZE_B_N))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	string dafsdf = dlinna_uchactha;

	
}
private: System::Void Y1_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	e
	if (e->KeyChar == ',')
	{
		if (this->Y1->Text->Contains(",") && !this->Y1->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->Y1->Text->Contains("-")))
	{
		e->Handled = true;
		Y1->Text = "-" + Y1->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void Y2_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->Y2->Text->Contains(",") && !this->Y2->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->Y2->Text->Contains("-")))
	{
		e->Handled = true;
		Y2->Text = "-" + Y2->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void Y3_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->Y3->Text->Contains(",") && !this->Y3->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->Y3->Text->Contains("-")))
	{
		e->Handled = true;
		Y3->Text = "-" + Y3->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void Y4_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->Y4->Text->Contains(",") && !this->Y4->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->Y4->Text->Contains("-")))
	{
		e->Handled = true;
		Y4->Text = "-" + Y4->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void Y5_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->Y5->Text->Contains(",") && !this->Y5->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->Y5->Text->Contains("-")))
	{
		e->Handled = true;
		Y5->Text = "-" + Y5->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
		 //Проверка на пустоту тексбокса или наличие нерасчетных значений
		 //Проверка на корректность вводимых данных
private: System::Void A11_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A11->Text == "")
	{
		A11->Text = System::Convert::ToString(0);
	}
	if (A11->Text == "-")
	{
		A11->Text = System::Convert::ToString(0);
	}
	if (A11->Text == ",-")
	{
		A11->Text = System::Convert::ToString(0);
	}
	if (A11->Text == "-,")
	{
		A11->Text = System::Convert::ToString(0);
	}
	if (A11->Text == ",")
	{
		A11->Text = System::Convert::ToString(0);
	}
}
private: System::Void A12_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A12->Text == "")
	{
		A12->Text = System::Convert::ToString(0);
	}
	if (A12->Text == "-")
	{
		A12->Text = System::Convert::ToString(0);
	}
	if (A12->Text == ",-")
	{
		A12->Text = System::Convert::ToString(0);
	}
	if (A12->Text == "-,")
	{
		A12->Text = System::Convert::ToString(0);
	}
	if (A12->Text == ",")
	{
		A12->Text = System::Convert::ToString(0);
	}

}
private: System::Void A13_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A13->Text == "")
	{
		A13->Text = System::Convert::ToString(0);
	}
	if (A13->Text == "-")
	{
		A13->Text = System::Convert::ToString(0);
	}
	if (A13->Text == ",-")
	{
		A13->Text = System::Convert::ToString(0);
	}
	if (A13->Text == "-,")
	{
		A13->Text = System::Convert::ToString(0);
	}
	if (A13->Text == ",")
	{
		A13->Text = System::Convert::ToString(0);
	}

}
private: System::Void A14_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A14->Text == "")
	{
		A14->Text = System::Convert::ToString(0);
	}
	if (A14->Text == "-")
	{
		A14->Text = System::Convert::ToString(0);
	}
	if (A14->Text == ",-")
	{
		A14->Text = System::Convert::ToString(0);
	}
	if (A14->Text == "-,")
	{
		A14->Text = System::Convert::ToString(0);
	}
	if (A14->Text == ",")
	{
		A14->Text = System::Convert::ToString(0);
	}

}
private: System::Void A15_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A15->Text == "")
	{
		A15->Text = System::Convert::ToString(0);
	}
	if (A15->Text == "-")
	{
		A15->Text = System::Convert::ToString(0);
	}
	if (A15->Text == ",-")
	{
		A15->Text = System::Convert::ToString(0);
	}
	if (A15->Text == "-,")
	{
		A15->Text = System::Convert::ToString(0);
	}
	if (A15->Text == ",")
	{
		A15->Text = System::Convert::ToString(0);
	}

}
private: System::Void A21_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A21->Text == "")
	{
		A21->Text = System::Convert::ToString(0);
	}
	if (A21->Text == "-")
	{
		A21->Text = System::Convert::ToString(0);
	}
	if (A21->Text == ",-")
	{
		A21->Text = System::Convert::ToString(0);
	}
	if (A21->Text == "-,")
	{
		A21->Text = System::Convert::ToString(0);
	}
	if (A21->Text == ",")
	{
		A21->Text = System::Convert::ToString(0);
	}

}
private: System::Void A22_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A22->Text == "")
	{
		A22->Text = System::Convert::ToString(0);
	}
	if (A22->Text == "-")
	{
		A22->Text = System::Convert::ToString(0);
	}
	if (A22->Text == ",-")
	{
		A22->Text = System::Convert::ToString(0);
	}
	if (A22->Text == "-,")
	{
		A22->Text = System::Convert::ToString(0);
	}
	if (A22->Text == ",")
	{
		A22->Text = System::Convert::ToString(0);
	}

}
private: System::Void A23_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A23->Text == "")
	{
		A23->Text = System::Convert::ToString(0);
	}
	if (A23->Text == "-")
	{
		A23->Text = System::Convert::ToString(0);
	}
	if (A23->Text == ",-")
	{
		A23->Text = System::Convert::ToString(0);
	}
	if (A23->Text == "-,")
	{
		A23->Text = System::Convert::ToString(0);
	}
	if (A23->Text == ",")
	{
		A23->Text = System::Convert::ToString(0);
	}

}
private: System::Void A24_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A24->Text == "")
	{
		A24->Text = System::Convert::ToString(0);
	}
	if (A24->Text == "-")
	{
		A24->Text = System::Convert::ToString(0);
	}
	if (A24->Text == ",-")
	{
		A24->Text = System::Convert::ToString(0);
	}
	if (A24->Text == "-,")
	{
		A24->Text = System::Convert::ToString(0);
	}
	if (A24->Text == ",")
	{
		A24->Text = System::Convert::ToString(0);
	}

}
private: System::Void A25_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A25->Text == "")
	{
		A25->Text = System::Convert::ToString(0);
	}
	if (A25->Text == "-")
	{
		A25->Text = System::Convert::ToString(0);
	}
	if (A25->Text == ",-")
	{
		A25->Text = System::Convert::ToString(0);
	}
	if (A25->Text == "-,")
	{
		A25->Text = System::Convert::ToString(0);
	}
	if (A25->Text == ",")
	{
		A25->Text = System::Convert::ToString(0);
	}

}
private: System::Void A31_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A31->Text == "")
	{
		A31->Text = System::Convert::ToString(0);
	}
	if (A31->Text == "-")
	{
		A31->Text = System::Convert::ToString(0);
	}
	if (A31->Text == ",-")
	{
		A31->Text = System::Convert::ToString(0);
	}
	if (A31->Text == "-,")
	{
		A31->Text = System::Convert::ToString(0);
	}
	if (A31->Text == ",")
	{
		A31->Text = System::Convert::ToString(0);
	}

}
private: System::Void A32_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A32->Text == "")
	{
		A32->Text = System::Convert::ToString(0);
	}
	if (A32->Text == "-")
	{
		A32->Text = System::Convert::ToString(0);
	}
	if (A32->Text == ",-")
	{
		A32->Text = System::Convert::ToString(0);
	}
	if (A32->Text == "-,")
	{
		A32->Text = System::Convert::ToString(0);
	}
	if (A32->Text == ",")
	{
		A32->Text = System::Convert::ToString(0);
	}

}
private: System::Void A33_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A33->Text == "")
	{
		A33->Text = System::Convert::ToString(0);
	}
	if (A33->Text == "-")
	{
		A33->Text = System::Convert::ToString(0);
	}
	if (A33->Text == ",-")
	{
		A33->Text = System::Convert::ToString(0);
	}
	if (A33->Text == "-,")
	{
		A33->Text = System::Convert::ToString(0);
	}
	if (A33->Text == ",")
	{
		A33->Text = System::Convert::ToString(0);
	}

}
private: System::Void A34_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A34->Text == "")
	{
		A34->Text = System::Convert::ToString(0);
	}
	if (A34->Text == "-")
	{
		A34->Text = System::Convert::ToString(0);
	}
	if (A34->Text == ",-")
	{
		A34->Text = System::Convert::ToString(0);
	}
	if (A34->Text == "-,")
	{
		A34->Text = System::Convert::ToString(0);
	}
	if (A34->Text == ",")
	{
		A34->Text = System::Convert::ToString(0);
	}

}
private: System::Void A35_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A35->Text == "")
	{
		A35->Text = System::Convert::ToString(0);
	}
	if (A35->Text == "-")
	{
		A35->Text = System::Convert::ToString(0);
	}
	if (A35->Text == ",-")
	{
		A35->Text = System::Convert::ToString(0);
	}
	if (A35->Text == "-,")
	{
		A35->Text = System::Convert::ToString(0);
	}
	if (A35->Text == ",")
	{
		A35->Text = System::Convert::ToString(0);
	}

}
private: System::Void A41_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A41->Text == "")
	{
		A41->Text = System::Convert::ToString(0);
	}
	if (A41->Text == "-")
	{
		A41->Text = System::Convert::ToString(0);
	}
	if (A41->Text == ",-")
	{
		A41->Text = System::Convert::ToString(0);
	}
	if (A41->Text == "-,")
	{
		A41->Text = System::Convert::ToString(0);
	}
	if (A41->Text == ",")
	{
		A41->Text = System::Convert::ToString(0);
	}

}
private: System::Void A42_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A42->Text == "")
	{
		A42->Text = System::Convert::ToString(0);
	}
	if (A42->Text == "-")
	{
		A42->Text = System::Convert::ToString(0);
	}
	if (A42->Text == ",-")
	{
		A42->Text = System::Convert::ToString(0);
	}
	if (A42->Text == "-,")
	{
		A42->Text = System::Convert::ToString(0);
	}
	if (A42->Text == ",")
	{
		A42->Text = System::Convert::ToString(0);
	}

}
private: System::Void A43_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A43->Text == "")
	{
		A43->Text = System::Convert::ToString(0);
	}
	if (A43->Text == "-")
	{
		A43->Text = System::Convert::ToString(0);
	}
	if (A43->Text == ",-")
	{
		A43->Text = System::Convert::ToString(0);
	}
	if (A43->Text == "-,")
	{
		A43->Text = System::Convert::ToString(0);
	}
	if (A43->Text == ",")
	{
		A43->Text = System::Convert::ToString(0);
	}

}
private: System::Void A44_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A44->Text == "")
	{
		A44->Text = System::Convert::ToString(0);
	}
	if (A44->Text == "-")
	{
		A44->Text = System::Convert::ToString(0);
	}
	if (A44->Text == ",-")
	{
		A44->Text = System::Convert::ToString(0);
	}
	if (A44->Text == "-,")
	{
		A44->Text = System::Convert::ToString(0);
	}
	if (A44->Text == ",")
	{
		A44->Text = System::Convert::ToString(0);
	}

}
private: System::Void A45_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A45->Text == "")
	{
		A45->Text = System::Convert::ToString(0);
	}
	if (A45->Text == "-")
	{
		A45->Text = System::Convert::ToString(0);
	}
	if (A45->Text == ",-")
	{
		A45->Text = System::Convert::ToString(0);
	}
	if (A45->Text == "-,")
	{
		A45->Text = System::Convert::ToString(0);
	}
	if (A45->Text == ",")
	{
		A45->Text = System::Convert::ToString(0);
	}

}
private: System::Void A51_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A51->Text == "")
	{
		A51->Text = System::Convert::ToString(0);
	}
	if (A51->Text == "-")
	{
		A51->Text = System::Convert::ToString(0);
	}
	if (A51->Text == ",-")
	{
		A51->Text = System::Convert::ToString(0);
	}
	if (A51->Text == "-,")
	{
		A51->Text = System::Convert::ToString(0);
	}
	if (A51->Text == ",")
	{
		A51->Text = System::Convert::ToString(0);
	}

}
private: System::Void A52_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A52->Text == "")
	{
		A52->Text = System::Convert::ToString(0);
	}
	if (A52->Text == "-")
	{
		A52->Text = System::Convert::ToString(0);
	}
	if (A52->Text == ",-")
	{
		A52->Text = System::Convert::ToString(0);
	}
	if (A52->Text == "-,")
	{
		A52->Text = System::Convert::ToString(0);
	}
	if (A52->Text == ",")
	{
		A52->Text = System::Convert::ToString(0);
	}

}
private: System::Void A53_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A53->Text == "")
	{
		A53->Text = System::Convert::ToString(0);
	}
	if (A53->Text == "-")
	{
		A53->Text = System::Convert::ToString(0);
	}
	if (A53->Text == ",-")
	{
		A53->Text = System::Convert::ToString(0);
	}
	if (A53->Text == "-,")
	{
		A53->Text = System::Convert::ToString(0);
	}
	if (A53->Text == ",")
	{
		A53->Text = System::Convert::ToString(0);
	}

}
private: System::Void A54_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A54->Text == "")
	{
		A54->Text = System::Convert::ToString(0);
	}
	if (A54->Text == "-")
	{
		A54->Text = System::Convert::ToString(0);
	}
	if (A54->Text == ",-")
	{
		A54->Text = System::Convert::ToString(0);
	}
	if (A54->Text == "-,")
	{
		A54->Text = System::Convert::ToString(0);
	}
	if (A54->Text == ",")
	{
		A54->Text = System::Convert::ToString(0);
	}

}
private: System::Void A55_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (A55->Text == "")
	{
		A55->Text = System::Convert::ToString(0);
	}
	if (A55->Text == "-")
	{
		A55->Text = System::Convert::ToString(0);
	}
	if (A55->Text == ",-")
	{
		A55->Text = System::Convert::ToString(0);
	}
	if (A55->Text == "-,")
	{
		A55->Text = System::Convert::ToString(0);
	}
	if (A55->Text == ",")
	{
		A55->Text = System::Convert::ToString(0);
	}

}
private: System::Void B11_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B11->Text == "")
	{
		B11->Text = System::Convert::ToString(0);
	}
	if (B11->Text == "-")
	{
		B11->Text = System::Convert::ToString(0);
	}
	if (B11->Text == ",-")
	{
		B11->Text = System::Convert::ToString(0);
	}
	if (B11->Text == "-,")
	{
		B11->Text = System::Convert::ToString(0);
	}
	if (B11->Text == ",")
	{
		B11->Text = System::Convert::ToString(0);
	}
}
private: System::Void B12_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B12->Text == "")
	{
		B12->Text = System::Convert::ToString(0);
	}
	if (B12->Text == "-")
	{
		B12->Text = System::Convert::ToString(0);
	}
	if (B12->Text == ",-")
	{
		B12->Text = System::Convert::ToString(0);
	}
	if (B12->Text == "-,")
	{
		B12->Text = System::Convert::ToString(0);
	}
	if (B12->Text == ",")
	{
		B12->Text = System::Convert::ToString(0);
	}
}
private: System::Void B13_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B13->Text == "")
	{
		B13->Text = System::Convert::ToString(0);
	}
	if (B13->Text == "-")
	{
		B13->Text = System::Convert::ToString(0);
	}
	if (B13->Text == ",-")
	{
		B13->Text = System::Convert::ToString(0);
	}
	if (B13->Text == "-,")
	{
		B13->Text = System::Convert::ToString(0);
	}
	if (B13->Text == ",")
	{
		B13->Text = System::Convert::ToString(0);
	}
}
private: System::Void B14_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B14->Text == "")
	{
		B14->Text = System::Convert::ToString(0);
	}
	if (B14->Text == "-")
	{
		B14->Text = System::Convert::ToString(0);
	}
	if (B14->Text == ",-")
	{
		B14->Text = System::Convert::ToString(0);
	}
	if (B14->Text == "-,")
	{
		B14->Text = System::Convert::ToString(0);
	}
	if (B14->Text == ",")
	{
		B14->Text = System::Convert::ToString(0);
	}
}
private: System::Void B15_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B15->Text == "")
	{
		B15->Text = System::Convert::ToString(0);
	}
	if (B15->Text == "-")
	{
		B15->Text = System::Convert::ToString(0);
	}
	if (B15->Text == ",-")
	{
		B15->Text = System::Convert::ToString(0);
	}
	if (B15->Text == "-,")
	{
		B15->Text = System::Convert::ToString(0);
	}
	if (B15->Text == ",")
	{
		B15->Text = System::Convert::ToString(0);
	}
}
private: System::Void B21_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B21->Text == "")
	{
		B21->Text = System::Convert::ToString(0);
	}
	if (B21->Text == "-")
	{
		B21->Text = System::Convert::ToString(0);
	}
	if (B21->Text == ",-")
	{
		B21->Text = System::Convert::ToString(0);
	}
	if (B21->Text == "-,")
	{
		B21->Text = System::Convert::ToString(0);
	}
	if (B21->Text == ",")
	{
		B21->Text = System::Convert::ToString(0);
	}
}
private: System::Void B22_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B22->Text == "")
	{
		B22->Text = System::Convert::ToString(0);
	}
	if (B22->Text == "-")
	{
		B22->Text = System::Convert::ToString(0);
	}
	if (B22->Text == ",-")
	{
		B22->Text = System::Convert::ToString(0);
	}
	if (B22->Text == "-,")
	{
		B22->Text = System::Convert::ToString(0);
	}
	if (B22->Text == ",")
	{
		B22->Text = System::Convert::ToString(0);
	}
}
private: System::Void B23_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B23->Text == "")
	{
		B23->Text = System::Convert::ToString(0);
	}
	if (B23->Text == "-")
	{
		B23->Text = System::Convert::ToString(0);
	}
	if (B23->Text == ",-")
	{
		B23->Text = System::Convert::ToString(0);
	}
	if (B23->Text == "-,")
	{
		B23->Text = System::Convert::ToString(0);
	}
	if (B23->Text == ",")
	{
		B23->Text = System::Convert::ToString(0);
	}
}
private: System::Void B24_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B24->Text == "")
	{
		B24->Text = System::Convert::ToString(0);
	}
	if (B24->Text == "-")
	{
		B24->Text = System::Convert::ToString(0);
	}
	if (B24->Text == ",-")
	{
		B24->Text = System::Convert::ToString(0);
	}
	if (B24->Text == "-,")
	{
		B24->Text = System::Convert::ToString(0);
	}
	if (B24->Text == ",")
	{
		B24->Text = System::Convert::ToString(0);
	}
}
private: System::Void B25_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B25->Text == "")
	{
		B25->Text = System::Convert::ToString(0);
	}
	if (B25->Text == "-")
	{
		B25->Text = System::Convert::ToString(0);
	}
	if (B25->Text == ",-")
	{
		B25->Text = System::Convert::ToString(0);
	}
	if (B25->Text == "-,")
	{
		B25->Text = System::Convert::ToString(0);
	}
	if (B25->Text == ",")
	{
		B25->Text = System::Convert::ToString(0);
	}
}
private: System::Void B31_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B31->Text == "")
	{
		B31->Text = System::Convert::ToString(0);
	}
	if (B31->Text == "-")
	{
		B31->Text = System::Convert::ToString(0);
	}
	if (B31->Text == ",-")
	{
		B31->Text = System::Convert::ToString(0);
	}
	if (B31->Text == "-,")
	{
		B31->Text = System::Convert::ToString(0);
	}
	if (B31->Text == ",")
	{
		B31->Text = System::Convert::ToString(0);
	}
}
private: System::Void B32_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B32->Text == "")
	{
		B32->Text = System::Convert::ToString(0);
	}
	if (B32->Text == "-")
	{
		B32->Text = System::Convert::ToString(0);
	}
	if (B32->Text == ",-")
	{
		B32->Text = System::Convert::ToString(0);
	}
	if (B32->Text == "-,")
	{
		B32->Text = System::Convert::ToString(0);
	}
	if (B32->Text == ",")
	{
		B32->Text = System::Convert::ToString(0);
	}
}
private: System::Void B33_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B33->Text == "")
	{
		B33->Text = System::Convert::ToString(0);
	}
	if (B33->Text == "-")
	{
		B33->Text = System::Convert::ToString(0);
	}
	if (B33->Text == ",-")
	{
		B33->Text = System::Convert::ToString(0);
	}
	if (B33->Text == "-,")
	{
		B33->Text = System::Convert::ToString(0);
	}
	if (B33->Text == ",")
	{
		B33->Text = System::Convert::ToString(0);
	}
}
private: System::Void B34_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B34->Text == "")
	{
		B34->Text = System::Convert::ToString(0);
	}
	if (B34->Text == "-")
	{
		B34->Text = System::Convert::ToString(0);
	}
	if (B34->Text == ",-")
	{
		B34->Text = System::Convert::ToString(0);
	}
	if (B34->Text == "-,")
	{
		B34->Text = System::Convert::ToString(0);
	}
	if (B34->Text == ",")
	{
		B34->Text = System::Convert::ToString(0);
	}
}
private: System::Void B35_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B35->Text == "")
	{
		B35->Text = System::Convert::ToString(0);
	}
	if (B35->Text == "-")
	{
		B35->Text = System::Convert::ToString(0);
	}
	if (B35->Text == ",-")
	{
		B35->Text = System::Convert::ToString(0);
	}
	if (B35->Text == "-,")
	{
		B35->Text = System::Convert::ToString(0);
	}
	if (B35->Text == ",")
	{
		B35->Text = System::Convert::ToString(0);
	}
}
private: System::Void B41_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B41->Text == "")
	{
		B41->Text = System::Convert::ToString(0);
	}
	if (B41->Text == "-")
	{
		B41->Text = System::Convert::ToString(0);
	}
	if (B41->Text == ",-")
	{
		B41->Text = System::Convert::ToString(0);
	}
	if (B41->Text == "-,")
	{
		B41->Text = System::Convert::ToString(0);
	}
	if (B41->Text == ",")
	{
		B41->Text = System::Convert::ToString(0);
	}
}
private: System::Void B42_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B42->Text == "")
	{
		B42->Text = System::Convert::ToString(0);
	}
	if (B42->Text == "-")
	{
		B42->Text = System::Convert::ToString(0);
	}
	if (B42->Text == ",-")
	{
		B42->Text = System::Convert::ToString(0);
	}
	if (B42->Text == "-,")
	{
		B42->Text = System::Convert::ToString(0);
	}
	if (B42->Text == ",")
	{
		B42->Text = System::Convert::ToString(0);
	}
}
private: System::Void B43_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B43->Text == "")
	{
		B43->Text = System::Convert::ToString(0);
	}
	if (B43->Text == "-")
	{
		B43->Text = System::Convert::ToString(0);
	}
	if (B43->Text == ",-")
	{
		B43->Text = System::Convert::ToString(0);
	}
	if (B43->Text == "-,")
	{
		B43->Text = System::Convert::ToString(0);
	}
	if (B43->Text == ",")
	{
		B43->Text = System::Convert::ToString(0);
	}
}
private: System::Void B44_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B44->Text == "")
	{
		B44->Text = System::Convert::ToString(0);
	}
	if (B44->Text == "-")
	{
		B44->Text = System::Convert::ToString(0);
	}
	if (B44->Text == ",-")
	{
		B44->Text = System::Convert::ToString(0);
	}
	if (B44->Text == "-,")
	{
		B44->Text = System::Convert::ToString(0);
	}
	if (B44->Text == ",")
	{
		B44->Text = System::Convert::ToString(0);
	}
}
private: System::Void B45_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B45->Text == "")
	{
		B45->Text = System::Convert::ToString(0);
	}
	if (B45->Text == "-")
	{
		B45->Text = System::Convert::ToString(0);
	}
	if (B45->Text == ",-")
	{
		B45->Text = System::Convert::ToString(0);
	}
	if (B45->Text == "-,")
	{
		B45->Text = System::Convert::ToString(0);
	}
	if (B45->Text == ",")
	{
		B45->Text = System::Convert::ToString(0);
	}
}
private: System::Void B51_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B51->Text == "")
	{
		B51->Text = System::Convert::ToString(0);
	}
	if (B51->Text == "-")
	{
		B51->Text = System::Convert::ToString(0);
	}
	if (B51->Text == ",-")
	{
		B51->Text = System::Convert::ToString(0);
	}
	if (B51->Text == "-,")
	{
		B51->Text = System::Convert::ToString(0);
	}
	if (B51->Text == ",")
	{
		B51->Text = System::Convert::ToString(0);
	}
}
private: System::Void B52_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B52->Text == "")
	{
		B52->Text = System::Convert::ToString(0);
	}
	if (B52->Text == "-")
	{
		B52->Text = System::Convert::ToString(0);
	}
	if (B52->Text == ",-")
	{
		B52->Text = System::Convert::ToString(0);
	}
	if (B52->Text == "-,")
	{
		B52->Text = System::Convert::ToString(0);
	}
	if (B52->Text == ",")
	{
		B52->Text = System::Convert::ToString(0);
	}
}
private: System::Void B53_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B53->Text == "")
	{
		B53->Text = System::Convert::ToString(0);
	}
	if (B53->Text == "-")
	{
		B53->Text = System::Convert::ToString(0);
	}
	if (B53->Text == ",-")
	{
		B53->Text = System::Convert::ToString(0);
	}
	if (B53->Text == "-,")
	{
		B53->Text = System::Convert::ToString(0);
	}
	if (B53->Text == ",")
	{
		B53->Text = System::Convert::ToString(0);
	}
}
private: System::Void B54_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B54->Text == "")
	{
		B54->Text = System::Convert::ToString(0);
	}
	if (B54->Text == "-")
	{
		B54->Text = System::Convert::ToString(0);
	}
	if (B54->Text == ",-")
	{
		B54->Text = System::Convert::ToString(0);
	}
	if (B54->Text == "-,")
	{
		B54->Text = System::Convert::ToString(0);
	}
	if (B54->Text == ",")
	{
		B54->Text = System::Convert::ToString(0);
	}
}
private: System::Void B55_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (B55->Text == "")
	{
		B55->Text = System::Convert::ToString(0);
	}
	if (B55->Text == "-")
	{
		B55->Text = System::Convert::ToString(0);
	}
	if (B55->Text == ",-")
	{
		B55->Text = System::Convert::ToString(0);
	}
	if (B55->Text == "-,")
	{
		B55->Text = System::Convert::ToString(0);
	}
	if (B55->Text == ",")
	{
		B55->Text = System::Convert::ToString(0);
	}
}
private: System::Void Y1_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (Y1->Text == "")
	{
		Y1->Text = System::Convert::ToString(0);
	}
	if (Y1->Text == "-")
	{
		Y1->Text = System::Convert::ToString(0);
	}
	if (Y1->Text == ",-")
	{
		Y1->Text = System::Convert::ToString(0);
	}
	if (Y1->Text == "-,")
	{
		Y1->Text = System::Convert::ToString(0);
	}
	if (Y1->Text == ",")
	{
		Y1->Text = System::Convert::ToString(0);
	}
}
private: System::Void Y2_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (Y2->Text == "")
	{
		Y2->Text = System::Convert::ToString(0);
	}
	if (Y2->Text == "-")
	{
		Y2->Text = System::Convert::ToString(0);
	}
	if (Y2->Text == ",-")
	{
		Y2->Text = System::Convert::ToString(0);
	}
	if (Y2->Text == "-,")
	{
		Y2->Text = System::Convert::ToString(0);
	}
	if (Y2->Text == ",")
	{
		Y2->Text = System::Convert::ToString(0);
	}
}
private: System::Void Y3_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (Y3->Text == "")
	{
		Y3->Text = System::Convert::ToString(0);
	}
	if (Y3->Text == "-")
	{
		Y3->Text = System::Convert::ToString(0);
	}
	if (Y3->Text == ",-")
	{
		Y3->Text = System::Convert::ToString(0);
	}
	if (Y3->Text == "-,")
	{
		Y3->Text = System::Convert::ToString(0);
	}
	if (Y3->Text == ",")
	{
		Y3->Text = System::Convert::ToString(0);
	}
}
private: System::Void Y4_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (Y4->Text == "")
	{
		Y4->Text = System::Convert::ToString(0);
	}
	if (Y4->Text == "-")
	{
		Y4->Text = System::Convert::ToString(0);
	}
	if (Y4->Text == ",-")
	{
		Y4->Text = System::Convert::ToString(0);
	}
	if (Y4->Text == "-,")
	{
		Y4->Text = System::Convert::ToString(0);
	}
	if (Y4->Text == ",")
	{
		Y4->Text = System::Convert::ToString(0);
	}
}
private: System::Void Y5_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (Y5->Text == "")
	{
		Y5->Text = System::Convert::ToString(0);
	}
	if (Y5->Text == "-")
	{
		Y5->Text = System::Convert::ToString(0);
	}
	if (Y5->Text == ",-")
	{
		Y5->Text = System::Convert::ToString(0);
	}
	if (Y5->Text == "-,")
	{
		Y5->Text = System::Convert::ToString(0);
	}
	if (Y5->Text == ",")
	{
		Y5->Text = System::Convert::ToString(0);
	}
}
private: System::Void multiplierA_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (multiplierA->Text == "")
	{
		multiplierA->Text = System::Convert::ToString(1);
	}
	if (multiplierA->Text == "-")
	{
		multiplierA->Text = System::Convert::ToString(1);
	}
	if (multiplierA->Text == ",-")
	{
		multiplierA->Text = System::Convert::ToString(1);
	}
	if (multiplierA->Text == "-,")
	{
		multiplierA->Text = System::Convert::ToString(1);
	}
	if (multiplierA->Text == ",")
	{
		multiplierA->Text = System::Convert::ToString(1);
	}
}
private: System::Void ExponentA_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (ExponentA->Text == "")
	{
		ExponentA->Text = System::Convert::ToString(1);
	}
}
private: System::Void multiplierB_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (multiplierB->Text == "")
	{
		multiplierB->Text = System::Convert::ToString(1);
	}
	if (multiplierB->Text == "-")
	{
		multiplierB->Text = System::Convert::ToString(1);
	}
	if (multiplierB->Text == ",-")
	{
		multiplierB->Text = System::Convert::ToString(1);
	}
	if (multiplierB->Text == "-,")
	{
		multiplierB->Text = System::Convert::ToString(1);
	}
	if (multiplierB->Text == ",")
	{
		multiplierB->Text = System::Convert::ToString(1);
	}
}
private: System::Void ExponentB_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
}
private: System::Void ExponentB_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (ExponentB->Text == "")
	{
		ExponentB->Text = System::Convert::ToString(1);
	}
}




private: System::Void DeterminantA_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Расчет определителя матрицы А

	Double _m= System::Convert::ToDouble(SIZE_A_M->Text);
	Double _n = System::Convert::ToDouble(SIZE_A_N->Text);
	int m = static_cast< int >(_m);
	int n = static_cast< int >(_n);
	////////////////////////////////////////////////////////
	if (m == n)
	{
		
		double **A = CreateArray(5);
		
		
		//Это просто пиздец, но работает))
		 *(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
		 *(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
		 *(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
		 *(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
		 *(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
		 *(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
		 *(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
		 *(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
		 *(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
		 *(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
		 *(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
		 *(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
		 *(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
		 *(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
		 *(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
		 *(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
		 *(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
		 *(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
		 *(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
		 *(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
		 *(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
		 *(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
		 *(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
		 *(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
		 *(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
		 MainTextBox->Text = System::Convert::ToString("Определитель матрицы А равен - "+Determinant(A, n));
		 DeleteArray(A, 5);
	}
	if(m!=n)
	{
		MainTextBox->Text = System::Convert::ToString("Найти определител для НЕ квадратной матрицы не возможно");
	}

}
private: System::Void determinantB_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//Расчет определителя матрицы А

	Double _m = System::Convert::ToDouble(SIZE_B_M->Text);
	Double _n = System::Convert::ToDouble(SIZE_B_N->Text);
	int m = static_cast< int >(_m);
	int n = static_cast< int >(_n);
	if (m == n)
	{

		double **B = CreateArray(5);
		

		//Это просто пиздец, но работает))
		*(*(B + 0) + 0) = System::Convert::ToDouble(B11->Text);
		*(*(B + 0) + 1) = System::Convert::ToDouble(B12->Text);
		*(*(B + 0) + 2) = System::Convert::ToDouble(B13->Text);
		*(*(B + 0) + 3) = System::Convert::ToDouble(B14->Text);
		*(*(B + 0) + 4) = System::Convert::ToDouble(B15->Text);
		*(*(B + 1) + 0) = System::Convert::ToDouble(B21->Text);
		*(*(B + 1) + 1) = System::Convert::ToDouble(B22->Text);
		*(*(B + 1) + 2) = System::Convert::ToDouble(B23->Text);
		*(*(B + 1) + 3) = System::Convert::ToDouble(B24->Text);
		*(*(B + 1) + 4) = System::Convert::ToDouble(B25->Text);
		*(*(B + 2) + 0) = System::Convert::ToDouble(B31->Text);
		*(*(B + 2) + 1) = System::Convert::ToDouble(B32->Text);
		*(*(B + 2) + 2) = System::Convert::ToDouble(B33->Text);
		*(*(B + 2) + 3) = System::Convert::ToDouble(B34->Text);
		*(*(B + 2) + 4) = System::Convert::ToDouble(B35->Text);
		*(*(B + 3) + 0) = System::Convert::ToDouble(B41->Text);
		*(*(B + 3) + 1) = System::Convert::ToDouble(B42->Text);
		*(*(B + 3) + 2) = System::Convert::ToDouble(B43->Text);
		*(*(B + 3) + 3) = System::Convert::ToDouble(B44->Text);
		*(*(B + 3) + 4) = System::Convert::ToDouble(B45->Text);
		*(*(B + 4) + 0) = System::Convert::ToDouble(B51->Text);
		*(*(B + 4) + 1) = System::Convert::ToDouble(B52->Text);
		*(*(B + 4) + 2) = System::Convert::ToDouble(B53->Text);
		*(*(B + 4) + 3) = System::Convert::ToDouble(B54->Text);
		*(*(B + 4) + 4) = System::Convert::ToDouble(B55->Text);
		MainTextBox->Text = System::Convert::ToString("Определитель матрицы B равен - " + Determinant(B, n));
		DeleteArray(B, 5);
	}
	if (m != n)
	{
		MainTextBox->Text = System::Convert::ToString("Найти определител для НЕ квадратной матрицы не возможно");
	}

}
private: System::Void TransponierteA_Click(System::Object^  sender, System::EventArgs^  e)
{
	Double _m = System::Convert::ToDouble(SIZE_A_M->Text);
	Double _n = System::Convert::ToDouble(SIZE_A_N->Text);
	int m = static_cast<int>(_m);
	int n = static_cast<int>(_n);
	double **A = CreateArray(5);
	//Это просто пиздец, но работает))
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	//////////////////////////////////////////////////////////////////

	double **B = CreateArray(5);
	
	///////////////////////
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[j][i]=A[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j]=B[i][j];
		}
	}
	String^ testr = "ewrewr";
	A11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	A12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	A13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	A14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	A15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	A21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	A22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	A23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	A24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	A25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	A31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	A32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	A33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	A34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	A35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	A41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	A42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	A43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	A44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	A45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	A51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	A52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	A53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	A54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	A55->Text = System::Convert::ToString(*(*(A + 4) + 4));

	DeleteArray(A, 5);
	DeleteArray(B, 5);
	SIZE_A_M->Text= System::Convert::ToString(n);
	SIZE_A_N->Text = System::Convert::ToString(m);
	MainTextBox->Text = System::Convert::ToString("Матрица A была успешно транспонированная ");

}
private: System::Void TransponierteB_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Double _m = System::Convert::ToDouble(SIZE_B_M->Text);
	Double _n = System::Convert::ToDouble(SIZE_B_N->Text);
	int m = static_cast<int>(_m);
	int n = static_cast<int>(_n);


	double **B = CreateArray(5);
	//Это просто пиздец, но работает))
	*(*(B + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(B + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(B + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(B + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(B + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(B + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(B + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(B + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(B + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(B + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(B + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(B + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(B + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(B + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(B + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(B + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(B + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(B + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(B + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(B + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(B + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(B + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(B + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(B + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(B + 4) + 4) = System::Convert::ToDouble(B55->Text);
	//////////////////////////////////////////////////////////////////
	double **A = CreateArray(5);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[j][i] = B[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			B[i][j] = A[i][j];
		}
	}

	B11->Text = System::Convert::ToString(*(*(B + 0) + 0));
	B12->Text = System::Convert::ToString(*(*(B + 0) + 1));
	B13->Text = System::Convert::ToString(*(*(B + 0) + 2));
	B14->Text = System::Convert::ToString(*(*(B + 0) + 3));
	B15->Text = System::Convert::ToString(*(*(B + 0) + 4));
	B21->Text = System::Convert::ToString(*(*(B + 1) + 0));
	B22->Text = System::Convert::ToString(*(*(B + 1) + 1));
	B23->Text = System::Convert::ToString(*(*(B + 1) + 2));
	B24->Text = System::Convert::ToString(*(*(B + 1) + 3));
	B25->Text = System::Convert::ToString(*(*(B + 1) + 4));
	B31->Text = System::Convert::ToString(*(*(B + 2) + 0));
	B32->Text = System::Convert::ToString(*(*(B + 2) + 1));
	B33->Text = System::Convert::ToString(*(*(B + 2) + 2));
	B34->Text = System::Convert::ToString(*(*(B + 2) + 3));
	B35->Text = System::Convert::ToString(*(*(B + 2) + 4));
	B41->Text = System::Convert::ToString(*(*(B + 3) + 0));
	B42->Text = System::Convert::ToString(*(*(B + 3) + 1));
	B43->Text = System::Convert::ToString(*(*(B + 3) + 2));
	B44->Text = System::Convert::ToString(*(*(B + 3) + 3));
	B45->Text = System::Convert::ToString(*(*(B + 3) + 4));
	B51->Text = System::Convert::ToString(*(*(B + 4) + 0));
	B52->Text = System::Convert::ToString(*(*(B + 4) + 1));
	B53->Text = System::Convert::ToString(*(*(B + 4) + 2));
	B54->Text = System::Convert::ToString(*(*(B + 4) + 3));
	B55->Text = System::Convert::ToString(*(*(B + 4) + 4));
	DeleteArray(B, 5);
	DeleteArray(A, 5);
	SIZE_B_M->Text = System::Convert::ToString(n);
	SIZE_B_N->Text = System::Convert::ToString(m);
	MainTextBox->Text = System::Convert::ToString("Матрица В была успешно транспонированная ");

}
private: System::Void MultiplicationA_Click(System::Object^  sender, System::EventArgs^  e)
{
	double x = System::Convert::ToDouble(multiplierA->Text);
	double m = System::Convert::ToDouble(SIZE_A_M->Text);
	double n = System::Convert::ToDouble(SIZE_A_N->Text);

	double **A = CreateArray(5);
	//Это просто пиздец, но работает))
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	/////////////////////////////////////////////////////////
	multiplication_by_a_number(A, m, n, x);
	////////////////////////////////////////////////////////
	A11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	A12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	A13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	A14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	A15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	A21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	A22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	A23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	A24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	A25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	A31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	A32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	A33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	A34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	A35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	A41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	A42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	A43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	A44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	A45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	A51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	A52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	A53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	A54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	A55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	MainTextBox->Text = System::Convert::ToString("Матрица A была успешно умноженна на "+ x);
	DeleteArray(A, 5);
	
}
private: System::Void A11_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{

	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A11->Text->Contains(",") && !this->A11->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A11->Text->Contains("-")))
	{
		e->Handled = true;
		A11->Text = "-" + A11->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A12_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{

	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A12->Text->Contains(",") && !this->A12->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A12->Text->Contains("-")))
	{
		e->Handled = true;
		A12->Text = "-" + A12->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
	
}
private: System::Void A13_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A13->Text->Contains(",") && !this->A13->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A13->Text->Contains("-")))
	{
		e->Handled = true;
		A13->Text = "-" + A13->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A14_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A14->Text->Contains(",") && !this->A14->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A14->Text->Contains("-")))
	{
		e->Handled = true;
		A14->Text = "-" + A14->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A15_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A15->Text->Contains(",") && !this->A15->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A15->Text->Contains("-")))
	{
		e->Handled = true;
		A15->Text = "-" + A15->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A21_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A21->Text->Contains(",") && !this->A21->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A21->Text->Contains("-")))
	{
		e->Handled = true;
		A21->Text = "-" + A21->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A22_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)	 
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A22->Text->Contains(",") && !this->A22->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A22->Text->Contains("-")))
	{
		e->Handled = true;
		A22->Text = "-" + A22->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}		
private: System::Void A23_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
 {
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A23->Text->Contains(",") && !this->A23->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A23->Text->Contains("-")))
	{
		e->Handled = true;
		A23->Text = "-" + A23->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
 }	 
private: System::Void A24_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
 {
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A24->Text->Contains(",") && !this->A24->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A24->Text->Contains("-")))
	{
		e->Handled = true;
		A24->Text = "-" + A24->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
 }				  
private: System::Void A25_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
					 
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A25->Text->Contains(",") && !this->A25->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A25->Text->Contains("-")))
	{
		e->Handled = true;
		A25->Text = "-" + A25->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
				
}
private: System::Void A31_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой(проебал отрицательеые числа,СУКА!!!!!)
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A31->Text->Contains(",") && !this->A31->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A31->Text->Contains("-")))
	{
		e->Handled = true;
		A31->Text = "-" + A31->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A32_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A32->Text->Contains(",") && !this->A32->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A32->Text->Contains("-")))
	{
		e->Handled = true;
		A32->Text = "-" + A32->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A33_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A33->Text->Contains(",") && !this->A33->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A33->Text->Contains("-")))
	{
		e->Handled = true;
		A33->Text = "-" + A33->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}	 
private: System::Void A34_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A34->Text->Contains(",") && !this->A34->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A34->Text->Contains("-")))
	{
		e->Handled = true;
		A34->Text = "-" + A34->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A35_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A35->Text->Contains(",") && !this->A35->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A35->Text->Contains("-")))
	{
		e->Handled = true;
		A35->Text = "-" + A35->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A41_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A41->Text->Contains(",") && !this->A41->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A41->Text->Contains("-")))
	{
		e->Handled = true;
		A41->Text = "-" + A41->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A42_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A42->Text->Contains(",") && !this->A42->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A42->Text->Contains("-")))
	{
		e->Handled = true;
		A42->Text = "-" + A42->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A43_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A43->Text->Contains(",") && !this->A43->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A43->Text->Contains("-")))
	{
		e->Handled = true;
		A43->Text = "-" + A43->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A44_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A44->Text->Contains(",") && !this->A44->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A44->Text->Contains("-")))
	{
		e->Handled = true;
		A44->Text = "-" + A44->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A45_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A45->Text->Contains(",") && !this->A45->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A45->Text->Contains("-")))
	{
		e->Handled = true;
		A45->Text = "-" + A45->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A51_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A51->Text->Contains(",") && !this->A51->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A51->Text->Contains("-")))
	{
		e->Handled = true;
		A51->Text = "-" + A51->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A52_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A52->Text->Contains(",") && !this->A52->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A52->Text->Contains("-")))
	{
		e->Handled = true;
		A52->Text = "-" + A52->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A53_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A53->Text->Contains(",") && !this->A53->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A53->Text->Contains("-")))
	{
		e->Handled = true;
		A53->Text = "-" + A53->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A54_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A54->Text->Contains(",") && !this->A54->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A54->Text->Contains("-")))
	{
		e->Handled = true;
		A54->Text = "-" + A54->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void A55_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->A55->Text->Contains(",") && !this->A55->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->A55->Text->Contains("-")))
	{
		e->Handled = true;
		A55->Text = "-" + A55->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B11_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B11->Text->Contains(",") && !this->B11->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B11->Text->Contains("-")))
	{
		e->Handled = true;
		B11->Text = "-" + B11->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B12_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B12->Text->Contains(",") && !this->B12->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B21->Text->Contains("-")))
	{
		e->Handled = true;
		B12->Text = "-" + B12->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B13_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B13->Text->Contains(",") && !this->B13->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B13->Text->Contains("-")))
	{
		e->Handled = true;
		B13->Text = "-" + B13->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B14_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B14->Text->Contains(",") && !this->B14->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B14->Text->Contains("-")))
	{
		e->Handled = true;
		B14->Text = "-" + B14->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B15_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B15->Text->Contains(",") && !this->B15->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B15->Text->Contains("-")))
	{
		e->Handled = true;
		B15->Text = "-" + B15->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
	
}
private: System::Void B21_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B21->Text->Contains(",") && !this->B21->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B21->Text->Contains("-")))
	{
		e->Handled = true;
		B21->Text = "-" + B21->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B22_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B22->Text->Contains(",") && !this->B22->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B22->Text->Contains("-")))
	{
		e->Handled = true;
		B22->Text = "-" + B22->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B23_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B23->Text->Contains(",") && !this->B23->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B23->Text->Contains("-")))
	{
		e->Handled = true;
		B23->Text = "-" + B23->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B24_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B24->Text->Contains(",") && !this->B24->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B24->Text->Contains("-")))
	{
		e->Handled = true;
		B24->Text = "-" + B24->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B25_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B25->Text->Contains(",") && !this->B25->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B25->Text->Contains("-")))
	{
		e->Handled = true;
		B25->Text = "-" + B25->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B31_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B31->Text->Contains(",") && !this->B31->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B31->Text->Contains("-")))
	{
		e->Handled = true;
		B31->Text = "-" + B31->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B32_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B32->Text->Contains(",") && !this->B32->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B32->Text->Contains("-")))
	{
		e->Handled = true;
		B32->Text = "-" + B32->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B33_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B33->Text->Contains(",") && !this->B33->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B33->Text->Contains("-")))
	{
		e->Handled = true;
		B33->Text = "-" + B33->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B34_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B34->Text->Contains(",") && !this->B34->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B34->Text->Contains("-")))
	{
		e->Handled = true;
		B34->Text = "-" + B34->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B35_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B35->Text->Contains(",") && !this->B35->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B35->Text->Contains("-")))
	{
		e->Handled = true;
		B35->Text = "-" + B35->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B41_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B41->Text->Contains(",") && !this->B41->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B41->Text->Contains("-")))
	{
		e->Handled = true;
		B41->Text = "-" + B41->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B42_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B42->Text->Contains(",") && !this->B42->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B42->Text->Contains("-")))
	{
		e->Handled = true;
		B42->Text = "-" + B42->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B43_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B43->Text->Contains(",") && !this->B43->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B43->Text->Contains("-")))
	{
		e->Handled = true;
		B43->Text = "-" + B43->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B44_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B44->Text->Contains(",") && !this->B44->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B44->Text->Contains("-")))
	{
		e->Handled = true;
		B44->Text = "-" + B44->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B45_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B45->Text->Contains(",") && !this->B45->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B45->Text->Contains("-")))
	{
		e->Handled = true;
		B45->Text = "-" + B45->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B51_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B51->Text->Contains(",") && !this->B51->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B51->Text->Contains("-")))
	{
		e->Handled = true;
		B51->Text = "-" + B51->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B52_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B52->Text->Contains(",") && !this->B52->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B52->Text->Contains("-")))
	{
		e->Handled = true;
		B52->Text = "-" + B52->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B53_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B53->Text->Contains(",") && !this->B53->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B53->Text->Contains("-")))
	{
		e->Handled = true;
		B53->Text = "-" + B53->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B54_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B54->Text->Contains(",") && !this->B54->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B54->Text->Contains("-")))
	{
		e->Handled = true;
		B54->Text = "-" + B54->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void B55_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->B55->Text->Contains(",") && !this->B55->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->B55->Text->Contains("-")))
	{
		e->Handled = true;
		B55->Text = "-" + B55->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}


private: System::Void MultiplicationB_Click(System::Object^  sender, System::EventArgs^  e)
{
	double x = System::Convert::ToDouble(multiplierB->Text);
	double m = System::Convert::ToDouble(SIZE_B_M->Text);
	double n = System::Convert::ToDouble(SIZE_B_N->Text);

	double **A = CreateArray(5);
	

	//Это просто пиздец, но работает))
	*(*(A + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(B55->Text);
	/////////////////////////////////////////////////////////
	multiplication_by_a_number(A, m, n, x);
	////////////////////////////////////////////////////////
	B11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	B12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	B13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	B14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	B15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	B21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	B22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	B23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	B24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	B25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	B31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	B32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	B33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	B34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	B35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	B41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	B42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	B43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	B44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	B45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	B51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	B52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	B53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	B54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	B55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("Матрица А была успешно умножена на " + x);
}
private: System::Void multiplierB_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->multiplierB->Text->Contains(",") && !this->multiplierB->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->multiplierB->Text->Contains("-")))
	{
		e->Handled = true;
		multiplierB->Text = "-" + multiplierB->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}

private: System::Void exponentiationA_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int N= System::Convert::ToDouble(SIZE_A_N->Text);
	int M = System::Convert::ToDouble(SIZE_A_M->Text);
	if (M!=N)
	{
		MainTextBox->Text= System::Convert::ToString("нельзя возвести НЕ квадратную матрицу  в степень");
		return;
	}
	double **A, **res;
	A = CreateArray(5);
	res = CreateArray(5);
	double temp = System::Convert::ToDouble(ExponentA->Text);
	int p = static_cast< int >(temp);
	
	////////////////////////////////////////////////////////////////
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	/////////////////////////////////////////////////////////////////////
	if (p==0)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				*(*(A + i) + j) = 0;
			}
		}

	

	
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				*(*(A + i) + j) = 1;

			}
		}
		A11->Text = System::Convert::ToString(*(*(A + 0) + 0));
		A12->Text = System::Convert::ToString(*(*(A + 0) + 1));
		A13->Text = System::Convert::ToString(*(*(A + 0) + 2));
		A14->Text = System::Convert::ToString(*(*(A + 0) + 3));
		A15->Text = System::Convert::ToString(*(*(A + 0) + 4));
		A21->Text = System::Convert::ToString(*(*(A + 1) + 0));
		A22->Text = System::Convert::ToString(*(*(A + 1) + 1));
		A23->Text = System::Convert::ToString(*(*(A + 1) + 2));
		A24->Text = System::Convert::ToString(*(*(A + 1) + 3));
		A25->Text = System::Convert::ToString(*(*(A + 1) + 4));
		A31->Text = System::Convert::ToString(*(*(A + 2) + 0));
		A32->Text = System::Convert::ToString(*(*(A + 2) + 1));
		A33->Text = System::Convert::ToString(*(*(A + 2) + 2));
		A34->Text = System::Convert::ToString(*(*(A + 2) + 3));
		A35->Text = System::Convert::ToString(*(*(A + 2) + 4));
		A41->Text = System::Convert::ToString(*(*(A + 3) + 0));
		A42->Text = System::Convert::ToString(*(*(A + 3) + 1));
		A43->Text = System::Convert::ToString(*(*(A + 3) + 2));
		A44->Text = System::Convert::ToString(*(*(A + 3) + 3));
		A45->Text = System::Convert::ToString(*(*(A + 3) + 4));
		A51->Text = System::Convert::ToString(*(*(A + 4) + 0));
		A52->Text = System::Convert::ToString(*(*(A + 4) + 1));
		A53->Text = System::Convert::ToString(*(*(A + 4) + 2));
		A54->Text = System::Convert::ToString(*(*(A + 4) + 3));
		A55->Text = System::Convert::ToString(*(*(A + 4) + 4));
		MainTextBox->Text = System::Convert::ToString("Матрица A была успешно возведена в спень " + p);
		return;

	}
	/////////////////////////////////////////////////////////////////////
	PowArray(res, A, N, p);
	/////////////////////////////////////////////////////////////////////
	A11->Text = System::Convert::ToString(*(*(res + 0) + 0));
	A12->Text = System::Convert::ToString(*(*(res + 0) + 1));
	A13->Text = System::Convert::ToString(*(*(res + 0) + 2));
	A14->Text = System::Convert::ToString(*(*(res + 0) + 3));
	A15->Text = System::Convert::ToString(*(*(res + 0) + 4));
	A21->Text = System::Convert::ToString(*(*(res + 1) + 0));
	A22->Text = System::Convert::ToString(*(*(res + 1) + 1));
	A23->Text = System::Convert::ToString(*(*(res + 1) + 2));
	A24->Text = System::Convert::ToString(*(*(res + 1) + 3));
	A25->Text = System::Convert::ToString(*(*(res + 1) + 4));
	A31->Text = System::Convert::ToString(*(*(res + 2) + 0));
	A32->Text = System::Convert::ToString(*(*(res + 2) + 1));
	A33->Text = System::Convert::ToString(*(*(res + 2) + 2));
	A34->Text = System::Convert::ToString(*(*(res + 2) + 3));
	A35->Text = System::Convert::ToString(*(*(res + 2) + 4));
	A41->Text = System::Convert::ToString(*(*(res + 3) + 0));
	A42->Text = System::Convert::ToString(*(*(res + 3) + 1));
	A43->Text = System::Convert::ToString(*(*(res + 3) + 2));
	A44->Text = System::Convert::ToString(*(*(res + 3) + 3));
	A45->Text = System::Convert::ToString(*(*(res + 3) + 4));
	A51->Text = System::Convert::ToString(*(*(res + 4) + 0));
	A52->Text = System::Convert::ToString(*(*(res + 4) + 1));
	A53->Text = System::Convert::ToString(*(*(res + 4) + 2));
	A54->Text = System::Convert::ToString(*(*(res + 4) + 3));
	A55->Text = System::Convert::ToString(*(*(res + 4) + 4));
	//////////////////////////////////////////////////////////////////
	MainTextBox->Text = System::Convert::ToString("Матрица A была успешно возведена в спень "+p);
	DeleteArray(res, 5);
	DeleteArray(A, 5);
}
private: System::Void ExponentA_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
}
private: System::Void multiplierA_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->multiplierA->Text->Contains(",") && !this->multiplierA->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->multiplierA->Text->Contains("-")))
	{
		e->Handled = true;
		multiplierA->Text = "-" + multiplierA->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}

private: System::Void exponentiationB_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	int N = System::Convert::ToDouble(SIZE_B_N->Text);
	int M = System::Convert::ToDouble(SIZE_B_M->Text);
	if (M != N)
	{
		MainTextBox->Text = System::Convert::ToString("нельзя возвести НЕ квадратную матрицу  в степень");
		return;
	}
	double **A, **res;
	A = CreateArray(5);
	res = CreateArray(5);
	double temp = System::Convert::ToDouble(ExponentB->Text);
	int p = static_cast< int >(temp);

	////////////////////////////////////////////////////////////////
	*(*(A + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(B55->Text);
	/////////////////////////////////////////////////////////////////////
	if (p == 0)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				*(*(A + i) + j) = 0;
			}
		}




		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				*(*(A + i) + j) = 1;

			}
		}
		A11->Text = System::Convert::ToString(*(*(A + 0) + 0));
		A12->Text = System::Convert::ToString(*(*(A + 0) + 1));
		A13->Text = System::Convert::ToString(*(*(A + 0) + 2));
		A14->Text = System::Convert::ToString(*(*(A + 0) + 3));
		A15->Text = System::Convert::ToString(*(*(A + 0) + 4));
		A21->Text = System::Convert::ToString(*(*(A + 1) + 0));
		A22->Text = System::Convert::ToString(*(*(A + 1) + 1));
		A23->Text = System::Convert::ToString(*(*(A + 1) + 2));
		A24->Text = System::Convert::ToString(*(*(A + 1) + 3));
		A25->Text = System::Convert::ToString(*(*(A + 1) + 4));
		A31->Text = System::Convert::ToString(*(*(A + 2) + 0));
		A32->Text = System::Convert::ToString(*(*(A + 2) + 1));
		A33->Text = System::Convert::ToString(*(*(A + 2) + 2));
		A34->Text = System::Convert::ToString(*(*(A + 2) + 3));
		A35->Text = System::Convert::ToString(*(*(A + 2) + 4));
		A41->Text = System::Convert::ToString(*(*(A + 3) + 0));
		A42->Text = System::Convert::ToString(*(*(A + 3) + 1));
		A43->Text = System::Convert::ToString(*(*(A + 3) + 2));
		A44->Text = System::Convert::ToString(*(*(A + 3) + 3));
		A45->Text = System::Convert::ToString(*(*(A + 3) + 4));
		A51->Text = System::Convert::ToString(*(*(A + 4) + 0));
		A52->Text = System::Convert::ToString(*(*(A + 4) + 1));
		A53->Text = System::Convert::ToString(*(*(A + 4) + 2));
		A54->Text = System::Convert::ToString(*(*(A + 4) + 3));
		A55->Text = System::Convert::ToString(*(*(A + 4) + 4));
		MainTextBox->Text = System::Convert::ToString("Матрица В была успешно возведена в спень " + p);
		return;

	}
	/////////////////////////////////////////////////////////////////////
	PowArray(res, A, N, p);
	/////////////////////////////////////////////////////////////////////
	B11->Text = System::Convert::ToString(*(*(res + 0) + 0));
	B12->Text = System::Convert::ToString(*(*(res + 0) + 1));
	B13->Text = System::Convert::ToString(*(*(res + 0) + 2));
	B14->Text = System::Convert::ToString(*(*(res + 0) + 3));
	B15->Text = System::Convert::ToString(*(*(res + 0) + 4));
	B21->Text = System::Convert::ToString(*(*(res + 1) + 0));
	B22->Text = System::Convert::ToString(*(*(res + 1) + 1));
	B23->Text = System::Convert::ToString(*(*(res + 1) + 2));
	B24->Text = System::Convert::ToString(*(*(res + 1) + 3));
	B25->Text = System::Convert::ToString(*(*(res + 1) + 4));
	B31->Text = System::Convert::ToString(*(*(res + 2) + 0));
	B32->Text = System::Convert::ToString(*(*(res + 2) + 1));
	B33->Text = System::Convert::ToString(*(*(res + 2) + 2));
	B34->Text = System::Convert::ToString(*(*(res + 2) + 3));
	B35->Text = System::Convert::ToString(*(*(res + 2) + 4));
	B41->Text = System::Convert::ToString(*(*(res + 3) + 0));
	B42->Text = System::Convert::ToString(*(*(res + 3) + 1));
	B43->Text = System::Convert::ToString(*(*(res + 3) + 2));
	B44->Text = System::Convert::ToString(*(*(res + 3) + 3));
	B45->Text = System::Convert::ToString(*(*(res + 3) + 4));
	B51->Text = System::Convert::ToString(*(*(res + 4) + 0));
	B52->Text = System::Convert::ToString(*(*(res + 4) + 1));
	B53->Text = System::Convert::ToString(*(*(res + 4) + 2));
	B54->Text = System::Convert::ToString(*(*(res + 4) + 3));
	B55->Text = System::Convert::ToString(*(*(res + 4) + 4));
	//////////////////////////////////////////////////////////////////
	MainTextBox->Text = System::Convert::ToString("Матрица B была успешно возведена в спень " + p);
	DeleteArray(res, 5);
	DeleteArray(A, 5);
}


private: System::Void CleaningA_Click(System::Object^  sender, System::EventArgs^  e)
{
	A11->Text = System::Convert::ToString(0);
	A12->Text = System::Convert::ToString(0);
	A13->Text = System::Convert::ToString(0);
	A14->Text = System::Convert::ToString(0);
	A15->Text = System::Convert::ToString(0);
	A21->Text = System::Convert::ToString(0);
	A22->Text = System::Convert::ToString(0);
	A23->Text = System::Convert::ToString(0);
	A24->Text = System::Convert::ToString(0);
	A25->Text = System::Convert::ToString(0);
	A31->Text = System::Convert::ToString(0);
	A32->Text = System::Convert::ToString(0);
	A33->Text = System::Convert::ToString(0);
	A34->Text = System::Convert::ToString(0);
	A35->Text = System::Convert::ToString(0);
	A41->Text = System::Convert::ToString(0);
	A42->Text = System::Convert::ToString(0);
	A43->Text = System::Convert::ToString(0);
	A44->Text = System::Convert::ToString(0);
	A45->Text = System::Convert::ToString(0);
	A51->Text = System::Convert::ToString(0);
	A52->Text = System::Convert::ToString(0);
	A53->Text = System::Convert::ToString(0);
	A54->Text = System::Convert::ToString(0);
	A55->Text = System::Convert::ToString(0);
	MainTextBox->Text = System::Convert::ToString("Матрица A была успешно очищена");
}
private: System::Void CleaningB_Click(System::Object^  sender, System::EventArgs^  e)
{
	B11->Text = System::Convert::ToString(0);
	B12->Text = System::Convert::ToString(0);
	B13->Text = System::Convert::ToString(0);
	B14->Text = System::Convert::ToString(0);
	B15->Text = System::Convert::ToString(0);
	B21->Text = System::Convert::ToString(0);
	B22->Text = System::Convert::ToString(0);
	B23->Text = System::Convert::ToString(0);
	B24->Text = System::Convert::ToString(0);
	B25->Text = System::Convert::ToString(0);
	B31->Text = System::Convert::ToString(0);
	B32->Text = System::Convert::ToString(0);
	B33->Text = System::Convert::ToString(0);
	B34->Text = System::Convert::ToString(0);
	B35->Text = System::Convert::ToString(0);
	B41->Text = System::Convert::ToString(0);
	B42->Text = System::Convert::ToString(0);
	B43->Text = System::Convert::ToString(0);
	B44->Text = System::Convert::ToString(0);
	B45->Text = System::Convert::ToString(0);
	B51->Text = System::Convert::ToString(0);
	B52->Text = System::Convert::ToString(0);
	B53->Text = System::Convert::ToString(0);
	B54->Text = System::Convert::ToString(0);
	B55->Text = System::Convert::ToString(0);

	Y1->Text = System::Convert::ToString(0);
	Y2->Text = System::Convert::ToString(0);
	Y3->Text = System::Convert::ToString(0);
	Y4->Text = System::Convert::ToString(0);
	Y5->Text = System::Convert::ToString(0);
	MainTextBox->Text = System::Convert::ToString("Матрица В была успешно очищена");
}
private: System::Void C11_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C11->Text->Contains(",") && !this->C11->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C11->Text->Contains("-")))
	{
		e->Handled = true;
		C11->Text = "-" + C11->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C12_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C12->Text->Contains(",") && !this->C12->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C12->Text->Contains("-")))
	{
		e->Handled = true;
		C12->Text = "-" + C12->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C13_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C13->Text->Contains(",") && !this->C13->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C13->Text->Contains("-")))
	{
		e->Handled = true;
		C13->Text = "-" + C13->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C14_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C14->Text->Contains(",") && !this->C14->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C14->Text->Contains("-")))
	{
		e->Handled = true;
		C14->Text = "-" + C14->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C15_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C15->Text->Contains(",") && !this->C15->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C15->Text->Contains("-")))
	{
		e->Handled = true;
		C15->Text = "-" + C15->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C21_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C21->Text->Contains(",") && !this->C21->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C21->Text->Contains("-")))
	{
		e->Handled = true;
		C21->Text = "-" + C21->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C22_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C22->Text->Contains(",") && !this->C22->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C22->Text->Contains("-")))
	{
		e->Handled = true;
		C22->Text = "-" + C22->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C23_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C23->Text->Contains(",") && !this->C23->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C23->Text->Contains("-")))
	{
		e->Handled = true;
		C23->Text = "-" + C23->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C24_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C24->Text->Contains(",") && !this->C24->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C24->Text->Contains("-")))
	{
		e->Handled = true;
		C24->Text = "-" + C24->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C25_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C25->Text->Contains(",") && !this->C25->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C25->Text->Contains("-")))
	{
		e->Handled = true;
		C25->Text = "-" + C25->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C31_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C31->Text->Contains(",") && !this->C31->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C31->Text->Contains("-")))
	{
		e->Handled = true;
		C31->Text = "-" + C31->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C32_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C32->Text->Contains(",") && !this->C32->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C32->Text->Contains("-")))
	{
		e->Handled = true;
		C32->Text = "-" + C32->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C33_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C33->Text->Contains(",") && !this->C33->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C33->Text->Contains("-")))
	{
		e->Handled = true;
		C33->Text = "-" + C33->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C34_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C34->Text->Contains(",") && !this->C34->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C34->Text->Contains("-")))
	{
		e->Handled = true;
		C34->Text = "-" + C34->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C35_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C35->Text->Contains(",") && !this->C35->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C35->Text->Contains("-")))
	{
		e->Handled = true;
		C35->Text = "-" + C35->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C41_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C41->Text->Contains(",") && !this->C41->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C41->Text->Contains("-")))
	{
		e->Handled = true;
		C41->Text = "-" + C41->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C42_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C42->Text->Contains(",") && !this->C42->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C42->Text->Contains("-")))
	{
		e->Handled = true;
		C42->Text = "-" + C42->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C43_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C43->Text->Contains(",") && !this->C43->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C43->Text->Contains("-")))
	{
		e->Handled = true;
		C43->Text = "-" + C43->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C44_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C44->Text->Contains(",") && !this->C44->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C44->Text->Contains("-")))
	{
		e->Handled = true;
		C44->Text = "-" + C44->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C45_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C45->Text->Contains(",") && !this->C45->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C45->Text->Contains("-")))
	{
		e->Handled = true;
		C45->Text = "-" + C45->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C51_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C51->Text->Contains(",") && !this->C51->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C51->Text->Contains("-")))
	{
		e->Handled = true;
		C51->Text = "-" + C51->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C52_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C52->Text->Contains(",") && !this->C52->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C52->Text->Contains("-")))
	{
		e->Handled = true;
		C52->Text = "-" + C52->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C53_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C53->Text->Contains(",") && !this->C53->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C53->Text->Contains("-")))
	{
		e->Handled = true;
		C53->Text = "-" + C53->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C54_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C54->Text->Contains(",") && !this->C54->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C54->Text->Contains("-")))
	{
		e->Handled = true;
		C54->Text = "-" + C54->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}
private: System::Void C55_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{
	//////////////////////////////////////////////////////////////////////////
	//Эта проверка подключена ко всем остальным, вроде работает(нет, не работает)
	//Проверка на введение только цифр и запятой
	//https://www.daniweb.com/programming/software-development/threads/310070/numeric-textbox-for-c-windows-forms
	//проебал отрицательеые числа,СУКА!!!!!
	//Тут есть проверка на запятую и на отрицательные
	//https://stackoverflow.com/questions/24491883/visual-c-2010-only-allow-numbers-in-textbox
	//////////////////////////////////////////////////////////////////////////
	if (e->KeyChar == ',')
	{
		if (this->C55->Text->Contains(",") && !this->C55->SelectedText->Contains(","))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->C55->Text->Contains("-")))
	{
		e->Handled = true;
		C55->Text = "-" + C55->Text;
	}
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
	{
		e->Handled = true;
	}
	///////////////////////////////////////////////////////////////////////////////
}

private: System::Void SummAB_Click(System::Object^  sender, System::EventArgs^  e)
{
	int N_A = System::Convert::ToDouble(SIZE_A_N->Text);
	int M_A = System::Convert::ToDouble(SIZE_A_M->Text);
	int N_B = System::Convert::ToDouble(SIZE_B_N->Text);
	int M_B = System::Convert::ToDouble(SIZE_B_M->Text);


	if (M_A != M_B)
	{
		MainTextBox->Text = System::Convert::ToString("Нельзя складывать матрицы разного размера!!!");
		return;
	}
	if (N_A != N_B)
	{
		MainTextBox->Text = System::Convert::ToString("Нельзя складывать матрицы разного размера!!!");
		return;
	}
	double **A, **B;
	A = CreateArray(5);
	B = CreateArray(5);
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	///////////////////////////////////////////////////////
	*(*(B + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(B + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(B + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(B + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(B + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(B + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(B + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(B + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(B + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(B + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(B + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(B + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(B + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(B + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(B + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(B + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(B + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(B + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(B + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(B + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(B + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(B + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(B + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(B + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(B + 4) + 4) = System::Convert::ToDouble(B55->Text);
	///////////////////////////////////////////////////////
	for (int i = M_A; i <5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = B[i][j]=0;
		}

	}

	for (int i = M_A; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[j][i] = B[j][i] = 0;
		}

	}
	///////////////////////////////////////////////////////
	for (int i = 0; i < M_A; i++)
	{
		for (int j = 0; j < N_A; j++)
		{
			A[i][j] += B[i][j];
		}

	}
	C11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	C12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	C13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	C14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	C15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	C21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	C22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	C23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	C24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	C25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	C31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	C32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	C33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	C34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	C35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	C41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	C42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	C43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	C44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	C45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	C51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	C52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	C53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	C54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	C55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	DeleteArray(B, 5);
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("Матрица A и В была успешно сложены");
}
private: System::Void subtractionAB_Click(System::Object^  sender, System::EventArgs^  e)
{
	int N_A = System::Convert::ToDouble(SIZE_A_N->Text);
	int M_A = System::Convert::ToDouble(SIZE_A_M->Text);
	int N_B = System::Convert::ToDouble(SIZE_B_N->Text);
	int M_B = System::Convert::ToDouble(SIZE_B_M->Text);


	if (M_A != M_B)
	{
		MainTextBox->Text = System::Convert::ToString("Нельзя вычетать матрицы разного размера!!!");
		return;
	}
	if (N_A != N_B)
	{
		MainTextBox->Text = System::Convert::ToString("Нельзя складывать матрицы разного размера!!!");
		return;
	}
	double **A, **B;
	A = CreateArray(5);
	B = CreateArray(5);
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	///////////////////////////////////////////////////////
	*(*(B + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(B + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(B + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(B + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(B + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(B + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(B + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(B + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(B + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(B + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(B + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(B + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(B + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(B + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(B + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(B + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(B + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(B + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(B + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(B + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(B + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(B + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(B + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(B + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(B + 4) + 4) = System::Convert::ToDouble(B55->Text);
	///////////////////////////////////////////////////////
	for (int i = M_A; i <5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = B[i][j] = 0;
		}

	}

	for (int i = M_A; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[j][i] = B[j][i] = 0;
		}

	}
	///////////////////////////////////////////////////////
	for (int i = 0; i < M_A; i++)
	{
		for (int j = 0; j < N_A; j++)
		{
			A[i][j] -= B[i][j];
		}

	}
	C11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	C12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	C13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	C14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	C15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	C21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	C22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	C23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	C24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	C25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	C31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	C32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	C33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	C34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	C35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	C41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	C42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	C43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	C44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	C45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	C51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	C52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	C53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	C54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	C55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	DeleteArray(B, 5);
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("Матрица A и В была успешно вычетаны");
}
private: System::Void multiplicationAB_Click(System::Object^  sender, System::EventArgs^  e)
{
	
	int M = System::Convert::ToDouble(SIZE_A_N->Text);
	int N = System::Convert::ToDouble(SIZE_A_M->Text);
	int M2 = System::Convert::ToDouble(SIZE_B_N->Text);
	int N2 = System::Convert::ToDouble(SIZE_B_M->Text);


	if (M != N2)
	{
		MainTextBox->Text = System::Convert::ToString("Операция умножения двух матриц выполнима только в том случае, если число столбцов в первом сомножителе равно числу строк во втором");
		return;
	}
	double **A, **B, **C;
	A = CreateArray(5);
	B = CreateArray(5);
	C = CreateArray(5);
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	///////////////////////////////////////////////////////
	*(*(B + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(B + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(B + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(B + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(B + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(B + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(B + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(B + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(B + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(B + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(B + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(B + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(B + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(B + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(B + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(B + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(B + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(B + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(B + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(B + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(B + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(B + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(B + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(B + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(B + 4) + 4) = System::Convert::ToDouble(B55->Text);
	///////////////////////////////////////////////////////
	Matrix_multiplication(A, B, C, N, M, M2);
	///////////////////////////////////////////////////////
	C11->Text = System::Convert::ToString(*(*(C + 0) + 0));
	C12->Text = System::Convert::ToString(*(*(C + 0) + 1));
	C13->Text = System::Convert::ToString(*(*(C + 0) + 2));
	C14->Text = System::Convert::ToString(*(*(C + 0) + 3));
	C15->Text = System::Convert::ToString(*(*(C + 0) + 4));
	C21->Text = System::Convert::ToString(*(*(C + 1) + 0));
	C22->Text = System::Convert::ToString(*(*(C + 1) + 1));
	C23->Text = System::Convert::ToString(*(*(C + 1) + 2));
	C24->Text = System::Convert::ToString(*(*(C + 1) + 3));
	C25->Text = System::Convert::ToString(*(*(C + 1) + 4));
	C31->Text = System::Convert::ToString(*(*(C + 2) + 0));
	C32->Text = System::Convert::ToString(*(*(C + 2) + 1));
	C33->Text = System::Convert::ToString(*(*(C + 2) + 2));
	C34->Text = System::Convert::ToString(*(*(C + 2) + 3));
	C35->Text = System::Convert::ToString(*(*(C + 2) + 4));
	C41->Text = System::Convert::ToString(*(*(C + 3) + 0));
	C42->Text = System::Convert::ToString(*(*(C + 3) + 1));
	C43->Text = System::Convert::ToString(*(*(C + 3) + 2));
	C44->Text = System::Convert::ToString(*(*(C + 3) + 3));
	C45->Text = System::Convert::ToString(*(*(C + 3) + 4));
	C51->Text = System::Convert::ToString(*(*(C + 4) + 0));
	C52->Text = System::Convert::ToString(*(*(C + 4) + 1));
	C53->Text = System::Convert::ToString(*(*(C + 4) + 2));
	C54->Text = System::Convert::ToString(*(*(C + 4) + 3));
	C55->Text = System::Convert::ToString(*(*(C + 4) + 4));
	DeleteArray(B, 5);
	DeleteArray(A, 5);
	DeleteArray(C, 5);
	MainTextBox->Text = System::Convert::ToString("Матрица A и В была успешно перемножены");
}

private: System::Void subtractionBA_Click(System::Object^  sender, System::EventArgs^  e)
{
	int N_A = System::Convert::ToDouble(SIZE_A_N->Text);
	int M_A = System::Convert::ToDouble(SIZE_A_M->Text);
	int N_B = System::Convert::ToDouble(SIZE_B_N->Text);
	int M_B = System::Convert::ToDouble(SIZE_B_M->Text);


	if (M_A != M_B)
	{
		MainTextBox->Text = System::Convert::ToString("Нельзя вычетать матрицы разного размера!!!");
		return;
	}
	if (N_A != N_B)
	{
		MainTextBox->Text = System::Convert::ToString("Нельзя складывать матрицы разного размера!!!");
		return;
	}
	double **A, **B;
	A = CreateArray(5);
	B = CreateArray(5);
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	///////////////////////////////////////////////////////
	*(*(B + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(B + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(B + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(B + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(B + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(B + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(B + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(B + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(B + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(B + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(B + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(B + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(B + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(B + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(B + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(B + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(B + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(B + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(B + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(B + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(B + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(B + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(B + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(B + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(B + 4) + 4) = System::Convert::ToDouble(B55->Text);
	///////////////////////////////////////////////////////
	for (int i = M_A; i <5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = B[i][j] = 0;
		}

	}

	for (int i = M_A; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[j][i] = B[j][i] = 0;
		}

	}
	///////////////////////////////////////////////////////
	for (int i = 0; i < M_A; i++)
	{
		for (int j = 0; j < N_A; j++)
		{
			B[i][j] -= A[i][j];
		}

	}
	C11->Text = System::Convert::ToString(*(*(B + 0) + 0));
	C12->Text = System::Convert::ToString(*(*(B + 0) + 1));
	C13->Text = System::Convert::ToString(*(*(B + 0) + 2));
	C14->Text = System::Convert::ToString(*(*(B + 0) + 3));
	C15->Text = System::Convert::ToString(*(*(B + 0) + 4));
	C21->Text = System::Convert::ToString(*(*(B + 1) + 0));
	C22->Text = System::Convert::ToString(*(*(B + 1) + 1));
	C23->Text = System::Convert::ToString(*(*(B + 1) + 2));
	C24->Text = System::Convert::ToString(*(*(B + 1) + 3));
	C25->Text = System::Convert::ToString(*(*(B + 1) + 4));
	C31->Text = System::Convert::ToString(*(*(B + 2) + 0));
	C32->Text = System::Convert::ToString(*(*(B + 2) + 1));
	C33->Text = System::Convert::ToString(*(*(B + 2) + 2));
	C34->Text = System::Convert::ToString(*(*(B + 2) + 3));
	C35->Text = System::Convert::ToString(*(*(B + 2) + 4));
	C41->Text = System::Convert::ToString(*(*(B + 3) + 0));
	C42->Text = System::Convert::ToString(*(*(B + 3) + 1));
	C43->Text = System::Convert::ToString(*(*(B + 3) + 2));
	C44->Text = System::Convert::ToString(*(*(B + 3) + 3));
	C45->Text = System::Convert::ToString(*(*(B + 3) + 4));
	C51->Text = System::Convert::ToString(*(*(B + 4) + 0));
	C52->Text = System::Convert::ToString(*(*(B + 4) + 1));
	C53->Text = System::Convert::ToString(*(*(B + 4) + 2));
	C54->Text = System::Convert::ToString(*(*(B + 4) + 3));
	C55->Text = System::Convert::ToString(*(*(B + 4) + 4));
	DeleteArray(B, 5);
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("Матрица В и А была успешно вычетаны");
}



private: System::Void Gauss_method_Click(System::Object^  sender, System::EventArgs^  e)
{
	/////////////////////////////////////////////////////////////
	int N = System::Convert::ToDouble(SIZE_B_N->Text);
	int M = System::Convert::ToDouble(SIZE_B_M->Text);


	if ( N != M)
	{
		MainTextBox->Text = System::Convert::ToString("матрица должна быть квадратная");
		return;
	}



	/////////////////////////////////////////////////////////////
	double **a, *y, *x;
	int n=N;
	a = CreateArray(5);
	y = new double[5];
	x = new double[5];
	for (int i = 0; i < 5; i++)
	{
		x[i] = 0;
	}


	*(*(a + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(a + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(a + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(a + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(a + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(a + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(a + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(a + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(a + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(a + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(a + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(a + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(a + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(a + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(a + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(a + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(a + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(a + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(a + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(a + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(a + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(a + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(a + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(a + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(a + 4) + 4) = System::Convert::ToDouble(B55->Text);

	y[0] = System::Convert::ToDouble(Y1->Text);
	y[1] = System::Convert::ToDouble(Y2->Text);
	y[2] = System::Convert::ToDouble(Y3->Text);
	y[3] = System::Convert::ToDouble(Y4->Text);
	y[4] = System::Convert::ToDouble(Y5->Text);

	double  max;
	int k, index;
	const double eps = 0.01;  // точность
	x = new double[5];
	k = 0;
	while (k < n)
	{
		// Поиск строки с максимальным a[i][k]
		max = fabs(a[k][k]);
		index = k;
		for (int i = k + 1; i < n; i++)
		{
			if (fabs(a[i][k]) > max)
			{
				max = fabs(a[i][k]);
				index = i;
			}
		}
		// Перестановка строк
		if (max < eps)
		{
			// нет ненулевых диагональных элементов
			MainTextBox->Text = System::Convert::ToString("Решение получить невозможно из-за нулевого столбца " + index + " матрицы A");
			return;
		}
		for (int j = 0; j < n; j++)
		{
			double temp = a[k][j];
			a[k][j] = a[index][j];
			a[index][j] = temp;
		}
		double temp = y[k];
		y[k] = y[index];
		y[index] = temp;
		// Нормализация уравнений
		for (int i = k; i < n; i++)
		{
			double temp = a[i][k];
			if (fabs(temp) < eps)
				continue; // для нулевого коэффициента пропустить
			for (int j = 0; j < n; j++)
				a[i][j] = a[i][j] / temp;
			y[i] = y[i] / temp;
			if (i == k)
				continue; // уравнение не вычитать само из себя
			for (int j = 0; j < n; j++)
				a[i][j] = a[i][j] - a[k][j];
			y[i] = y[i] - y[k];
		}
		k++;
	}
	// обратная подстановка
	for (k = n - 1; k >= 0; k--)
	{
		x[k] = y[k];
		for (int i = 0; i < k; i++)
			y[i] = y[i] - a[i][k] * x[k];
	}
	for (int i = n; i < 5; i++)
	{
		x[i] = 0;
	}
	x1->Text = System::Convert::ToString(*(x + 0));
	x2->Text = System::Convert::ToString(*(x + 1));
	x3->Text = System::Convert::ToString(*(x + 2));
	x4->Text = System::Convert::ToString(*(x + 3));
	x5->Text = System::Convert::ToString(*(x + 4));
	DeleteArray(a, 5);
	delete[] x;
	delete[] y;
	MainTextBox->Text = System::Convert::ToString("матрица В была решена методом Гаусса");
}

private: System::Void CleanALL_Click(System::Object^  sender, System::EventArgs^  e)
{
	A11->Text = System::Convert::ToString(0);
	A12->Text = System::Convert::ToString(0);
	A13->Text = System::Convert::ToString(0);
	A14->Text = System::Convert::ToString(0);
	A15->Text = System::Convert::ToString(0);
	A21->Text = System::Convert::ToString(0);
	A22->Text = System::Convert::ToString(0);
	A23->Text = System::Convert::ToString(0);
	A24->Text = System::Convert::ToString(0);
	A25->Text = System::Convert::ToString(0);
	A31->Text = System::Convert::ToString(0);
	A32->Text = System::Convert::ToString(0);
	A33->Text = System::Convert::ToString(0);
	A34->Text = System::Convert::ToString(0);
	A35->Text = System::Convert::ToString(0);
	A41->Text = System::Convert::ToString(0);
	A42->Text = System::Convert::ToString(0);
	A43->Text = System::Convert::ToString(0);
	A44->Text = System::Convert::ToString(0);
	A45->Text = System::Convert::ToString(0);
	A51->Text = System::Convert::ToString(0);
	A52->Text = System::Convert::ToString(0);
	A53->Text = System::Convert::ToString(0);
	A54->Text = System::Convert::ToString(0);
	A55->Text = System::Convert::ToString(0);
	/////////////////////////////////////////
	B11->Text = System::Convert::ToString(0);
	B12->Text = System::Convert::ToString(0);
	B13->Text = System::Convert::ToString(0);
	B14->Text = System::Convert::ToString(0);
	B15->Text = System::Convert::ToString(0);
	B21->Text = System::Convert::ToString(0);
	B22->Text = System::Convert::ToString(0);
	B23->Text = System::Convert::ToString(0);
	B24->Text = System::Convert::ToString(0);
	B25->Text = System::Convert::ToString(0);
	B31->Text = System::Convert::ToString(0);
	B32->Text = System::Convert::ToString(0);
	B33->Text = System::Convert::ToString(0);
	B34->Text = System::Convert::ToString(0);
	B35->Text = System::Convert::ToString(0);
	B41->Text = System::Convert::ToString(0);
	B42->Text = System::Convert::ToString(0);
	B43->Text = System::Convert::ToString(0);
	B44->Text = System::Convert::ToString(0);
	B45->Text = System::Convert::ToString(0);
	B51->Text = System::Convert::ToString(0);
	B52->Text = System::Convert::ToString(0);
	B53->Text = System::Convert::ToString(0);
	B54->Text = System::Convert::ToString(0);
	B55->Text = System::Convert::ToString(0);
	/////////////////////////////////////////
	C11->Text = System::Convert::ToString(0);
	C12->Text = System::Convert::ToString(0);
	C13->Text = System::Convert::ToString(0);
	C14->Text = System::Convert::ToString(0);
	C15->Text = System::Convert::ToString(0);
	C21->Text = System::Convert::ToString(0);
	C22->Text = System::Convert::ToString(0);
	C23->Text = System::Convert::ToString(0);
	C24->Text = System::Convert::ToString(0);
	C25->Text = System::Convert::ToString(0);
	C31->Text = System::Convert::ToString(0);
	C32->Text = System::Convert::ToString(0);
	C33->Text = System::Convert::ToString(0);
	C34->Text = System::Convert::ToString(0);
	C35->Text = System::Convert::ToString(0);
	C41->Text = System::Convert::ToString(0);
	C42->Text = System::Convert::ToString(0);
	C43->Text = System::Convert::ToString(0);
	C44->Text = System::Convert::ToString(0);
	C45->Text = System::Convert::ToString(0);
	C51->Text = System::Convert::ToString(0);
	C52->Text = System::Convert::ToString(0);
	C53->Text = System::Convert::ToString(0);
	C54->Text = System::Convert::ToString(0);
	C55->Text = System::Convert::ToString(0);
	/////////////////////////////////////////
	Y1->Text = System::Convert::ToString(0);
	Y2->Text = System::Convert::ToString(0);
	Y3->Text = System::Convert::ToString(0);
	Y4->Text = System::Convert::ToString(0);
	Y5->Text = System::Convert::ToString(0);
	////////////////////////////////////////
	x1->Text = System::Convert::ToString(0);
	x2->Text = System::Convert::ToString(0);
	x3->Text = System::Convert::ToString(0);
	x4->Text = System::Convert::ToString(0);
	x5->Text = System::Convert::ToString(0);
	//////////////////////////////////////////////
	SIZE_A_M->Text = System::Convert::ToString(1);
	SIZE_A_N->Text = System::Convert::ToString(1);
	SIZE_B_M->Text = System::Convert::ToString(1);
	SIZE_B_N->Text = System::Convert::ToString(1);
	//////////////////////////////////////////////
	x1->Text = System::Convert::ToString(0);
	x2->Text = System::Convert::ToString(0);
	x3->Text = System::Convert::ToString(0);
	x4->Text = System::Convert::ToString(0);
	x5->Text = System::Convert::ToString(0);
	////////////////////////////////////////
	multiplierA->Text = System::Convert::ToString(1);
	multiplierB->Text = System::Convert::ToString(1);
	ExponentA->Text = System::Convert::ToString(1);
	ExponentB->Text = System::Convert::ToString(1);
	MainTextBox->Text = System::Convert::ToString("");

}

private: System::Void AvB_Click(System::Object^  sender, System::EventArgs^  e) 
{

	double **A = CreateArray(5);
	int n = System::Convert::ToDouble(SIZE_A_N->Text);
	int m = System::Convert::ToDouble(SIZE_A_M->Text);

	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);


	for (int i = 0; i < 5; i++)
	{
		for (int j = n; j < 5; j++)
		{
			A[i][j] = 0;

		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = m; j < 5; j++)
		{
			A[j][i] = 0;

		}

	}
	B11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	B12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	B13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	B14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	B15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	B21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	B22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	B23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	B24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	B25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	B31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	B32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	B33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	B34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	B35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	B41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	B42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	B43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	B44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	B45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	B51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	B52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	B53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	B54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	B55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	SIZE_B_M->Text = System::Convert::ToString(m);
	SIZE_B_N->Text = System::Convert::ToString(n);
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("матрица А была скопирована в матрицу В");

}
private: System::Void AvC_Click(System::Object^  sender, System::EventArgs^  e)
{
	double **A = CreateArray(5);
	int n = System::Convert::ToDouble(SIZE_A_N->Text);
	int m = System::Convert::ToDouble(SIZE_A_M->Text);

	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);


	for (int i = 0; i < 5; i++)
	{
		for (int j = n; j < 5; j++)
		{
			A[i][j] = 0;

		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = m; j < 5; j++)
		{
			A[j][i] = 0;

		}

	}
	C11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	C12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	C13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	C14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	C15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	C21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	C22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	C23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	C24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	C25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	C31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	C32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	C33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	C34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	C35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	C41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	C42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	C43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	C44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	C45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	C51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	C52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	C53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	C54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	C55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("матрица А была скопирована в матрицу С");
}
private: System::Void BvA_Click(System::Object^  sender, System::EventArgs^  e) 
{
	double **A = CreateArray(5);
	int n = System::Convert::ToDouble(SIZE_B_N->Text);
	int m = System::Convert::ToDouble(SIZE_B_M->Text);

	*(*(A + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(B55->Text);


	for (int i = 0; i < 5; i++)
	{
		for (int j = n; j < 5; j++)
		{
			A[i][j] = 0;

		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = m; j < 5; j++)
		{
			A[j][i] = 0;

		}

	}
	A11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	A12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	A13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	A14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	A15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	A21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	A22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	A23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	A24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	A25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	A31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	A32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	A33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	A34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	A35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	A41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	A42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	A43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	A44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	A45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	A51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	A52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	A53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	A54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	A55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	SIZE_A_M->Text = System::Convert::ToString(m);
	SIZE_A_N->Text = System::Convert::ToString(n);
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("матрица В была скопирована в матрицу А");
}

private: System::Void BvC_Click(System::Object^  sender, System::EventArgs^  e)
{
	double **A = CreateArray(5);
	int n = System::Convert::ToDouble(SIZE_B_N->Text);
	int m = System::Convert::ToDouble(SIZE_B_M->Text);

	*(*(A + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(B55->Text);


	for (int i = 0; i < 5; i++)
	{
		for (int j = n; j < 5; j++)
		{
			A[i][j] = 0;

		}

	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = m; j < 5; j++)
		{
			A[j][i] = 0;

		}

	}
	C11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	C12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	C13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	C14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	C15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	C21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	C22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	C23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	C24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	C25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	C31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	C32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	C33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	C34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	C35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	C41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	C42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	C43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	C44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	C45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	C51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	C52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	C53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	C54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	C55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("матрица В была скопирована в матрицу С");
}
private: System::Void CvA_Click(System::Object^  sender, System::EventArgs^  e)
{
	double **A = CreateArray(5);
	*(*(A + 0) + 0) = System::Convert::ToDouble(C11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(C12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(C13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(C14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(C15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(C21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(C22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(C23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(C24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(C25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(C31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(C32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(C33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(C34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(C35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(C41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(C42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(C43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(C44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(C45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(C51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(C52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(C53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(C54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(C55->Text);
    ////////////////////////////////////////////////////////
	A11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	A12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	A13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	A14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	A15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	A21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	A22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	A23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	A24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	A25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	A31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	A32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	A33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	A34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	A35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	A41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	A42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	A43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	A44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	A45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	A51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	A52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	A53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	A54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	A55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("матрица С была скопирована в матрицу А");
}
private: System::Void CvB_Click(System::Object^  sender, System::EventArgs^  e) 
{
	double **A = CreateArray(5);
	*(*(A + 0) + 0) = System::Convert::ToDouble(C11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(C12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(C13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(C14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(C15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(C21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(C22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(C23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(C24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(C25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(C31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(C32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(C33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(C34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(C35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(C41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(C42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(C43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(C44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(C45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(C51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(C52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(C53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(C54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(C55->Text);
	////////////////////////////////////////////////////////
	B11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	B12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	B13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	B14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	B15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	B21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	B22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	B23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	B24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	B25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	B31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	B32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	B33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	B34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	B35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	B41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	B42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	B43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	B44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	B45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	B51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	B52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	B53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	B54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	B55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	DeleteArray(A, 5);
	MainTextBox->Text = System::Convert::ToString("матрица С была скопирована в матрицу В");
}
private: System::Void SwapAB_Click(System::Object^  sender, System::EventArgs^  e)
{
	double **A = CreateArray(5);
	double **B = CreateArray(5);
	int n1 = System::Convert::ToDouble(SIZE_B_N->Text);
	int m1 = System::Convert::ToDouble(SIZE_B_M->Text);
	int n2 = System::Convert::ToDouble(SIZE_A_N->Text);
	int m2 = System::Convert::ToDouble(SIZE_A_M->Text);
	///////////////////////////////////////////////////////
	SIZE_B_N->Text = System::Convert::ToString(n2);
	SIZE_B_M->Text = System::Convert::ToString(m2);
	SIZE_A_N->Text = System::Convert::ToString(n1);
	SIZE_A_M->Text = System::Convert::ToString(m1);
	///////////////////////////////////////////////////////
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	///////////////////////////////////////////////////////
	*(*(B + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(B + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(B + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(B + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(B + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(B + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(B + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(B + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(B + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(B + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(B + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(B + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(B + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(B + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(B + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(B + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(B + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(B + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(B + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(B + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(B + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(B + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(B + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(B + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(B + 4) + 4) = System::Convert::ToDouble(B55->Text);
	///////////////////////////////////////////////////////
	B11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	B12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	B13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	B14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	B15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	B21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	B22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	B23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	B24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	B25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	B31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	B32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	B33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	B34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	B35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	B41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	B42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	B43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	B44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	B45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	B51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	B52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	B53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	B54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	B55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	///////////////////////////////////////////////////////
	A11->Text = System::Convert::ToString(*(*(B + 0) + 0));
	A12->Text = System::Convert::ToString(*(*(B + 0) + 1));
	A13->Text = System::Convert::ToString(*(*(B + 0) + 2));
	A14->Text = System::Convert::ToString(*(*(B + 0) + 3));
	A15->Text = System::Convert::ToString(*(*(B + 0) + 4));
	A21->Text = System::Convert::ToString(*(*(B + 1) + 0));
	A22->Text = System::Convert::ToString(*(*(B + 1) + 1));
	A23->Text = System::Convert::ToString(*(*(B + 1) + 2));
	A24->Text = System::Convert::ToString(*(*(B + 1) + 3));
	A25->Text = System::Convert::ToString(*(*(B + 1) + 4));
	A31->Text = System::Convert::ToString(*(*(B + 2) + 0));
	A32->Text = System::Convert::ToString(*(*(B + 2) + 1));
	A33->Text = System::Convert::ToString(*(*(B + 2) + 2));
	A34->Text = System::Convert::ToString(*(*(B + 2) + 3));
	A35->Text = System::Convert::ToString(*(*(B + 2) + 4));
	A41->Text = System::Convert::ToString(*(*(B + 3) + 0));
	A42->Text = System::Convert::ToString(*(*(B + 3) + 1));
	A43->Text = System::Convert::ToString(*(*(B + 3) + 2));
	A44->Text = System::Convert::ToString(*(*(B + 3) + 3));
	A45->Text = System::Convert::ToString(*(*(B + 3) + 4));
	A51->Text = System::Convert::ToString(*(*(B + 4) + 0));
	A52->Text = System::Convert::ToString(*(*(B + 4) + 1));
	A53->Text = System::Convert::ToString(*(*(B + 4) + 2));
	A54->Text = System::Convert::ToString(*(*(B + 4) + 3));
	A55->Text = System::Convert::ToString(*(*(B + 4) + 4));
	///////////////////////////////////////////////////////
	DeleteArray(A, 5);
	DeleteArray(B, 5);
	MainTextBox->Text = System::Convert::ToString("матрицы А и В были успешно поменяны местами");
}

private: System::Void SwapAC_Click(System::Object^  sender, System::EventArgs^  e)
{
	double **A = CreateArray(5);
	double **B = CreateArray(5);
	///////////////////////////////////////////////////////
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	///////////////////////////////////////////////////////
	*(*(B + 0) + 0) = System::Convert::ToDouble(C11->Text);
	*(*(B + 0) + 1) = System::Convert::ToDouble(C12->Text);
	*(*(B + 0) + 2) = System::Convert::ToDouble(C13->Text);
	*(*(B + 0) + 3) = System::Convert::ToDouble(C14->Text);
	*(*(B + 0) + 4) = System::Convert::ToDouble(C15->Text);
	*(*(B + 1) + 0) = System::Convert::ToDouble(C21->Text);
	*(*(B + 1) + 1) = System::Convert::ToDouble(C22->Text);
	*(*(B + 1) + 2) = System::Convert::ToDouble(C23->Text);
	*(*(B + 1) + 3) = System::Convert::ToDouble(C24->Text);
	*(*(B + 1) + 4) = System::Convert::ToDouble(C25->Text);
	*(*(B + 2) + 0) = System::Convert::ToDouble(C31->Text);
	*(*(B + 2) + 1) = System::Convert::ToDouble(C32->Text);
	*(*(B + 2) + 2) = System::Convert::ToDouble(C33->Text);
	*(*(B + 2) + 3) = System::Convert::ToDouble(C34->Text);
	*(*(B + 2) + 4) = System::Convert::ToDouble(C35->Text);
	*(*(B + 3) + 0) = System::Convert::ToDouble(C41->Text);
	*(*(B + 3) + 1) = System::Convert::ToDouble(C42->Text);
	*(*(B + 3) + 2) = System::Convert::ToDouble(C43->Text);
	*(*(B + 3) + 3) = System::Convert::ToDouble(C44->Text);
	*(*(B + 3) + 4) = System::Convert::ToDouble(C45->Text);
	*(*(B + 4) + 0) = System::Convert::ToDouble(C51->Text);
	*(*(B + 4) + 1) = System::Convert::ToDouble(C52->Text);
	*(*(B + 4) + 2) = System::Convert::ToDouble(C53->Text);
	*(*(B + 4) + 3) = System::Convert::ToDouble(C54->Text);
	*(*(B + 4) + 4) = System::Convert::ToDouble(C55->Text);
	///////////////////////////////////////////////////////
	C11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	C12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	C13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	C14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	C15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	C21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	C22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	C23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	C24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	C25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	C31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	C32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	C33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	C34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	C35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	C41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	C42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	C43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	C44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	C45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	C51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	C52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	C53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	C54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	C55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	///////////////////////////////////////////////////////
	A11->Text = System::Convert::ToString(*(*(B + 0) + 0));
	A12->Text = System::Convert::ToString(*(*(B + 0) + 1));
	A13->Text = System::Convert::ToString(*(*(B + 0) + 2));
	A14->Text = System::Convert::ToString(*(*(B + 0) + 3));
	A15->Text = System::Convert::ToString(*(*(B + 0) + 4));
	A21->Text = System::Convert::ToString(*(*(B + 1) + 0));
	A22->Text = System::Convert::ToString(*(*(B + 1) + 1));
	A23->Text = System::Convert::ToString(*(*(B + 1) + 2));
	A24->Text = System::Convert::ToString(*(*(B + 1) + 3));
	A25->Text = System::Convert::ToString(*(*(B + 1) + 4));
	A31->Text = System::Convert::ToString(*(*(B + 2) + 0));
	A32->Text = System::Convert::ToString(*(*(B + 2) + 1));
	A33->Text = System::Convert::ToString(*(*(B + 2) + 2));
	A34->Text = System::Convert::ToString(*(*(B + 2) + 3));
	A35->Text = System::Convert::ToString(*(*(B + 2) + 4));
	A41->Text = System::Convert::ToString(*(*(B + 3) + 0));
	A42->Text = System::Convert::ToString(*(*(B + 3) + 1));
	A43->Text = System::Convert::ToString(*(*(B + 3) + 2));
	A44->Text = System::Convert::ToString(*(*(B + 3) + 3));
	A45->Text = System::Convert::ToString(*(*(B + 3) + 4));
	A51->Text = System::Convert::ToString(*(*(B + 4) + 0));
	A52->Text = System::Convert::ToString(*(*(B + 4) + 1));
	A53->Text = System::Convert::ToString(*(*(B + 4) + 2));
	A54->Text = System::Convert::ToString(*(*(B + 4) + 3));
	A55->Text = System::Convert::ToString(*(*(B + 4) + 4));
	///////////////////////////////////////////////////////
	DeleteArray(A, 5);
	DeleteArray(B, 5);
	MainTextBox->Text = System::Convert::ToString("матрицы А и С были успешно поменяны местами");
}
private: System::Void SwapCB_Click(System::Object^  sender, System::EventArgs^  e) 
{
	double **A = CreateArray(5);
	double **B = CreateArray(5);
	///////////////////////////////////////////////////////
	*(*(A + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(B55->Text);
	///////////////////////////////////////////////////////
	*(*(B + 0) + 0) = System::Convert::ToDouble(C11->Text);
	*(*(B + 0) + 1) = System::Convert::ToDouble(C12->Text);
	*(*(B + 0) + 2) = System::Convert::ToDouble(C13->Text);
	*(*(B + 0) + 3) = System::Convert::ToDouble(C14->Text);
	*(*(B + 0) + 4) = System::Convert::ToDouble(C15->Text);
	*(*(B + 1) + 0) = System::Convert::ToDouble(C21->Text);
	*(*(B + 1) + 1) = System::Convert::ToDouble(C22->Text);
	*(*(B + 1) + 2) = System::Convert::ToDouble(C23->Text);
	*(*(B + 1) + 3) = System::Convert::ToDouble(C24->Text);
	*(*(B + 1) + 4) = System::Convert::ToDouble(C25->Text);
	*(*(B + 2) + 0) = System::Convert::ToDouble(C31->Text);
	*(*(B + 2) + 1) = System::Convert::ToDouble(C32->Text);
	*(*(B + 2) + 2) = System::Convert::ToDouble(C33->Text);
	*(*(B + 2) + 3) = System::Convert::ToDouble(C34->Text);
	*(*(B + 2) + 4) = System::Convert::ToDouble(C35->Text);
	*(*(B + 3) + 0) = System::Convert::ToDouble(C41->Text);
	*(*(B + 3) + 1) = System::Convert::ToDouble(C42->Text);
	*(*(B + 3) + 2) = System::Convert::ToDouble(C43->Text);
	*(*(B + 3) + 3) = System::Convert::ToDouble(C44->Text);
	*(*(B + 3) + 4) = System::Convert::ToDouble(C45->Text);
	*(*(B + 4) + 0) = System::Convert::ToDouble(C51->Text);
	*(*(B + 4) + 1) = System::Convert::ToDouble(C52->Text);
	*(*(B + 4) + 2) = System::Convert::ToDouble(C53->Text);
	*(*(B + 4) + 3) = System::Convert::ToDouble(C54->Text);
	*(*(B + 4) + 4) = System::Convert::ToDouble(C55->Text);
	///////////////////////////////////////////////////////
	C11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	C12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	C13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	C14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	C15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	C21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	C22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	C23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	C24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	C25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	C31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	C32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	C33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	C34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	C35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	C41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	C42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	C43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	C44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	C45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	C51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	C52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	C53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	C54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	C55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	///////////////////////////////////////////////////////
	B11->Text = System::Convert::ToString(*(*(B + 0) + 0));
	B12->Text = System::Convert::ToString(*(*(B + 0) + 1));
	B13->Text = System::Convert::ToString(*(*(B + 0) + 2));
	B14->Text = System::Convert::ToString(*(*(B + 0) + 3));
	B15->Text = System::Convert::ToString(*(*(B + 0) + 4));
	B21->Text = System::Convert::ToString(*(*(B + 1) + 0));
	B22->Text = System::Convert::ToString(*(*(B + 1) + 1));
	B23->Text = System::Convert::ToString(*(*(B + 1) + 2));
	B24->Text = System::Convert::ToString(*(*(B + 1) + 3));
	B25->Text = System::Convert::ToString(*(*(B + 1) + 4));
	B31->Text = System::Convert::ToString(*(*(B + 2) + 0));
	B32->Text = System::Convert::ToString(*(*(B + 2) + 1));
	B33->Text = System::Convert::ToString(*(*(B + 2) + 2));
	B34->Text = System::Convert::ToString(*(*(B + 2) + 3));
	B35->Text = System::Convert::ToString(*(*(B + 2) + 4));
	B41->Text = System::Convert::ToString(*(*(B + 3) + 0));
	B42->Text = System::Convert::ToString(*(*(B + 3) + 1));
	B43->Text = System::Convert::ToString(*(*(B + 3) + 2));
	B44->Text = System::Convert::ToString(*(*(B + 3) + 3));
	B45->Text = System::Convert::ToString(*(*(B + 3) + 4));
	B51->Text = System::Convert::ToString(*(*(B + 4) + 0));
	B52->Text = System::Convert::ToString(*(*(B + 4) + 1));
	B53->Text = System::Convert::ToString(*(*(B + 4) + 2));
	B54->Text = System::Convert::ToString(*(*(B + 4) + 3));
	B55->Text = System::Convert::ToString(*(*(B + 4) + 4));
	///////////////////////////////////////////////////////
	DeleteArray(A, 5);
	DeleteArray(B, 5);
	MainTextBox->Text = System::Convert::ToString("матрицы С и В были успешно поменяны местами");
}
private: System::Void InverseMatrixA_Click(System::Object^  sender, System::EventArgs^  e)
{
	int n = System::Convert::ToDouble(SIZE_A_N->Text);
	int m = System::Convert::ToDouble(SIZE_A_M->Text);
	if (n != m)
	{
		MainTextBox->Text = System::Convert::ToString("Матрица не квадратная, нахождение обратной матрицы невозможно ");
		return;
	}
	Double **A=CreateArray(5);
	*(*(A + 0) + 0) = System::Convert::ToDouble(A11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(A12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(A13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(A14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(A15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(A21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(A22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(A23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(A24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(A25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(A31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(A32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(A33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(A34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(A35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(A41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(A42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(A43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(A44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(A45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(A51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(A52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(A53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(A54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(A55->Text);
	if (Determinant(A, n) == 0)
	{
		MainTextBox->Text = System::Convert::ToString("Определитель матрицы А равен нулю, нахождение обратной матрицы невозможно ");
		return;
	}
	inversion(A, n);
	A11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	A12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	A13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	A14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	A15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	A21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	A22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	A23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	A24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	A25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	A31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	A32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	A33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	A34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	A35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	A41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	A42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	A43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	A44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	A45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	A51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	A52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	A53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	A54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	A55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	MainTextBox->Text = System::Convert::ToString("Для матрицы А была успешна найдена обратная матрица");
}
private: System::Void InverseMatrixB_Click(System::Object^  sender, System::EventArgs^  e)
{
	int n = System::Convert::ToDouble(SIZE_B_N->Text);
	int m = System::Convert::ToDouble(SIZE_B_M->Text);
	if (n != m)
	{
		MainTextBox->Text = System::Convert::ToString("Матрица B не квадратная, нахождение обратной матрицы невозможно ");
		return;
	}
	Double **A = CreateArray(5);
	*(*(A + 0) + 0) = System::Convert::ToDouble(B11->Text);
	*(*(A + 0) + 1) = System::Convert::ToDouble(B12->Text);
	*(*(A + 0) + 2) = System::Convert::ToDouble(B13->Text);
	*(*(A + 0) + 3) = System::Convert::ToDouble(B14->Text);
	*(*(A + 0) + 4) = System::Convert::ToDouble(B15->Text);
	*(*(A + 1) + 0) = System::Convert::ToDouble(B21->Text);
	*(*(A + 1) + 1) = System::Convert::ToDouble(B22->Text);
	*(*(A + 1) + 2) = System::Convert::ToDouble(B23->Text);
	*(*(A + 1) + 3) = System::Convert::ToDouble(B24->Text);
	*(*(A + 1) + 4) = System::Convert::ToDouble(B25->Text);
	*(*(A + 2) + 0) = System::Convert::ToDouble(B31->Text);
	*(*(A + 2) + 1) = System::Convert::ToDouble(B32->Text);
	*(*(A + 2) + 2) = System::Convert::ToDouble(B33->Text);
	*(*(A + 2) + 3) = System::Convert::ToDouble(B34->Text);
	*(*(A + 2) + 4) = System::Convert::ToDouble(B35->Text);
	*(*(A + 3) + 0) = System::Convert::ToDouble(B41->Text);
	*(*(A + 3) + 1) = System::Convert::ToDouble(B42->Text);
	*(*(A + 3) + 2) = System::Convert::ToDouble(B43->Text);
	*(*(A + 3) + 3) = System::Convert::ToDouble(B44->Text);
	*(*(A + 3) + 4) = System::Convert::ToDouble(B45->Text);
	*(*(A + 4) + 0) = System::Convert::ToDouble(B51->Text);
	*(*(A + 4) + 1) = System::Convert::ToDouble(B52->Text);
	*(*(A + 4) + 2) = System::Convert::ToDouble(B53->Text);
	*(*(A + 4) + 3) = System::Convert::ToDouble(B54->Text);
	*(*(A + 4) + 4) = System::Convert::ToDouble(B55->Text);
	if (Determinant(A, n) == 0)
	{
		MainTextBox->Text = System::Convert::ToString("Определитель матрицы B равен нулю, нахождение обратной матрицы невозможно ");
		return;
	}
	inversion(A, n);
	B11->Text = System::Convert::ToString(*(*(A + 0) + 0));
	B12->Text = System::Convert::ToString(*(*(A + 0) + 1));
	B13->Text = System::Convert::ToString(*(*(A + 0) + 2));
	B14->Text = System::Convert::ToString(*(*(A + 0) + 3));
	B15->Text = System::Convert::ToString(*(*(A + 0) + 4));
	B21->Text = System::Convert::ToString(*(*(A + 1) + 0));
	B22->Text = System::Convert::ToString(*(*(A + 1) + 1));
	B23->Text = System::Convert::ToString(*(*(A + 1) + 2));
	B24->Text = System::Convert::ToString(*(*(A + 1) + 3));
	B25->Text = System::Convert::ToString(*(*(A + 1) + 4));
	B31->Text = System::Convert::ToString(*(*(A + 2) + 0));
	B32->Text = System::Convert::ToString(*(*(A + 2) + 1));
	B33->Text = System::Convert::ToString(*(*(A + 2) + 2));
	B34->Text = System::Convert::ToString(*(*(A + 2) + 3));
	B35->Text = System::Convert::ToString(*(*(A + 2) + 4));
	B41->Text = System::Convert::ToString(*(*(A + 3) + 0));
	B42->Text = System::Convert::ToString(*(*(A + 3) + 1));
	B43->Text = System::Convert::ToString(*(*(A + 3) + 2));
	B44->Text = System::Convert::ToString(*(*(A + 3) + 3));
	B45->Text = System::Convert::ToString(*(*(A + 3) + 4));
	B51->Text = System::Convert::ToString(*(*(A + 4) + 0));
	B52->Text = System::Convert::ToString(*(*(A + 4) + 1));
	B53->Text = System::Convert::ToString(*(*(A + 4) + 2));
	B54->Text = System::Convert::ToString(*(*(A + 4) + 3));
	B55->Text = System::Convert::ToString(*(*(A + 4) + 4));
	MainTextBox->Text = System::Convert::ToString("Для матрицы В была успешна найдена обратная матрица");
}
private: System::Void C11_Leave(System::Object^  sender, System::EventArgs^  e) 
{
	if (C11->Text == "")
	{
		C11->Text = System::Convert::ToString(0);
	}
	if (C11->Text == "-")
	{
		C11->Text = System::Convert::ToString(0);
	}
	if (C11->Text == ",-")
	{
		C11->Text = System::Convert::ToString(0);
	}
	if (C11->Text == "-,")
	{
		C11->Text = System::Convert::ToString(0);
	}
	if (C11->Text == ",")
	{
		C11->Text = System::Convert::ToString(0);
	}
}
private: System::Void C12_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C12->Text == "")
	{
		C12->Text = System::Convert::ToString(0);
	}
	if (C12->Text == "-")
	{
		C12->Text = System::Convert::ToString(0);
	}
	if (C12->Text == ",-")
	{
		C12->Text = System::Convert::ToString(0);
	}
	if (C12->Text == "-,")
	{
		C12->Text = System::Convert::ToString(0);
	}
	if (C12->Text == ",")
	{
		C12->Text = System::Convert::ToString(0);
	}
}
private: System::Void C13_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C13->Text == "")
	{
		C13->Text = System::Convert::ToString(0);
	}
	if (C13->Text == "-")
	{
		C13->Text = System::Convert::ToString(0);
	}
	if (C13->Text == ",-")
	{
		C13->Text = System::Convert::ToString(0);
	}
	if (C13->Text == "-,")
	{
		C13->Text = System::Convert::ToString(0);
	}
	if (C13->Text == ",")
	{
		C13->Text = System::Convert::ToString(0);
	}
}
private: System::Void C14_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C14->Text == "")
	{
		C14->Text = System::Convert::ToString(0);
	}
	if (C14->Text == "-")
	{
		C14->Text = System::Convert::ToString(0);
	}
	if (C14->Text == ",-")
	{
		C14->Text = System::Convert::ToString(0);
	}
	if (C14->Text == "-,")
	{
		C14->Text = System::Convert::ToString(0);
	}
	if (C14->Text == ",")
	{
		C14->Text = System::Convert::ToString(0);
	}
}
private: System::Void C15_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C15->Text == "")
	{
		C15->Text = System::Convert::ToString(0);
	}
	if (C15->Text == "-")
	{
		C15->Text = System::Convert::ToString(0);
	}
	if (C15->Text == ",-")
	{
		C15->Text = System::Convert::ToString(0);
	}
	if (C15->Text == "-,")
	{
		C15->Text = System::Convert::ToString(0);
	}
	if (C15->Text == ",")
	{
		C15->Text = System::Convert::ToString(0);
	}
}
private: System::Void C21_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C21->Text == "")
	{
		C21->Text = System::Convert::ToString(0);
	}
	if (C21->Text == "-")
	{
		C21->Text = System::Convert::ToString(0);
	}
	if (C21->Text == ",-")
	{
		C21->Text = System::Convert::ToString(0);
	}
	if (C21->Text == "-,")
	{
		C21->Text = System::Convert::ToString(0);
	}
	if (C21->Text == ",")
	{
		C21->Text = System::Convert::ToString(0);
	}
}
private: System::Void C22_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C22->Text == "")
	{
		C22->Text = System::Convert::ToString(0);
	}
	if (C22->Text == "-")
	{
		C22->Text = System::Convert::ToString(0);
	}
	if (C22->Text == ",-")
	{
		C22->Text = System::Convert::ToString(0);
	}
	if (C22->Text == "-,")
	{
		C22->Text = System::Convert::ToString(0);
	}
	if (C22->Text == ",")
	{
		C22->Text = System::Convert::ToString(0);
	}
}
private: System::Void C23_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C23->Text == "")
	{
		C23->Text = System::Convert::ToString(0);
	}
	if (C23->Text == "-")
	{
		C23->Text = System::Convert::ToString(0);
	}
	if (C23->Text == ",-")
	{
		C23->Text = System::Convert::ToString(0);
	}
	if (C23->Text == "-,")
	{
		C23->Text = System::Convert::ToString(0);
	}
	if (C23->Text == ",")
	{
		C23->Text = System::Convert::ToString(0);
	}
}
private: System::Void C24_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C24->Text == "")
	{
		C24->Text = System::Convert::ToString(0);
	}
	if (C24->Text == "-")
	{
		C24->Text = System::Convert::ToString(0);
	}
	if (C24->Text == ",-")
	{
		C24->Text = System::Convert::ToString(0);
	}
	if (C24->Text == "-,")
	{
		C24->Text = System::Convert::ToString(0);
	}
	if (C24->Text == ",")
	{
		C24->Text = System::Convert::ToString(0);
	}
}
private: System::Void C25_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C25->Text == "")
	{
		C25->Text = System::Convert::ToString(0);
	}
	if (C25->Text == "-")
	{
		C25->Text = System::Convert::ToString(0);
	}
	if (C25->Text == ",-")
	{
		C25->Text = System::Convert::ToString(0);
	}
	if (C25->Text == "-,")
	{
		C25->Text = System::Convert::ToString(0);
	}
	if (C25->Text == ",")
	{
		C25->Text = System::Convert::ToString(0);
	}
}
private: System::Void C31_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C31->Text == "")
	{
		C31->Text = System::Convert::ToString(0);
	}
	if (C31->Text == "-")
	{
		C31->Text = System::Convert::ToString(0);
	}
	if (C31->Text == ",-")
	{
		C31->Text = System::Convert::ToString(0);
	}
	if (C31->Text == "-,")
	{
		C31->Text = System::Convert::ToString(0);
	}
	if (C31->Text == ",")
	{
		C31->Text = System::Convert::ToString(0);
	}
}
private: System::Void C32_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C32->Text == "")
	{
		C32->Text = System::Convert::ToString(0);
	}
	if (C32->Text == "-")
	{
		C32->Text = System::Convert::ToString(0);
	}
	if (C32->Text == ",-")
	{
		C32->Text = System::Convert::ToString(0);
	}
	if (C32->Text == "-,")
	{
		C32->Text = System::Convert::ToString(0);
	}
	if (C32->Text == ",")
	{
		C32->Text = System::Convert::ToString(0);
	}
}
private: System::Void C33_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C33->Text == "")
	{
		C33->Text = System::Convert::ToString(0);
	}
	if (C33->Text == "-")
	{
		C33->Text = System::Convert::ToString(0);
	}
	if (C33->Text == ",-")
	{
		C33->Text = System::Convert::ToString(0);
	}
	if (C33->Text == "-,")
	{
		C33->Text = System::Convert::ToString(0);
	}
	if (C33->Text == ",")
	{
		C33->Text = System::Convert::ToString(0);
	}
}
private: System::Void C34_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C34->Text == "")
	{
		C34->Text = System::Convert::ToString(0);
	}
	if (C34->Text == "-")
	{
		C34->Text = System::Convert::ToString(0);
	}
	if (C34->Text == ",-")
	{
		C34->Text = System::Convert::ToString(0);
	}
	if (C34->Text == "-,")
	{
		C34->Text = System::Convert::ToString(0);
	}
	if (C34->Text == ",")
	{
		C34->Text = System::Convert::ToString(0);
	}
}
private: System::Void C35_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C35->Text == "")
	{
		C35->Text = System::Convert::ToString(0);
	}
	if (C35->Text == "-")
	{
		C35->Text = System::Convert::ToString(0);
	}
	if (C35->Text == ",-")
	{
		C35->Text = System::Convert::ToString(0);
	}
	if (C35->Text == "-,")
	{
		C35->Text = System::Convert::ToString(0);
	}
	if (C35->Text == ",")
	{
		C35->Text = System::Convert::ToString(0);
	}
}
private: System::Void C41_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C41->Text == "")
	{
		C41->Text = System::Convert::ToString(0);
	}
	if (C41->Text == "-")
	{
		C41->Text = System::Convert::ToString(0);
	}
	if (C41->Text == ",-")
	{
		C41->Text = System::Convert::ToString(0);
	}
	if (C41->Text == "-,")
	{
		C41->Text = System::Convert::ToString(0);
	}
	if (C41->Text == ",")
	{
		C41->Text = System::Convert::ToString(0);
	}
}
private: System::Void C42_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C42->Text == "")
	{
		C42->Text = System::Convert::ToString(0);
	}
	if (C42->Text == "-")
	{
		C42->Text = System::Convert::ToString(0);
	}
	if (C42->Text == ",-")
	{
		C42->Text = System::Convert::ToString(0);
	}
	if (C42->Text == "-,")
	{
		C42->Text = System::Convert::ToString(0);
	}
	if (C42->Text == ",")
	{
		C42->Text = System::Convert::ToString(0);
	}
}
private: System::Void C43_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C43->Text == "")
	{
		C43->Text = System::Convert::ToString(0);
	}
	if (C43->Text == "-")
	{
		C43->Text = System::Convert::ToString(0);
	}
	if (C43->Text == ",-")
	{
		C43->Text = System::Convert::ToString(0);
	}
	if (C43->Text == "-,")
	{
		C43->Text = System::Convert::ToString(0);
	}
	if (C43->Text == ",")
	{
		C43->Text = System::Convert::ToString(0);
	}
}
private: System::Void C44_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C44->Text == "")
	{
		C44->Text = System::Convert::ToString(0);
	}
	if (C44->Text == "-")
	{
		C44->Text = System::Convert::ToString(0);
	}
	if (C44->Text == ",-")
	{
		C44->Text = System::Convert::ToString(0);
	}
	if (C44->Text == "-,")
	{
		C44->Text = System::Convert::ToString(0);
	}
	if (C44->Text == ",")
	{
		C44->Text = System::Convert::ToString(0);
	}
}
private: System::Void C45_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C45->Text == "")
	{
		C45->Text = System::Convert::ToString(0);
	}
	if (C45->Text == "-")
	{
		C45->Text = System::Convert::ToString(0);
	}
	if (C45->Text == ",-")
	{
		C45->Text = System::Convert::ToString(0);
	}
	if (C45->Text == "-,")
	{
		C45->Text = System::Convert::ToString(0);
	}
	if (C45->Text == ",")
	{
		C45->Text = System::Convert::ToString(0);
	}
}
private: System::Void C51_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C51->Text == "")
	{
		C51->Text = System::Convert::ToString(0);
	}
	if (C51->Text == "-")
	{
		C51->Text = System::Convert::ToString(0);
	}
	if (C51->Text == ",-")
	{
		C51->Text = System::Convert::ToString(0);
	}
	if (C51->Text == "-,")
	{
		C51->Text = System::Convert::ToString(0);
	}
	if (C51->Text == ",")
	{
		C51->Text = System::Convert::ToString(0);
	}
}
private: System::Void C52_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C52->Text == "")
	{
		C52->Text = System::Convert::ToString(0);
	}
	if (C52->Text == "-")
	{
		C52->Text = System::Convert::ToString(0);
	}
	if (C52->Text == ",-")
	{
		C52->Text = System::Convert::ToString(0);
	}
	if (C52->Text == "-,")
	{
		C52->Text = System::Convert::ToString(0);
	}
	if (C52->Text == ",")
	{
		C52->Text = System::Convert::ToString(0);
	}
}
private: System::Void C53_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C53->Text == "")
	{
		C53->Text = System::Convert::ToString(0);
	}
	if (C53->Text == "-")
	{
		C53->Text = System::Convert::ToString(0);
	}
	if (C53->Text == ",-")
	{
		C53->Text = System::Convert::ToString(0);
	}
	if (C53->Text == "-,")
	{
		C53->Text = System::Convert::ToString(0);
	}
	if (C53->Text == ",")
	{
		C53->Text = System::Convert::ToString(0);
	}
}
private: System::Void C54_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C54->Text == "")
	{
		C54->Text = System::Convert::ToString(0);
	}
	if (C54->Text == "-")
	{
		C54->Text = System::Convert::ToString(0);
	}
	if (C54->Text == ",-")
	{
		C54->Text = System::Convert::ToString(0);
	}
	if (C54->Text == "-,")
	{
		C54->Text = System::Convert::ToString(0);
	}
	if (C54->Text == ",")
	{
		C54->Text = System::Convert::ToString(0);
	}
}
private: System::Void C55_Leave(System::Object^  sender, System::EventArgs^  e)
{
	if (C55->Text == "")
	{
		C55->Text = System::Convert::ToString(0);
	}
	if (C55->Text == "-")
	{
		C55->Text = System::Convert::ToString(0);
	}
	if (C55->Text == ",-")
	{
		C55->Text = System::Convert::ToString(0);
	}
	if (C55->Text == "-,")
	{
		C55->Text = System::Convert::ToString(0);
	}
	if (C55->Text == ",")
	{
		C55->Text = System::Convert::ToString(0);
	}
}



private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};

}
