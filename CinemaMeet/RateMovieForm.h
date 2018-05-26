#pragma once
#include "Models\DataForm.h"
#include "Models\Rating.h"
#include "Models\Movie.h"
#include "Utility.h"

namespace CinemaMeet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MovieForm
	/// </summary>
	public ref class RateMovieForm : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Label^  ChooseMovieLabel;
	private: System::Windows::Forms::ComboBox^  MovieComboBox;

	private: System::Windows::Forms::PictureBox^  storyPictureBox1;
	private: System::Windows::Forms::PictureBox^  storyPictureBox2;
	private: System::Windows::Forms::PictureBox^  storyPictureBox3;
	private: System::Windows::Forms::PictureBox^  storyPictureBox4;
	private: System::Windows::Forms::PictureBox^  storyPictureBox5;
	private: System::Windows::Forms::PictureBox^  directPictureBox5;
	private: System::Windows::Forms::PictureBox^  directPictureBox4;
	private: System::Windows::Forms::PictureBox^  directPictureBox3;
	private: System::Windows::Forms::PictureBox^  directPictureBox2;
	private: System::Windows::Forms::PictureBox^  directPictureBox1;
	private: System::Windows::Forms::PictureBox^  graphicPictureBox5;
	private: System::Windows::Forms::PictureBox^  graphicPictureBox4;
	private: System::Windows::Forms::PictureBox^  graphicPictureBox3;
	private: System::Windows::Forms::PictureBox^  graphicPictureBox2;
	private: System::Windows::Forms::PictureBox^  graphicPictureBox1;
	private: System::Windows::Forms::PictureBox^  actingPictureBox5;
	private: System::Windows::Forms::PictureBox^  actingPictureBox4;
	private: System::Windows::Forms::PictureBox^  actingPictureBox3;
	private: System::Windows::Forms::PictureBox^  actingPictureBox2;
	private: System::Windows::Forms::PictureBox^  actingPictureBox1;
	private: System::Windows::Forms::PictureBox^  scorePictureBox5;
	private: System::Windows::Forms::PictureBox^  scorePictureBox4;
	private: System::Windows::Forms::PictureBox^  scorePictureBox3;
	private: System::Windows::Forms::PictureBox^  scorePictureBox2;
	private: System::Windows::Forms::PictureBox^  scorePictureBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;

	private: int story = 0;
	private: int directing = 0;
	private: int graphics = 0;
	private: int acting = 0;
	private: int score = 0;

	private: array<System::Windows::Forms::PictureBox^>^ storyStars;
	private: array<System::Windows::Forms::PictureBox^>^ directingStars;
	private: array<System::Windows::Forms::PictureBox^>^ graphicsStars;
	private: array<System::Windows::Forms::PictureBox^>^ actingStars;
	private: array<System::Windows::Forms::PictureBox^>^ scoreStars;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  VoteComboBox;

	private: System::Windows::Forms::Button^  AddVoteButton;
	private: System::Windows::Forms::ComboBox^  UserTypeComboBox;
	private: System::Windows::Forms::Button^  AddButton;


	public:
		DataForm ^ ParentForm;
		RateMovieForm(DataForm^ parentForm)
		{
			InitializeComponent();
			ParentForm = parentForm;
			ParentForm->Hide();

			MovieComboBox->Items->Clear();
			MovieComboBox->Items->AddRange(Utility::ReadFileNames(MOVIES_PATH));

			storyStars = gcnew array<System::Windows::Forms::PictureBox^> { storyPictureBox1, storyPictureBox2, storyPictureBox3, storyPictureBox4, storyPictureBox5 };
			directingStars = gcnew array<System::Windows::Forms::PictureBox^> { directPictureBox1, directPictureBox2, directPictureBox3, directPictureBox4, directPictureBox5 };
			graphicsStars = gcnew array<System::Windows::Forms::PictureBox^> { graphicPictureBox1, graphicPictureBox2, graphicPictureBox3, graphicPictureBox4, graphicPictureBox5 };
			actingStars = gcnew array<System::Windows::Forms::PictureBox^> { actingPictureBox1, actingPictureBox2, actingPictureBox3, actingPictureBox4, actingPictureBox5 };
			scoreStars = gcnew array<System::Windows::Forms::PictureBox^> { scorePictureBox1, scorePictureBox2, scorePictureBox3, scorePictureBox4, scorePictureBox5 };
			InitButtonsImages();
		}

		void InitButtonsImages() {
			for each(System::Windows::Forms::PictureBox^ img in storyStars) EmptyStarPictureBox(img);
			for each(System::Windows::Forms::PictureBox^ img in directingStars) EmptyStarPictureBox(img);
			for each(System::Windows::Forms::PictureBox^ img in graphicsStars) EmptyStarPictureBox(img);
			for each(System::Windows::Forms::PictureBox^ img in actingStars) EmptyStarPictureBox(img);
			for each(System::Windows::Forms::PictureBox^ img in scoreStars) EmptyStarPictureBox(img);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RateMovieForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->storyPictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->storyPictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->storyPictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->storyPictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->storyPictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->ChooseMovieLabel = (gcnew System::Windows::Forms::Label());
			this->MovieComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->directPictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->directPictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->directPictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->directPictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->directPictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->graphicPictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->graphicPictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->graphicPictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->graphicPictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->graphicPictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->actingPictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->actingPictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->actingPictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->actingPictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->actingPictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->scorePictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->scorePictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->scorePictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->scorePictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->scorePictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->VoteComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddVoteButton = (gcnew System::Windows::Forms::Button());
			this->UserTypeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// storyPictureBox1
			// 
			this->storyPictureBox1->Location = System::Drawing::Point(293, 174);
			this->storyPictureBox1->Name = L"storyPictureBox1";
			this->storyPictureBox1->Size = System::Drawing::Size(40, 32);
			this->storyPictureBox1->TabIndex = 0;
			this->storyPictureBox1->TabStop = false;
			this->storyPictureBox1->Click += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox1_Click);
			this->storyPictureBox1->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox1_MouseEnter);
			this->storyPictureBox1->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::StoryPictureBox_MouseLeave);
			// 
			// storyPictureBox2
			// 
			this->storyPictureBox2->Location = System::Drawing::Point(332, 174);
			this->storyPictureBox2->Name = L"storyPictureBox2";
			this->storyPictureBox2->Size = System::Drawing::Size(40, 32);
			this->storyPictureBox2->TabIndex = 1;
			this->storyPictureBox2->TabStop = false;
			this->storyPictureBox2->Click += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox2_Click);
			this->storyPictureBox2->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox2_MouseEnter);
			this->storyPictureBox2->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::StoryPictureBox_MouseLeave);
			// 
			// storyPictureBox3
			// 
			this->storyPictureBox3->Location = System::Drawing::Point(371, 174);
			this->storyPictureBox3->Name = L"storyPictureBox3";
			this->storyPictureBox3->Size = System::Drawing::Size(40, 32);
			this->storyPictureBox3->TabIndex = 2;
			this->storyPictureBox3->TabStop = false;
			this->storyPictureBox3->Click += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox3_Click);
			this->storyPictureBox3->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox3_MouseEnter);
			this->storyPictureBox3->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::StoryPictureBox_MouseLeave);
			// 
			// storyPictureBox4
			// 
			this->storyPictureBox4->Location = System::Drawing::Point(410, 174);
			this->storyPictureBox4->Name = L"storyPictureBox4";
			this->storyPictureBox4->Size = System::Drawing::Size(40, 32);
			this->storyPictureBox4->TabIndex = 3;
			this->storyPictureBox4->TabStop = false;
			this->storyPictureBox4->Click += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox4_Click);
			this->storyPictureBox4->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox4_MouseEnter);
			this->storyPictureBox4->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::StoryPictureBox_MouseLeave);
			// 
			// storyPictureBox5
			// 
			this->storyPictureBox5->Location = System::Drawing::Point(449, 174);
			this->storyPictureBox5->Name = L"storyPictureBox5";
			this->storyPictureBox5->Size = System::Drawing::Size(32, 32);
			this->storyPictureBox5->TabIndex = 4;
			this->storyPictureBox5->TabStop = false;
			this->storyPictureBox5->Click += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox5_Click);
			this->storyPictureBox5->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::storyPictureBox5_MouseEnter);
			this->storyPictureBox5->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::StoryPictureBox_MouseLeave);
			// 
			// ChooseMovieLabel
			// 
			this->ChooseMovieLabel->AutoSize = true;
			this->ChooseMovieLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->ChooseMovieLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ChooseMovieLabel->Location = System::Drawing::Point(26, 91);
			this->ChooseMovieLabel->Name = L"ChooseMovieLabel";
			this->ChooseMovieLabel->Size = System::Drawing::Size(131, 21);
			this->ChooseMovieLabel->TabIndex = 5;
			this->ChooseMovieLabel->Text = L"Âûáåðèòå ôèëüì";
			// 
			// MovieComboBox
			// 
			this->MovieComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->MovieComboBox->FormattingEnabled = true;
			this->MovieComboBox->Location = System::Drawing::Point(30, 115);
			this->MovieComboBox->Name = L"MovieComboBox";
			this->MovieComboBox->Size = System::Drawing::Size(451, 29);
			this->MovieComboBox->TabIndex = 6;
			// 
			// directPictureBox5
			// 
			this->directPictureBox5->Location = System::Drawing::Point(449, 221);
			this->directPictureBox5->Name = L"directPictureBox5";
			this->directPictureBox5->Size = System::Drawing::Size(32, 32);
			this->directPictureBox5->TabIndex = 11;
			this->directPictureBox5->TabStop = false;
			this->directPictureBox5->Click += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox5_Click);
			this->directPictureBox5->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox5_MouseEnter);
			this->directPictureBox5->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::DirectingPictureBox_MouseLeave);
			// 
			// directPictureBox4
			// 
			this->directPictureBox4->Location = System::Drawing::Point(410, 221);
			this->directPictureBox4->Name = L"directPictureBox4";
			this->directPictureBox4->Size = System::Drawing::Size(40, 32);
			this->directPictureBox4->TabIndex = 10;
			this->directPictureBox4->TabStop = false;
			this->directPictureBox4->Click += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox4_Click);
			this->directPictureBox4->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox4_MouseEnter);
			this->directPictureBox4->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::DirectingPictureBox_MouseLeave);
			// 
			// directPictureBox3
			// 
			this->directPictureBox3->Location = System::Drawing::Point(371, 221);
			this->directPictureBox3->Name = L"directPictureBox3";
			this->directPictureBox3->Size = System::Drawing::Size(40, 32);
			this->directPictureBox3->TabIndex = 9;
			this->directPictureBox3->TabStop = false;
			this->directPictureBox3->Click += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox3_Click);
			this->directPictureBox3->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox3_MouseEnter);
			this->directPictureBox3->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::DirectingPictureBox_MouseLeave);
			// 
			// directPictureBox2
			// 
			this->directPictureBox2->Location = System::Drawing::Point(332, 221);
			this->directPictureBox2->Name = L"directPictureBox2";
			this->directPictureBox2->Size = System::Drawing::Size(40, 32);
			this->directPictureBox2->TabIndex = 8;
			this->directPictureBox2->TabStop = false;
			this->directPictureBox2->Click += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox2_Click);
			this->directPictureBox2->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox2_MouseEnter);
			this->directPictureBox2->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::DirectingPictureBox_MouseLeave);
			// 
			// directPictureBox1
			// 
			this->directPictureBox1->Location = System::Drawing::Point(293, 221);
			this->directPictureBox1->Name = L"directPictureBox1";
			this->directPictureBox1->Size = System::Drawing::Size(40, 32);
			this->directPictureBox1->TabIndex = 7;
			this->directPictureBox1->TabStop = false;
			this->directPictureBox1->Click += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox1_Click);
			this->directPictureBox1->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::directPictureBox1_MouseEnter);
			this->directPictureBox1->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::DirectingPictureBox_MouseLeave);
			// 
			// graphicPictureBox5
			// 
			this->graphicPictureBox5->Location = System::Drawing::Point(449, 270);
			this->graphicPictureBox5->Name = L"graphicPictureBox5";
			this->graphicPictureBox5->Size = System::Drawing::Size(32, 32);
			this->graphicPictureBox5->TabIndex = 16;
			this->graphicPictureBox5->TabStop = false;
			this->graphicPictureBox5->Click += gcnew System::EventHandler(this, &RateMovieForm::graphicPictureBox5_Click);
			this->graphicPictureBox5->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::graphicsPictureBox5_MouseEnter);
			this->graphicPictureBox5->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::GraphicsPictureBox_MouseLeave);
			// 
			// graphicPictureBox4
			// 
			this->graphicPictureBox4->Location = System::Drawing::Point(410, 270);
			this->graphicPictureBox4->Name = L"graphicPictureBox4";
			this->graphicPictureBox4->Size = System::Drawing::Size(40, 32);
			this->graphicPictureBox4->TabIndex = 15;
			this->graphicPictureBox4->TabStop = false;
			this->graphicPictureBox4->Click += gcnew System::EventHandler(this, &RateMovieForm::graphicPictureBox4_Click);
			this->graphicPictureBox4->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::graphicsPictureBox4_MouseEnter);
			this->graphicPictureBox4->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::GraphicsPictureBox_MouseLeave);
			// 
			// graphicPictureBox3
			// 
			this->graphicPictureBox3->Location = System::Drawing::Point(371, 270);
			this->graphicPictureBox3->Name = L"graphicPictureBox3";
			this->graphicPictureBox3->Size = System::Drawing::Size(40, 32);
			this->graphicPictureBox3->TabIndex = 14;
			this->graphicPictureBox3->TabStop = false;
			this->graphicPictureBox3->Click += gcnew System::EventHandler(this, &RateMovieForm::graphicPictureBox3_Click);
			this->graphicPictureBox3->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::graphicsPictureBox3_MouseEnter);
			this->graphicPictureBox3->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::GraphicsPictureBox_MouseLeave);
			// 
			// graphicPictureBox2
			// 
			this->graphicPictureBox2->Location = System::Drawing::Point(332, 270);
			this->graphicPictureBox2->Name = L"graphicPictureBox2";
			this->graphicPictureBox2->Size = System::Drawing::Size(40, 32);
			this->graphicPictureBox2->TabIndex = 13;
			this->graphicPictureBox2->TabStop = false;
			this->graphicPictureBox2->Click += gcnew System::EventHandler(this, &RateMovieForm::graphicPictureBox2_Click);
			this->graphicPictureBox2->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::graphicsPictureBox2_MouseEnter);
			this->graphicPictureBox2->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::GraphicsPictureBox_MouseLeave);
			// 
			// graphicPictureBox1
			// 
			this->graphicPictureBox1->Location = System::Drawing::Point(293, 270);
			this->graphicPictureBox1->Name = L"graphicPictureBox1";
			this->graphicPictureBox1->Size = System::Drawing::Size(40, 32);
			this->graphicPictureBox1->TabIndex = 12;
			this->graphicPictureBox1->TabStop = false;
			this->graphicPictureBox1->Click += gcnew System::EventHandler(this, &RateMovieForm::graphicPictureBox1_Click);
			this->graphicPictureBox1->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::graphicsPictureBox1_MouseEnter);
			this->graphicPictureBox1->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::GraphicsPictureBox_MouseLeave);
			// 
			// actingPictureBox5
			// 
			this->actingPictureBox5->Location = System::Drawing::Point(449, 319);
			this->actingPictureBox5->Name = L"actingPictureBox5";
			this->actingPictureBox5->Size = System::Drawing::Size(32, 32);
			this->actingPictureBox5->TabIndex = 21;
			this->actingPictureBox5->TabStop = false;
			this->actingPictureBox5->Click += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox5_Click);
			this->actingPictureBox5->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox5_MouseEnter);
			this->actingPictureBox5->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ActingPictureBox_MouseLeave);
			// 
			// actingPictureBox4
			// 
			this->actingPictureBox4->Location = System::Drawing::Point(410, 319);
			this->actingPictureBox4->Name = L"actingPictureBox4";
			this->actingPictureBox4->Size = System::Drawing::Size(40, 32);
			this->actingPictureBox4->TabIndex = 20;
			this->actingPictureBox4->TabStop = false;
			this->actingPictureBox4->Click += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox4_Click);
			this->actingPictureBox4->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox4_MouseEnter);
			this->actingPictureBox4->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ActingPictureBox_MouseLeave);
			// 
			// actingPictureBox3
			// 
			this->actingPictureBox3->Location = System::Drawing::Point(371, 319);
			this->actingPictureBox3->Name = L"actingPictureBox3";
			this->actingPictureBox3->Size = System::Drawing::Size(40, 32);
			this->actingPictureBox3->TabIndex = 19;
			this->actingPictureBox3->TabStop = false;
			this->actingPictureBox3->Click += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox3_Click);
			this->actingPictureBox3->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox3_MouseEnter);
			this->actingPictureBox3->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ActingPictureBox_MouseLeave);
			// 
			// actingPictureBox2
			// 
			this->actingPictureBox2->Location = System::Drawing::Point(332, 319);
			this->actingPictureBox2->Name = L"actingPictureBox2";
			this->actingPictureBox2->Size = System::Drawing::Size(40, 32);
			this->actingPictureBox2->TabIndex = 18;
			this->actingPictureBox2->TabStop = false;
			this->actingPictureBox2->Click += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox2_Click);
			this->actingPictureBox2->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox2_MouseEnter);
			this->actingPictureBox2->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ActingPictureBox_MouseLeave);
			// 
			// actingPictureBox1
			// 
			this->actingPictureBox1->Location = System::Drawing::Point(293, 319);
			this->actingPictureBox1->Name = L"actingPictureBox1";
			this->actingPictureBox1->Size = System::Drawing::Size(40, 32);
			this->actingPictureBox1->TabIndex = 17;
			this->actingPictureBox1->TabStop = false;
			this->actingPictureBox1->Click += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox1_Click);
			this->actingPictureBox1->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::actingPictureBox1_MouseEnter);
			this->actingPictureBox1->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ActingPictureBox_MouseLeave);
			// 
			// scorePictureBox5
			// 
			this->scorePictureBox5->Location = System::Drawing::Point(449, 375);
			this->scorePictureBox5->Name = L"scorePictureBox5";
			this->scorePictureBox5->Size = System::Drawing::Size(32, 32);
			this->scorePictureBox5->TabIndex = 26;
			this->scorePictureBox5->TabStop = false;
			this->scorePictureBox5->Click += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox5_Click);
			this->scorePictureBox5->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox5_MouseEnter);
			this->scorePictureBox5->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ScorePictureBox_MouseLeave);
			// 
			// scorePictureBox4
			// 
			this->scorePictureBox4->Location = System::Drawing::Point(410, 375);
			this->scorePictureBox4->Name = L"scorePictureBox4";
			this->scorePictureBox4->Size = System::Drawing::Size(40, 32);
			this->scorePictureBox4->TabIndex = 25;
			this->scorePictureBox4->TabStop = false;
			this->scorePictureBox4->Click += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox4_Click);
			this->scorePictureBox4->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox4_MouseEnter);
			this->scorePictureBox4->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ScorePictureBox_MouseLeave);
			// 
			// scorePictureBox3
			// 
			this->scorePictureBox3->Location = System::Drawing::Point(371, 375);
			this->scorePictureBox3->Name = L"scorePictureBox3";
			this->scorePictureBox3->Size = System::Drawing::Size(40, 32);
			this->scorePictureBox3->TabIndex = 24;
			this->scorePictureBox3->TabStop = false;
			this->scorePictureBox3->Click += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox3_Click);
			this->scorePictureBox3->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox3_MouseEnter);
			this->scorePictureBox3->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ScorePictureBox_MouseLeave);
			// 
			// scorePictureBox2
			// 
			this->scorePictureBox2->Location = System::Drawing::Point(332, 375);
			this->scorePictureBox2->Name = L"scorePictureBox2";
			this->scorePictureBox2->Size = System::Drawing::Size(40, 32);
			this->scorePictureBox2->TabIndex = 23;
			this->scorePictureBox2->TabStop = false;
			this->scorePictureBox2->Click += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox2_Click);
			this->scorePictureBox2->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox2_MouseEnter);
			this->scorePictureBox2->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ScorePictureBox_MouseLeave);
			// 
			// scorePictureBox1
			// 
			this->scorePictureBox1->Location = System::Drawing::Point(293, 375);
			this->scorePictureBox1->Name = L"scorePictureBox1";
			this->scorePictureBox1->Size = System::Drawing::Size(40, 32);
			this->scorePictureBox1->TabIndex = 22;
			this->scorePictureBox1->TabStop = false;
			this->scorePictureBox1->Click += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox1_Click);
			this->scorePictureBox1->MouseEnter += gcnew System::EventHandler(this, &RateMovieForm::scorePictureBox1_MouseEnter);
			this->scorePictureBox1->MouseLeave += gcnew System::EventHandler(this, &RateMovieForm::ScorePictureBox_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label1->Location = System::Drawing::Point(25, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 21);
			this->label1->TabIndex = 27;
			this->label1->Text = L"ÑÞÆÅÒ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label2->Location = System::Drawing::Point(25, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 21);
			this->label2->TabIndex = 28;
			this->label2->Text = L"ÐÅÆÈÑÑÓÐÀ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label3->Location = System::Drawing::Point(26, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 21);
			this->label3->TabIndex = 29;
			this->label3->Text = L"ÃÐÀÔÈÊÀ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label4->Location = System::Drawing::Point(25, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 21);
			this->label4->TabIndex = 30;
			this->label4->Text = L"ÈÑÏÎËÍÅÍÈÅ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label5->Location = System::Drawing::Point(26, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 21);
			this->label5->TabIndex = 31;
			this->label5->Text = L"ÎÖÅÍÊÀ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Location = System::Drawing::Point(-8, 368);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(508, 1);
			this->panel1->TabIndex = 32;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel2->Location = System::Drawing::Point(-8, 163);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(508, 1);
			this->panel2->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->label6->Location = System::Drawing::Point(26, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 21);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Ãîëîñóþùèé";
			// 
			// VoteComboBox
			// 
			this->VoteComboBox->Enabled = false;
			this->VoteComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VoteComboBox->FormattingEnabled = true;
			this->VoteComboBox->Location = System::Drawing::Point(30, 37);
			this->VoteComboBox->Name = L"VoteComboBox";
			this->VoteComboBox->Size = System::Drawing::Size(324, 29);
			this->VoteComboBox->TabIndex = 35;
			// 
			// AddVoteButton
			// 
			this->AddVoteButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->AddVoteButton->Location = System::Drawing::Point(432, 421);
			this->AddVoteButton->Name = L"AddVoteButton";
			this->AddVoteButton->Size = System::Drawing::Size(53, 36);
			this->AddVoteButton->TabIndex = 36;
			this->AddVoteButton->Text = L"OK";
			this->AddVoteButton->UseVisualStyleBackColor = true;
			this->AddVoteButton->Click += gcnew System::EventHandler(this, &RateMovieForm::AddVoteButton_Click);
			// 
			// UserTypeComboBox
			// 
			this->UserTypeComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->UserTypeComboBox->FormattingEnabled = true;
			this->UserTypeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ãîñòü", L"Æþðè" });
			this->UserTypeComboBox->Location = System::Drawing::Point(360, 37);
			this->UserTypeComboBox->Name = L"UserTypeComboBox";
			this->UserTypeComboBox->Size = System::Drawing::Size(121, 29);
			this->UserTypeComboBox->TabIndex = 37;
			this->UserTypeComboBox->TextChanged += gcnew System::EventHandler(this, &RateMovieForm::UserTypeComboBox_TextChanged);
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(293, 420);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(133, 36);
			this->AddButton->TabIndex = 38;
			this->AddButton->Text = L"Äîáàâèòü";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &RateMovieForm::AddButton_Click);
			// 
			// RateMovieForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 469);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->UserTypeComboBox);
			this->Controls->Add(this->AddVoteButton);
			this->Controls->Add(this->VoteComboBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->scorePictureBox5);
			this->Controls->Add(this->scorePictureBox4);
			this->Controls->Add(this->scorePictureBox3);
			this->Controls->Add(this->scorePictureBox2);
			this->Controls->Add(this->scorePictureBox1);
			this->Controls->Add(this->actingPictureBox5);
			this->Controls->Add(this->actingPictureBox4);
			this->Controls->Add(this->actingPictureBox3);
			this->Controls->Add(this->actingPictureBox2);
			this->Controls->Add(this->actingPictureBox1);
			this->Controls->Add(this->graphicPictureBox5);
			this->Controls->Add(this->graphicPictureBox4);
			this->Controls->Add(this->graphicPictureBox3);
			this->Controls->Add(this->graphicPictureBox2);
			this->Controls->Add(this->graphicPictureBox1);
			this->Controls->Add(this->directPictureBox5);
			this->Controls->Add(this->directPictureBox4);
			this->Controls->Add(this->directPictureBox3);
			this->Controls->Add(this->directPictureBox2);
			this->Controls->Add(this->directPictureBox1);
			this->Controls->Add(this->MovieComboBox);
			this->Controls->Add(this->ChooseMovieLabel);
			this->Controls->Add(this->storyPictureBox5);
			this->Controls->Add(this->storyPictureBox4);
			this->Controls->Add(this->storyPictureBox3);
			this->Controls->Add(this->storyPictureBox2);
			this->Controls->Add(this->storyPictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RateMovieForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RateMovieForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->storyPictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->directPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphicPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->actingPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scorePictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	protected: virtual void OnClosed(System::EventArgs^ e) override
	{
		ParentForm->UpdateData(1);
		ParentForm->Show();
	}

	private: System::Void FillStarPictureBox(System::Windows::Forms::PictureBox^  picture)
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RateMovieForm::typeid));
		picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star_fill")));
	}
	private: System::Void EmptyStarPictureBox(System::Windows::Forms::PictureBox^  picture)
	{
		System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RateMovieForm::typeid));
		picture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"star_outer")));
	}

	private: System::Void StoryPictureBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) { StarsPictureBox_MouseLeave(storyStars, story); }
	private: System::Void DirectingPictureBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) { StarsPictureBox_MouseLeave(directingStars, directing); }
	private: System::Void GraphicsPictureBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) { StarsPictureBox_MouseLeave(graphicsStars, graphics); }
	private: System::Void ActingPictureBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) { StarsPictureBox_MouseLeave(actingStars, acting); }
	private: System::Void ScorePictureBox_MouseLeave(System::Object^  sender, System::EventArgs^  e) { StarsPictureBox_MouseLeave(scoreStars, score); }

			 void StarsPictureBox_MouseLeave(array<System::Windows::Forms::PictureBox^>^ stars, int value)
			 {
				 switch (value)
				 {
				 case 0:
					 EmptyStarPictureBox(stars[0]);
					 EmptyStarPictureBox(stars[1]);
					 EmptyStarPictureBox(stars[2]);
					 EmptyStarPictureBox(stars[3]);
					 EmptyStarPictureBox(stars[4]);
					 break;
				 case 1:
					 FillFirstStar(stars);
					 break;
				 case 2:
					 FillSecondStar(stars);
					 break;
				 case 3:
					 FillThirdStar(stars);
					 break;
				 case 4:
					 FillFourthStar(stars);
					 break;
				 case 5:
					 FillFiveStar(stars);
					 break;
				 default:
					 break;
				 }
			 }

	private: System::Void storyPictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFirstStar(storyStars); }
	private: System::Void storyPictureBox2_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillSecondStar(storyStars); }
	private: System::Void storyPictureBox3_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillThirdStar(storyStars); }
	private: System::Void storyPictureBox4_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFourthStar(storyStars); }
	private: System::Void storyPictureBox5_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFiveStar(storyStars); }

	private: System::Void directPictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFirstStar(directingStars); }
	private: System::Void directPictureBox2_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillSecondStar(directingStars); }
	private: System::Void directPictureBox3_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillThirdStar(directingStars); }
	private: System::Void directPictureBox4_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFourthStar(directingStars); }
	private: System::Void directPictureBox5_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFiveStar(directingStars); }

	private: System::Void graphicsPictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFirstStar(graphicsStars); }
	private: System::Void graphicsPictureBox2_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillSecondStar(graphicsStars); }
	private: System::Void graphicsPictureBox3_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillThirdStar(graphicsStars); }
	private: System::Void graphicsPictureBox4_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFourthStar(graphicsStars); }
	private: System::Void graphicsPictureBox5_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFiveStar(graphicsStars); }

	private: System::Void actingPictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFirstStar(actingStars); }
	private: System::Void actingPictureBox2_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillSecondStar(actingStars); }
	private: System::Void actingPictureBox3_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillThirdStar(actingStars); }
	private: System::Void actingPictureBox4_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFourthStar(actingStars); }
	private: System::Void actingPictureBox5_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFiveStar(actingStars); }

	private: System::Void scorePictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFirstStar(scoreStars); }
	private: System::Void scorePictureBox2_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillSecondStar(scoreStars); }
	private: System::Void scorePictureBox3_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillThirdStar(scoreStars); }
	private: System::Void scorePictureBox4_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFourthStar(scoreStars); }
	private: System::Void scorePictureBox5_MouseEnter(System::Object^  sender, System::EventArgs^  e) { FillFiveStar(scoreStars); }

			 void FillFirstStar(array<System::Windows::Forms::PictureBox^>^ starsArray)
			 {
				 FillStarPictureBox(starsArray[0]);
				 EmptyStarPictureBox(starsArray[1]);
				 EmptyStarPictureBox(starsArray[2]);
				 EmptyStarPictureBox(starsArray[3]);
				 EmptyStarPictureBox(starsArray[4]);
			 }

			 void FillSecondStar(array<System::Windows::Forms::PictureBox^>^ starsArray)
			 {
				 FillStarPictureBox(starsArray[0]);
				 FillStarPictureBox(starsArray[1]);
				 EmptyStarPictureBox(starsArray[2]);
				 EmptyStarPictureBox(starsArray[3]);
				 EmptyStarPictureBox(starsArray[4]);
			 }

			 void FillThirdStar(array<System::Windows::Forms::PictureBox^>^ starsArray)
			 {
				 FillStarPictureBox(starsArray[0]);
				 FillStarPictureBox(starsArray[1]);
				 FillStarPictureBox(starsArray[2]);
				 EmptyStarPictureBox(starsArray[3]);
				 EmptyStarPictureBox(starsArray[4]);
			 }

			 void FillFourthStar(array<System::Windows::Forms::PictureBox^>^ starsArray)
			 {
				 FillStarPictureBox(starsArray[0]);
				 FillStarPictureBox(starsArray[1]);
				 FillStarPictureBox(starsArray[2]);
				 FillStarPictureBox(starsArray[3]);
				 EmptyStarPictureBox(starsArray[4]);
			 }

			 void FillFiveStar(array<System::Windows::Forms::PictureBox^>^ starsArray)
			 {
				 FillStarPictureBox(starsArray[0]);
				 FillStarPictureBox(starsArray[1]);
				 FillStarPictureBox(starsArray[2]);
				 FillStarPictureBox(starsArray[3]);
				 FillStarPictureBox(starsArray[4]);
			 }

	private: System::Void storyPictureBox1_Click(System::Object^  sender, System::EventArgs^  e) { story = 1; }
	private: System::Void storyPictureBox2_Click(System::Object^  sender, System::EventArgs^  e) { story = 2; }
	private: System::Void storyPictureBox3_Click(System::Object^  sender, System::EventArgs^  e) { story = 3; }
	private: System::Void storyPictureBox4_Click(System::Object^  sender, System::EventArgs^  e) { story = 4; }
	private: System::Void storyPictureBox5_Click(System::Object^  sender, System::EventArgs^  e) { story = 5; }

	private: System::Void directPictureBox1_Click(System::Object^  sender, System::EventArgs^  e) { directing = 1; }
	private: System::Void directPictureBox2_Click(System::Object^  sender, System::EventArgs^  e) { directing = 2; }
	private: System::Void directPictureBox3_Click(System::Object^  sender, System::EventArgs^  e) { directing = 3; }
	private: System::Void directPictureBox4_Click(System::Object^  sender, System::EventArgs^  e) { directing = 4; }
	private: System::Void directPictureBox5_Click(System::Object^  sender, System::EventArgs^  e) { directing = 5; }

	private: System::Void graphicPictureBox1_Click(System::Object^  sender, System::EventArgs^  e) { graphics = 1; }
	private: System::Void graphicPictureBox2_Click(System::Object^  sender, System::EventArgs^  e) { graphics = 2; }
	private: System::Void graphicPictureBox3_Click(System::Object^  sender, System::EventArgs^  e) { graphics = 3; }
	private: System::Void graphicPictureBox4_Click(System::Object^  sender, System::EventArgs^  e) { graphics = 4; }
	private: System::Void graphicPictureBox5_Click(System::Object^  sender, System::EventArgs^  e) { graphics = 5; }

	private: System::Void actingPictureBox1_Click(System::Object^  sender, System::EventArgs^  e) { acting = 1; }
	private: System::Void actingPictureBox2_Click(System::Object^  sender, System::EventArgs^  e) { acting = 2; }
	private: System::Void actingPictureBox3_Click(System::Object^  sender, System::EventArgs^  e) { acting = 3; }
	private: System::Void actingPictureBox4_Click(System::Object^  sender, System::EventArgs^  e) { acting = 4; }
	private: System::Void actingPictureBox5_Click(System::Object^  sender, System::EventArgs^  e) { acting = 5; }

	private: System::Void scorePictureBox1_Click(System::Object^  sender, System::EventArgs^  e) { score = 1; }
	private: System::Void scorePictureBox2_Click(System::Object^  sender, System::EventArgs^  e) { score = 2; }
	private: System::Void scorePictureBox3_Click(System::Object^  sender, System::EventArgs^  e) { score = 3; }
	private: System::Void scorePictureBox4_Click(System::Object^  sender, System::EventArgs^  e) { score = 4; }
	private: System::Void scorePictureBox5_Click(System::Object^  sender, System::EventArgs^  e) { score = 5; }

	private: System::Void AddVoteButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try {
			AddRating();
			this->Close();
		}
		catch (Exception^) {
			MessageBox::Show("Çàïîëíèòå âñå ïîëÿ", "Îøèáêà");
		}
	}

	private: void AddRating() {
		Rating^ rating = RateMovieForm::ReadRatingInput();
		int userType;
		if (isGeustUserType()) { userType = 0; }
		if (isJuryUserType()) { userType = 1; }
		Rating::WriteRating(rating, userType);
		delete(rating);
	}

	private: Rating ^ RateMovieForm::ReadRatingInput()
	{
		Rating^ rating = gcnew Rating();
		rating->Story = story;
		rating->Graphics = graphics;
		rating->Acting = acting;
		rating->Directing = directing;
		rating->Score = score;
		rating->MovieName = MovieComboBox->Text;
		rating->UserName = VoteComboBox->Text;
		return rating;
	}

	private: inline bool isGeustUserType() { return UserTypeComboBox->Text->Equals(UserTypeComboBox->Items[0]); }
	private: inline bool isJuryUserType() { return UserTypeComboBox->Text->Equals(UserTypeComboBox->Items[1]); }

	private: System::Void UserTypeComboBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		VoteComboBox->Enabled = true;
		VoteComboBox->Items->Clear();
		VoteComboBox->Text = String::Empty;
		array<String^>^ FilesArray;
		array<String^>^  NamesArray;

		String^ path;
		if (isGeustUserType()) { path = "Data/Guests"; }
		if (isJuryUserType())  { path = "Data/Jury"; }
		FilesArray = System::IO::Directory::GetFiles(path);

		try
		{
			NamesArray = gcnew array<String^>(FilesArray->Length);
			for (int i = 0; i < NamesArray->Length; i++) {
				System::String^ profileName = Utility::GetFileName(FilesArray[i]);
				NamesArray[i] = profileName;
			}
			VoteComboBox->Items->AddRange(NamesArray);
		}
		catch (Exception^)
		{
			MessageBox::Show("Âûáåðèòå òèï ãîëîñóþùåãî", "Îøèáêà");
		}

		delete(FilesArray);
		delete(NamesArray);
		delete(path);
		return;
	}
	private: System::Void AddButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddRating();
		return;
	}
};
}
