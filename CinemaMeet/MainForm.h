#pragma once
#include "Utility.h"
#include "Models\Movie.h"
#include "Models\Profile.h"
#include "Models\DataForm.h"
#include "AddMovieForm.h"
#include "RateMovieForm.h"

namespace CinemaMeet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public DataForm
		//public ref class MainForm : public Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			MoviesButtonOnClick();
		}

		void FillMainComboBoxes()
		{
			AlphabetComboBox->Items->AddRange(Utility::GetAlphabetList());
			CountriesComboBox->Items->AddRange(Utility::GetCountriesList());
			GenresComboBox->Items->AddRange(Utility::GetGenresList());
			YearsComboBox->Items->AddRange(Utility::GetYearsList());
		}

		void ClearMainComboBoxes()
		{
			AlphabetComboBox->Text = String::Empty;
			CountriesComboBox->Text = String::Empty;
			GenresComboBox->Text = String::Empty;
			YearsComboBox->Text = String::Empty;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: array<Movie^>^ MoviesArray;
	private: array<String^>^ GuestsArray;
	private: array<String^>^ JuryArray;

	private: System::Windows::Forms::Panel^  NavigationPanel;
	private: System::Windows::Forms::PictureBox^  NavigationCursor;
	private: System::Windows::Forms::TabControl^  TabControl;
	private: System::Windows::Forms::Button^  NominationsButton;

	private: System::Windows::Forms::Button^  MoviesButton;
	private: System::Windows::Forms::Button^  PeoplesButton;
	private: System::Windows::Forms::TabPage^  MoviesPage;
	private: System::Windows::Forms::TabPage^  NominationsPage;


	private: System::Windows::Forms::Label^  NameLabel;
	private: System::Windows::Forms::ComboBox^  AlphabetComboBox;
	private: System::Windows::Forms::ComboBox^  YearsComboBox;
	private: System::Windows::Forms::Label^  YearLabel;
	private: System::Windows::Forms::ComboBox^  GenresComboBox;
	private: System::Windows::Forms::Label^  GenreLabel;
	private: System::Windows::Forms::Label^  CountryLabel;
	private: System::Windows::Forms::ComboBox^  CountriesComboBox;
	private: System::Windows::Forms::TabPage^  ParticipantsPage;
	private: System::Windows::Forms::ComboBox^  NominationsComboBox;


	private: System::Windows::Forms::Label^  NominationLabel;
	private: System::Windows::Forms::ListView^  MoviesListView;
	private: System::Windows::Forms::ColumnHeader^  NameHeader;
	private: System::Windows::Forms::ColumnHeader^  GenreHeader;
	private: System::Windows::Forms::ColumnHeader^  CountryHeader;
	private: System::Windows::Forms::ColumnHeader^  YearHeader;

	private: System::Windows::Forms::ColumnHeader^  DirectorHeader;
	private: System::Windows::Forms::ColumnHeader^  WriterHeader;
	private: System::Windows::Forms::ColumnHeader^  CriticScoreHeader;
	private: System::Windows::Forms::ColumnHeader^  UserScoreHeader;


	private: System::Windows::Forms::Label^  ParticipantsLabel;

	private: System::Windows::Forms::Label^  GuestsLabel;

	private: System::Windows::Forms::Label^  JuryLabel;
	private: System::Windows::Forms::Button^  AddMovieButton;

	private: System::Windows::Forms::Button^  AddJuryButton;
	private: System::Windows::Forms::Button^  AddUserButton;
	private: System::Windows::Forms::ListBox^  JuryListBox;
	private: System::Windows::Forms::ListBox^  UsersListBox;
	private: System::Windows::Forms::ListBox^  GuestsListBox;
	private: System::Windows::Forms::TextBox^  JuryTextBox;
	private: System::Windows::Forms::TextBox^  UserTextBox;
	private: System::Windows::Forms::Button^  AddGuestButton;
	private: System::Windows::Forms::TextBox^  GuestTextBox;
	private: System::Windows::Forms::Button^  ResetButton;
	private: System::Windows::Forms::Label^  GuestNominationLabel;

	private: System::Windows::Forms::Label^  JuryNominationLabel;



	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Button^  AddVoteButton;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  GuestWriterLabel;
	private: System::Windows::Forms::Label^  GuestDirectorLabel;
	private: System::Windows::Forms::Label^  GuestTimeLabel;
	private: System::Windows::Forms::Label^  GuestYearLabel;
	private: System::Windows::Forms::Label^  GuestCountryLabel;
	private: System::Windows::Forms::Label^  GuestNameLabel;
	private: System::Windows::Forms::Label^  JuryWriterLabel;
	private: System::Windows::Forms::Label^  JuryDirectorLabel;
	private: System::Windows::Forms::Label^  JuryTimeLabel;
	private: System::Windows::Forms::Label^  JuryYearLabel;
	private: System::Windows::Forms::Label^  JuryCountryLabel;
	private: System::Windows::Forms::Label^  JuryNameLabel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->NavigationPanel = (gcnew System::Windows::Forms::Panel());
			this->PeoplesButton = (gcnew System::Windows::Forms::Button());
			this->NominationsButton = (gcnew System::Windows::Forms::Button());
			this->MoviesButton = (gcnew System::Windows::Forms::Button());
			this->NavigationCursor = (gcnew System::Windows::Forms::PictureBox());
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->MoviesPage = (gcnew System::Windows::Forms::TabPage());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->AddMovieButton = (gcnew System::Windows::Forms::Button());
			this->MoviesListView = (gcnew System::Windows::Forms::ListView());
			this->NameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->GenreHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->CountryHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->YearHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->DirectorHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->WriterHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->CriticScoreHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->UserScoreHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->AlphabetComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->YearsComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->YearLabel = (gcnew System::Windows::Forms::Label());
			this->GenresComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->GenreLabel = (gcnew System::Windows::Forms::Label());
			this->CountryLabel = (gcnew System::Windows::Forms::Label());
			this->CountriesComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->NominationsPage = (gcnew System::Windows::Forms::TabPage());
			this->GuestWriterLabel = (gcnew System::Windows::Forms::Label());
			this->GuestDirectorLabel = (gcnew System::Windows::Forms::Label());
			this->GuestTimeLabel = (gcnew System::Windows::Forms::Label());
			this->GuestYearLabel = (gcnew System::Windows::Forms::Label());
			this->GuestCountryLabel = (gcnew System::Windows::Forms::Label());
			this->GuestNameLabel = (gcnew System::Windows::Forms::Label());
			this->JuryWriterLabel = (gcnew System::Windows::Forms::Label());
			this->JuryDirectorLabel = (gcnew System::Windows::Forms::Label());
			this->JuryTimeLabel = (gcnew System::Windows::Forms::Label());
			this->JuryYearLabel = (gcnew System::Windows::Forms::Label());
			this->JuryCountryLabel = (gcnew System::Windows::Forms::Label());
			this->JuryNameLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddVoteButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GuestNominationLabel = (gcnew System::Windows::Forms::Label());
			this->JuryNominationLabel = (gcnew System::Windows::Forms::Label());
			this->NominationsComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->NominationLabel = (gcnew System::Windows::Forms::Label());
			this->ParticipantsPage = (gcnew System::Windows::Forms::TabPage());
			this->JuryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UserTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddGuestButton = (gcnew System::Windows::Forms::Button());
			this->GuestTextBox = (gcnew System::Windows::Forms::TextBox());
			this->JuryListBox = (gcnew System::Windows::Forms::ListBox());
			this->UsersListBox = (gcnew System::Windows::Forms::ListBox());
			this->GuestsListBox = (gcnew System::Windows::Forms::ListBox());
			this->AddJuryButton = (gcnew System::Windows::Forms::Button());
			this->AddUserButton = (gcnew System::Windows::Forms::Button());
			this->JuryLabel = (gcnew System::Windows::Forms::Label());
			this->ParticipantsLabel = (gcnew System::Windows::Forms::Label());
			this->GuestsLabel = (gcnew System::Windows::Forms::Label());
			this->NavigationPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NavigationCursor))->BeginInit();
			this->TabControl->SuspendLayout();
			this->MoviesPage->SuspendLayout();
			this->NominationsPage->SuspendLayout();
			this->ParticipantsPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// NavigationPanel
			// 
			this->NavigationPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->NavigationPanel->Controls->Add(this->PeoplesButton);
			this->NavigationPanel->Controls->Add(this->NominationsButton);
			this->NavigationPanel->Controls->Add(this->MoviesButton);
			this->NavigationPanel->Controls->Add(this->NavigationCursor);
			this->NavigationPanel->Location = System::Drawing::Point(0, 0);
			this->NavigationPanel->Name = L"NavigationPanel";
			this->NavigationPanel->Size = System::Drawing::Size(225, 601);
			this->NavigationPanel->TabIndex = 0;
			// 
			// PeoplesButton
			// 
			this->PeoplesButton->FlatAppearance->BorderSize = 0;
			this->PeoplesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PeoplesButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PeoplesButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->PeoplesButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PeoplesButton.Image")));
			this->PeoplesButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->PeoplesButton->Location = System::Drawing::Point(15, 214);
			this->PeoplesButton->Name = L"PeoplesButton";
			this->PeoplesButton->Size = System::Drawing::Size(175, 47);
			this->PeoplesButton->TabIndex = 4;
			this->PeoplesButton->TabStop = false;
			this->PeoplesButton->Text = L"Участники";
			this->PeoplesButton->UseVisualStyleBackColor = true;
			this->PeoplesButton->Click += gcnew System::EventHandler(this, &MainForm::PeoplesButton_Click);
			// 
			// NominationsButton
			// 
			this->NominationsButton->FlatAppearance->BorderSize = 0;
			this->NominationsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NominationsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NominationsButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->NominationsButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NominationsButton.Image")));
			this->NominationsButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->NominationsButton->Location = System::Drawing::Point(15, 161);
			this->NominationsButton->Name = L"NominationsButton";
			this->NominationsButton->Size = System::Drawing::Size(175, 47);
			this->NominationsButton->TabIndex = 2;
			this->NominationsButton->TabStop = false;
			this->NominationsButton->Text = L"Номинации";
			this->NominationsButton->UseVisualStyleBackColor = true;
			this->NominationsButton->Click += gcnew System::EventHandler(this, &MainForm::RatingsButton_Click);
			// 
			// MoviesButton
			// 
			this->MoviesButton->FlatAppearance->BorderSize = 0;
			this->MoviesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MoviesButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MoviesButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->MoviesButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MoviesButton.Image")));
			this->MoviesButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MoviesButton->Location = System::Drawing::Point(15, 105);
			this->MoviesButton->Name = L"MoviesButton";
			this->MoviesButton->Size = System::Drawing::Size(158, 47);
			this->MoviesButton->TabIndex = 0;
			this->MoviesButton->TabStop = false;
			this->MoviesButton->Text = L"Фильмы";
			this->MoviesButton->UseVisualStyleBackColor = true;
			this->MoviesButton->Click += gcnew System::EventHandler(this, &MainForm::MoviesButton_Click);
			// 
			// NavigationCursor
			// 
			this->NavigationCursor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NavigationCursor.Image")));
			this->NavigationCursor->Location = System::Drawing::Point(0, 105);
			this->NavigationCursor->Margin = System::Windows::Forms::Padding(0, 3, 3, 3);
			this->NavigationCursor->Name = L"NavigationCursor";
			this->NavigationCursor->Size = System::Drawing::Size(20, 50);
			this->NavigationCursor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->NavigationCursor->TabIndex = 3;
			this->NavigationCursor->TabStop = false;
			// 
			// TabControl
			// 
			this->TabControl->Controls->Add(this->MoviesPage);
			this->TabControl->Controls->Add(this->NominationsPage);
			this->TabControl->Controls->Add(this->ParticipantsPage);
			this->TabControl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TabControl->Location = System::Drawing::Point(216, -31);
			this->TabControl->Name = L"TabControl";
			this->TabControl->SelectedIndex = 0;
			this->TabControl->Size = System::Drawing::Size(1066, 644);
			this->TabControl->TabIndex = 2;
			this->TabControl->TabStop = false;
			// 
			// MoviesPage
			// 
			this->MoviesPage->BackColor = System::Drawing::SystemColors::Control;
			this->MoviesPage->Controls->Add(this->ResetButton);
			this->MoviesPage->Controls->Add(this->AddMovieButton);
			this->MoviesPage->Controls->Add(this->MoviesListView);
			this->MoviesPage->Controls->Add(this->NameLabel);
			this->MoviesPage->Controls->Add(this->AlphabetComboBox);
			this->MoviesPage->Controls->Add(this->YearsComboBox);
			this->MoviesPage->Controls->Add(this->YearLabel);
			this->MoviesPage->Controls->Add(this->GenresComboBox);
			this->MoviesPage->Controls->Add(this->GenreLabel);
			this->MoviesPage->Controls->Add(this->CountryLabel);
			this->MoviesPage->Controls->Add(this->CountriesComboBox);
			this->MoviesPage->Location = System::Drawing::Point(4, 30);
			this->MoviesPage->Name = L"MoviesPage";
			this->MoviesPage->Size = System::Drawing::Size(1058, 610);
			this->MoviesPage->TabIndex = 3;
			this->MoviesPage->Text = L"tabPage2";
			// 
			// ResetButton
			// 
			this->ResetButton->FlatAppearance->BorderSize = 0;
			this->ResetButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ResetButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetButton.Image")));
			this->ResetButton->Location = System::Drawing::Point(933, 50);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(47, 43);
			this->ResetButton->TabIndex = 41;
			this->ResetButton->UseVisualStyleBackColor = true;
			this->ResetButton->Click += gcnew System::EventHandler(this, &MainForm::ResetButton_Click);
			// 
			// AddMovieButton
			// 
			this->AddMovieButton->FlatAppearance->BorderSize = 0;
			this->AddMovieButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddMovieButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddMovieButton.Image")));
			this->AddMovieButton->Location = System::Drawing::Point(881, 50);
			this->AddMovieButton->Name = L"AddMovieButton";
			this->AddMovieButton->Size = System::Drawing::Size(46, 43);
			this->AddMovieButton->TabIndex = 40;
			this->AddMovieButton->UseVisualStyleBackColor = true;
			this->AddMovieButton->Click += gcnew System::EventHandler(this, &MainForm::AddMovieButton_Click);
			// 
			// MoviesListView
			// 
			this->MoviesListView->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MoviesListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->NameHeader,
					this->GenreHeader, this->CountryHeader, this->YearHeader, this->DirectorHeader, this->WriterHeader, this->CriticScoreHeader,
					this->UserScoreHeader
			});
			this->MoviesListView->Location = System::Drawing::Point(41, 106);
			this->MoviesListView->Name = L"MoviesListView";
			this->MoviesListView->Size = System::Drawing::Size(939, 471);
			this->MoviesListView->TabIndex = 39;
			this->MoviesListView->UseCompatibleStateImageBehavior = false;
			this->MoviesListView->View = System::Windows::Forms::View::Details;
			// 
			// NameHeader
			// 
			this->NameHeader->Text = L"Название";
			this->NameHeader->Width = 195;
			// 
			// GenreHeader
			// 
			this->GenreHeader->Text = L"Жанры";
			this->GenreHeader->Width = 180;
			// 
			// CountryHeader
			// 
			this->CountryHeader->Text = L"Страна";
			this->CountryHeader->Width = 98;
			// 
			// YearHeader
			// 
			this->YearHeader->Text = L"Год";
			this->YearHeader->Width = 66;
			// 
			// DirectorHeader
			// 
			this->DirectorHeader->Text = L"Режиссер";
			this->DirectorHeader->Width = 123;
			// 
			// WriterHeader
			// 
			this->WriterHeader->Text = L"Сценарист";
			this->WriterHeader->Width = 121;
			// 
			// CriticScoreHeader
			// 
			this->CriticScoreHeader->DisplayIndex = 7;
			this->CriticScoreHeader->Text = L"Р. Жюри";
			this->CriticScoreHeader->Width = 77;
			// 
			// UserScoreHeader
			// 
			this->UserScoreHeader->DisplayIndex = 6;
			this->UserScoreHeader->Text = L"Р. Гостей";
			this->UserScoreHeader->Width = 78;
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->NameLabel->Location = System::Drawing::Point(37, 40);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(78, 21);
			this->NameLabel->TabIndex = 37;
			this->NameLabel->Text = L"Название";
			// 
			// AlphabetComboBox
			// 
			this->AlphabetComboBox->FormattingEnabled = true;
			this->AlphabetComboBox->Location = System::Drawing::Point(41, 64);
			this->AlphabetComboBox->Name = L"AlphabetComboBox";
			this->AlphabetComboBox->Size = System::Drawing::Size(85, 29);
			this->AlphabetComboBox->TabIndex = 36;
			this->AlphabetComboBox->TabStop = false;
			this->AlphabetComboBox->TextChanged += gcnew System::EventHandler(this, &MainForm::ComboBox_DataChanged);
			// 
			// YearsComboBox
			// 
			this->YearsComboBox->FormattingEnabled = true;
			this->YearsComboBox->Location = System::Drawing::Point(488, 64);
			this->YearsComboBox->Name = L"YearsComboBox";
			this->YearsComboBox->Size = System::Drawing::Size(82, 29);
			this->YearsComboBox->TabIndex = 35;
			this->YearsComboBox->TabStop = false;
			this->YearsComboBox->TextChanged += gcnew System::EventHandler(this, &MainForm::ComboBox_DataChanged);
			// 
			// YearLabel
			// 
			this->YearLabel->AutoSize = true;
			this->YearLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->YearLabel->Location = System::Drawing::Point(484, 40);
			this->YearLabel->Name = L"YearLabel";
			this->YearLabel->Size = System::Drawing::Size(36, 21);
			this->YearLabel->TabIndex = 34;
			this->YearLabel->Text = L"Год";
			// 
			// GenresComboBox
			// 
			this->GenresComboBox->FormattingEnabled = true;
			this->GenresComboBox->Location = System::Drawing::Point(144, 64);
			this->GenresComboBox->Name = L"GenresComboBox";
			this->GenresComboBox->Size = System::Drawing::Size(154, 29);
			this->GenresComboBox->TabIndex = 33;
			this->GenresComboBox->TabStop = false;
			this->GenresComboBox->TextChanged += gcnew System::EventHandler(this, &MainForm::ComboBox_DataChanged);
			// 
			// GenreLabel
			// 
			this->GenreLabel->AutoSize = true;
			this->GenreLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->GenreLabel->Location = System::Drawing::Point(140, 40);
			this->GenreLabel->Name = L"GenreLabel";
			this->GenreLabel->Size = System::Drawing::Size(50, 21);
			this->GenreLabel->TabIndex = 32;
			this->GenreLabel->Text = L"Жанр";
			// 
			// CountryLabel
			// 
			this->CountryLabel->AutoSize = true;
			this->CountryLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->CountryLabel->Location = System::Drawing::Point(313, 40);
			this->CountryLabel->Name = L"CountryLabel";
			this->CountryLabel->Size = System::Drawing::Size(61, 21);
			this->CountryLabel->TabIndex = 31;
			this->CountryLabel->Text = L"Страна";
			// 
			// CountriesComboBox
			// 
			this->CountriesComboBox->FormattingEnabled = true;
			this->CountriesComboBox->Location = System::Drawing::Point(316, 64);
			this->CountriesComboBox->Name = L"CountriesComboBox";
			this->CountriesComboBox->Size = System::Drawing::Size(154, 29);
			this->CountriesComboBox->TabIndex = 30;
			this->CountriesComboBox->TabStop = false;
			this->CountriesComboBox->TextChanged += gcnew System::EventHandler(this, &MainForm::ComboBox_DataChanged);
			// 
			// NominationsPage
			// 
			this->NominationsPage->BackColor = System::Drawing::SystemColors::Control;
			this->NominationsPage->Controls->Add(this->GuestWriterLabel);
			this->NominationsPage->Controls->Add(this->GuestDirectorLabel);
			this->NominationsPage->Controls->Add(this->GuestTimeLabel);
			this->NominationsPage->Controls->Add(this->GuestYearLabel);
			this->NominationsPage->Controls->Add(this->GuestCountryLabel);
			this->NominationsPage->Controls->Add(this->GuestNameLabel);
			this->NominationsPage->Controls->Add(this->JuryWriterLabel);
			this->NominationsPage->Controls->Add(this->JuryDirectorLabel);
			this->NominationsPage->Controls->Add(this->JuryTimeLabel);
			this->NominationsPage->Controls->Add(this->JuryYearLabel);
			this->NominationsPage->Controls->Add(this->JuryCountryLabel);
			this->NominationsPage->Controls->Add(this->JuryNameLabel);
			this->NominationsPage->Controls->Add(this->label6);
			this->NominationsPage->Controls->Add(this->label5);
			this->NominationsPage->Controls->Add(this->label4);
			this->NominationsPage->Controls->Add(this->label2);
			this->NominationsPage->Controls->Add(this->AddVoteButton);
			this->NominationsPage->Controls->Add(this->label3);
			this->NominationsPage->Controls->Add(this->label1);
			this->NominationsPage->Controls->Add(this->GuestNominationLabel);
			this->NominationsPage->Controls->Add(this->JuryNominationLabel);
			this->NominationsPage->Controls->Add(this->NominationsComboBox);
			this->NominationsPage->Controls->Add(this->NominationLabel);
			this->NominationsPage->Location = System::Drawing::Point(4, 30);
			this->NominationsPage->Name = L"NominationsPage";
			this->NominationsPage->Size = System::Drawing::Size(1058, 610);
			this->NominationsPage->TabIndex = 4;
			// 
			// GuestWriterLabel
			// 
			this->GuestWriterLabel->AutoSize = true;
			this->GuestWriterLabel->Location = System::Drawing::Point(494, 344);
			this->GuestWriterLabel->Name = L"GuestWriterLabel";
			this->GuestWriterLabel->Size = System::Drawing::Size(0, 21);
			this->GuestWriterLabel->TabIndex = 69;
			// 
			// GuestDirectorLabel
			// 
			this->GuestDirectorLabel->AutoSize = true;
			this->GuestDirectorLabel->Location = System::Drawing::Point(494, 310);
			this->GuestDirectorLabel->Name = L"GuestDirectorLabel";
			this->GuestDirectorLabel->Size = System::Drawing::Size(0, 21);
			this->GuestDirectorLabel->TabIndex = 68;
			// 
			// GuestTimeLabel
			// 
			this->GuestTimeLabel->AutoSize = true;
			this->GuestTimeLabel->Location = System::Drawing::Point(494, 275);
			this->GuestTimeLabel->Name = L"GuestTimeLabel";
			this->GuestTimeLabel->Size = System::Drawing::Size(0, 21);
			this->GuestTimeLabel->TabIndex = 67;
			// 
			// GuestYearLabel
			// 
			this->GuestYearLabel->AutoSize = true;
			this->GuestYearLabel->Location = System::Drawing::Point(494, 241);
			this->GuestYearLabel->Name = L"GuestYearLabel";
			this->GuestYearLabel->Size = System::Drawing::Size(0, 21);
			this->GuestYearLabel->TabIndex = 66;
			// 
			// GuestCountryLabel
			// 
			this->GuestCountryLabel->AutoSize = true;
			this->GuestCountryLabel->Location = System::Drawing::Point(494, 202);
			this->GuestCountryLabel->Name = L"GuestCountryLabel";
			this->GuestCountryLabel->Size = System::Drawing::Size(0, 21);
			this->GuestCountryLabel->TabIndex = 65;
			// 
			// GuestNameLabel
			// 
			this->GuestNameLabel->AutoSize = true;
			this->GuestNameLabel->Location = System::Drawing::Point(494, 165);
			this->GuestNameLabel->Name = L"GuestNameLabel";
			this->GuestNameLabel->Size = System::Drawing::Size(0, 21);
			this->GuestNameLabel->TabIndex = 64;
			// 
			// JuryWriterLabel
			// 
			this->JuryWriterLabel->AutoSize = true;
			this->JuryWriterLabel->Location = System::Drawing::Point(137, 344);
			this->JuryWriterLabel->Name = L"JuryWriterLabel";
			this->JuryWriterLabel->Size = System::Drawing::Size(0, 21);
			this->JuryWriterLabel->TabIndex = 63;
			// 
			// JuryDirectorLabel
			// 
			this->JuryDirectorLabel->AutoSize = true;
			this->JuryDirectorLabel->Location = System::Drawing::Point(137, 310);
			this->JuryDirectorLabel->Name = L"JuryDirectorLabel";
			this->JuryDirectorLabel->Size = System::Drawing::Size(0, 21);
			this->JuryDirectorLabel->TabIndex = 62;
			// 
			// JuryTimeLabel
			// 
			this->JuryTimeLabel->AutoSize = true;
			this->JuryTimeLabel->Location = System::Drawing::Point(137, 275);
			this->JuryTimeLabel->Name = L"JuryTimeLabel";
			this->JuryTimeLabel->Size = System::Drawing::Size(0, 21);
			this->JuryTimeLabel->TabIndex = 61;
			// 
			// JuryYearLabel
			// 
			this->JuryYearLabel->AutoSize = true;
			this->JuryYearLabel->Location = System::Drawing::Point(137, 241);
			this->JuryYearLabel->Name = L"JuryYearLabel";
			this->JuryYearLabel->Size = System::Drawing::Size(0, 21);
			this->JuryYearLabel->TabIndex = 60;
			// 
			// JuryCountryLabel
			// 
			this->JuryCountryLabel->AutoSize = true;
			this->JuryCountryLabel->Location = System::Drawing::Point(137, 202);
			this->JuryCountryLabel->Name = L"JuryCountryLabel";
			this->JuryCountryLabel->Size = System::Drawing::Size(0, 21);
			this->JuryCountryLabel->TabIndex = 59;
			// 
			// JuryNameLabel
			// 
			this->JuryNameLabel->AutoSize = true;
			this->JuryNameLabel->Location = System::Drawing::Point(137, 165);
			this->JuryNameLabel->Name = L"JuryNameLabel";
			this->JuryNameLabel->Size = System::Drawing::Size(0, 21);
			this->JuryNameLabel->TabIndex = 58;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(41, 344);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 21);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Сценарист:";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(41, 310);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 21);
			this->label5->TabIndex = 56;
			this->label5->Text = L"Режиссер:";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(41, 275);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 21);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Время:";
			this->label4->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(41, 241);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 21);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Год:";
			this->label2->Visible = false;
			// 
			// AddVoteButton
			// 
			this->AddVoteButton->Location = System::Drawing::Point(752, 553);
			this->AddVoteButton->Name = L"AddVoteButton";
			this->AddVoteButton->Size = System::Drawing::Size(243, 36);
			this->AddVoteButton->TabIndex = 53;
			this->AddVoteButton->Text = L"Проголосовать";
			this->AddVoteButton->UseVisualStyleBackColor = true;
			this->AddVoteButton->Click += gcnew System::EventHandler(this, &MainForm::AddVoteButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(41, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 21);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Страна:";
			this->label3->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(41, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 21);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Название:";
			this->label1->Visible = false;
			// 
			// GuestNominationLabel
			// 
			this->GuestNominationLabel->AutoSize = true;
			this->GuestNominationLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GuestNominationLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->GuestNominationLabel->Location = System::Drawing::Point(494, 119);
			this->GuestNominationLabel->Name = L"GuestNominationLabel";
			this->GuestNominationLabel->Size = System::Drawing::Size(105, 21);
			this->GuestNominationLabel->TabIndex = 43;
			this->GuestNominationLabel->Text = L"Среди гостей";
			// 
			// JuryNominationLabel
			// 
			this->JuryNominationLabel->AutoSize = true;
			this->JuryNominationLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->JuryNominationLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->JuryNominationLabel->Location = System::Drawing::Point(137, 119);
			this->JuryNominationLabel->Name = L"JuryNominationLabel";
			this->JuryNominationLabel->Size = System::Drawing::Size(102, 21);
			this->JuryNominationLabel->TabIndex = 42;
			this->JuryNominationLabel->Text = L"Среди жюри";
			// 
			// NominationsComboBox
			// 
			this->NominationsComboBox->FormattingEnabled = true;
			this->NominationsComboBox->Location = System::Drawing::Point(41, 64);
			this->NominationsComboBox->Name = L"NominationsComboBox";
			this->NominationsComboBox->Size = System::Drawing::Size(276, 29);
			this->NominationsComboBox->TabIndex = 41;
			this->NominationsComboBox->TextChanged += gcnew System::EventHandler(this, &MainForm::NominationsComboBox_TextChanged);
			// 
			// NominationLabel
			// 
			this->NominationLabel->AutoSize = true;
			this->NominationLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->NominationLabel->Location = System::Drawing::Point(37, 40);
			this->NominationLabel->Name = L"NominationLabel";
			this->NominationLabel->Size = System::Drawing::Size(94, 21);
			this->NominationLabel->TabIndex = 40;
			this->NominationLabel->Text = L"Номинация";
			// 
			// ParticipantsPage
			// 
			this->ParticipantsPage->BackColor = System::Drawing::SystemColors::Control;
			this->ParticipantsPage->Controls->Add(this->JuryTextBox);
			this->ParticipantsPage->Controls->Add(this->UserTextBox);
			this->ParticipantsPage->Controls->Add(this->AddGuestButton);
			this->ParticipantsPage->Controls->Add(this->GuestTextBox);
			this->ParticipantsPage->Controls->Add(this->JuryListBox);
			this->ParticipantsPage->Controls->Add(this->UsersListBox);
			this->ParticipantsPage->Controls->Add(this->GuestsListBox);
			this->ParticipantsPage->Controls->Add(this->AddJuryButton);
			this->ParticipantsPage->Controls->Add(this->AddUserButton);
			this->ParticipantsPage->Controls->Add(this->JuryLabel);
			this->ParticipantsPage->Controls->Add(this->ParticipantsLabel);
			this->ParticipantsPage->Controls->Add(this->GuestsLabel);
			this->ParticipantsPage->Location = System::Drawing::Point(4, 30);
			this->ParticipantsPage->Name = L"ParticipantsPage";
			this->ParticipantsPage->Size = System::Drawing::Size(1058, 610);
			this->ParticipantsPage->TabIndex = 5;
			this->ParticipantsPage->Text = L"tabPage4";
			// 
			// JuryTextBox
			// 
			this->JuryTextBox->Location = System::Drawing::Point(613, 65);
			this->JuryTextBox->Name = L"JuryTextBox";
			this->JuryTextBox->Size = System::Drawing::Size(214, 29);
			this->JuryTextBox->TabIndex = 15;
			// 
			// UserTextBox
			// 
			this->UserTextBox->Location = System::Drawing::Point(330, 65);
			this->UserTextBox->Name = L"UserTextBox";
			this->UserTextBox->Size = System::Drawing::Size(214, 29);
			this->UserTextBox->TabIndex = 14;
			// 
			// AddGuestButton
			// 
			this->AddGuestButton->FlatAppearance->BorderSize = 0;
			this->AddGuestButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddGuestButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddGuestButton.Image")));
			this->AddGuestButton->Location = System::Drawing::Point(257, 57);
			this->AddGuestButton->Name = L"AddGuestButton";
			this->AddGuestButton->Size = System::Drawing::Size(42, 42);
			this->AddGuestButton->TabIndex = 13;
			this->AddGuestButton->UseVisualStyleBackColor = true;
			this->AddGuestButton->Click += gcnew System::EventHandler(this, &MainForm::AddGuestButton_Click_1);
			// 
			// GuestTextBox
			// 
			this->GuestTextBox->Location = System::Drawing::Point(41, 65);
			this->GuestTextBox->Name = L"GuestTextBox";
			this->GuestTextBox->Size = System::Drawing::Size(210, 29);
			this->GuestTextBox->TabIndex = 12;
			// 
			// JuryListBox
			// 
			this->JuryListBox->FormattingEnabled = true;
			this->JuryListBox->ItemHeight = 21;
			this->JuryListBox->Location = System::Drawing::Point(613, 107);
			this->JuryListBox->Name = L"JuryListBox";
			this->JuryListBox->Size = System::Drawing::Size(214, 466);
			this->JuryListBox->TabIndex = 11;
			// 
			// UsersListBox
			// 
			this->UsersListBox->FormattingEnabled = true;
			this->UsersListBox->ItemHeight = 21;
			this->UsersListBox->Location = System::Drawing::Point(330, 107);
			this->UsersListBox->Name = L"UsersListBox";
			this->UsersListBox->Size = System::Drawing::Size(214, 466);
			this->UsersListBox->TabIndex = 10;
			// 
			// GuestsListBox
			// 
			this->GuestsListBox->FormattingEnabled = true;
			this->GuestsListBox->ItemHeight = 21;
			this->GuestsListBox->Location = System::Drawing::Point(41, 107);
			this->GuestsListBox->Name = L"GuestsListBox";
			this->GuestsListBox->Size = System::Drawing::Size(214, 466);
			this->GuestsListBox->TabIndex = 9;
			// 
			// AddJuryButton
			// 
			this->AddJuryButton->FlatAppearance->BorderSize = 0;
			this->AddJuryButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddJuryButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddJuryButton.Image")));
			this->AddJuryButton->Location = System::Drawing::Point(833, 57);
			this->AddJuryButton->Name = L"AddJuryButton";
			this->AddJuryButton->Size = System::Drawing::Size(35, 42);
			this->AddJuryButton->TabIndex = 8;
			this->AddJuryButton->UseVisualStyleBackColor = true;
			this->AddJuryButton->Click += gcnew System::EventHandler(this, &MainForm::AddJuryButton_Click);
			// 
			// AddUserButton
			// 
			this->AddUserButton->FlatAppearance->BorderSize = 0;
			this->AddUserButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddUserButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddUserButton.Image")));
			this->AddUserButton->Location = System::Drawing::Point(550, 57);
			this->AddUserButton->Name = L"AddUserButton";
			this->AddUserButton->Size = System::Drawing::Size(39, 42);
			this->AddUserButton->TabIndex = 7;
			this->AddUserButton->UseVisualStyleBackColor = true;
			this->AddUserButton->Click += gcnew System::EventHandler(this, &MainForm::AddUserButton_Click);
			// 
			// JuryLabel
			// 
			this->JuryLabel->AutoSize = true;
			this->JuryLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->JuryLabel->Location = System::Drawing::Point(609, 40);
			this->JuryLabel->Name = L"JuryLabel";
			this->JuryLabel->Size = System::Drawing::Size(55, 21);
			this->JuryLabel->TabIndex = 4;
			this->JuryLabel->Text = L"Жюри";
			// 
			// ParticipantsLabel
			// 
			this->ParticipantsLabel->AutoSize = true;
			this->ParticipantsLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ParticipantsLabel->Location = System::Drawing::Point(326, 40);
			this->ParticipantsLabel->Name = L"ParticipantsLabel";
			this->ParticipantsLabel->Size = System::Drawing::Size(85, 21);
			this->ParticipantsLabel->TabIndex = 2;
			this->ParticipantsLabel->Text = L"Участники";
			// 
			// GuestsLabel
			// 
			this->GuestsLabel->AutoSize = true;
			this->GuestsLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->GuestsLabel->Location = System::Drawing::Point(37, 40);
			this->GuestsLabel->Name = L"GuestsLabel";
			this->GuestsLabel->Size = System::Drawing::Size(50, 21);
			this->GuestsLabel->TabIndex = 0;
			this->GuestsLabel->Text = L"Гости";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1227, 600);
			this->Controls->Add(this->NavigationPanel);
			this->Controls->Add(this->TabControl);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CinemaMeet";
			this->NavigationPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NavigationCursor))->EndInit();
			this->TabControl->ResumeLayout(false);
			this->MoviesPage->ResumeLayout(false);
			this->MoviesPage->PerformLayout();
			this->NominationsPage->ResumeLayout(false);
			this->NominationsPage->PerformLayout();
			this->ParticipantsPage->ResumeLayout(false);
			this->ParticipantsPage->PerformLayout();
			this->ResumeLayout(false);

		}

	public: virtual void MainForm::UpdateData(int pageIndex) override
	{
		switch (pageIndex) {
		case 0:
			InitMoviesArray();
			InitGuestsArray();
			InitJuryArray();
			UpdateMovieListView();
			break;
		case 1:
			InitGuestsArray();
			InitJuryArray();
			EmptyLabel();
			break;
		case 2:
			InitGuestsArray();
			InitJuryArray();
			UpdateUsersList();
			break;
		default:
			break;
		}
	}
			void EmptyLabel()
			{
				NominationsComboBox->Text = String::Empty;

				GuestNameLabel->Text = String::Empty;
				GuestCountryLabel->Text = String::Empty;
				GuestTimeLabel->Text = String::Empty;
				GuestYearLabel->Text = String::Empty;
				GuestDirectorLabel->Text = String::Empty;
				GuestWriterLabel->Text = String::Empty;

				JuryNameLabel->Text = String::Empty;
				JuryCountryLabel->Text = String::Empty;
				JuryTimeLabel->Text = String::Empty;
				JuryYearLabel->Text = String::Empty;
				JuryDirectorLabel->Text = String::Empty;
				JuryWriterLabel->Text = String::Empty;

				label1->Visible = false;
				label2->Visible = false;
				label3->Visible = false;
				label4->Visible = false;
				label5->Visible = false;
				label6->Visible = false;
			}

#pragma endregion

	public: void UpdateNominations()
	{
		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;

		bool isStoryRating = NominationsComboBox->Text->Equals(NominationsComboBox->Items[0]);
		bool isDirectingRating = NominationsComboBox->Text->Equals(NominationsComboBox->Items[1]);
		bool isGraphicRating = NominationsComboBox->Text->Equals(NominationsComboBox->Items[2]);
		bool isActingRating = NominationsComboBox->Text->Equals(NominationsComboBox->Items[3]);

		Movie^ bestUserMovie = MoviesArray[0];
		Movie^ betJuryMovie = MoviesArray[0];

		if (isStoryRating) FindBestStoryMovie(bestUserMovie, betJuryMovie);
		if (isDirectingRating) FindBestDirectingMovie(bestUserMovie, betJuryMovie);
		if (isGraphicRating) FindBestGraphicsMovie(bestUserMovie, betJuryMovie);
		if (isActingRating) FindBestActingMovie(bestUserMovie, betJuryMovie);

		fillGuestBestMovie(bestUserMovie);
		fillJuryBestMovie(betJuryMovie);

		delete(bestUserMovie);
		delete(betJuryMovie);
		return;
	}
			void fillGuestBestMovie(Movie^ &movie)
			{
				GuestNameLabel->Text = movie->Title;
				GuestCountryLabel->Text = movie->Country;
				GuestTimeLabel->Text = System::Convert::ToString(movie->GetRuntimeStr());
				GuestYearLabel->Text = System::Convert::ToString(movie->Year);
				GuestDirectorLabel->Text = movie->Director->Name;
				GuestWriterLabel->Text = movie->Writer->Name;
				return;
			}

			void fillJuryBestMovie(Movie^ &movie)
			{
				JuryNameLabel->Text = movie->Title;
				JuryCountryLabel->Text = movie->Country;
				JuryTimeLabel->Text = System::Convert::ToString(movie->GetRuntimeStr());
				JuryYearLabel->Text = System::Convert::ToString(movie->Year);
				JuryDirectorLabel->Text = movie->Director->Name;
				JuryWriterLabel->Text = movie->Writer->Name;
				return;
			}

			void FindBestStoryMovie(Movie^ &bestUserMovie, Movie^ &bestJuryMovie)
			{
				bestUserMovie = GetMaxSumMovie(GuestsArray, 0, 0);
				bestJuryMovie = GetMaxSumMovie(JuryArray, 1, 0);
				return;
			}

			void FindBestDirectingMovie(Movie^ &bestUserMovie, Movie^ &bestJuryMovie)
			{
				bestUserMovie = GetMaxSumMovie(GuestsArray, 0, 1);
				bestJuryMovie = GetMaxSumMovie(JuryArray, 1, 1);
				return;
			}

			void FindBestGraphicsMovie(Movie^ &bestUserMovie, Movie^ &bestJuryMovie)
			{
				bestUserMovie = GetMaxSumMovie(GuestsArray, 0, 2);
				bestJuryMovie = GetMaxSumMovie(JuryArray, 1, 2);
				return;
			}

			void FindBestActingMovie(Movie^ &bestUserMovie, Movie^ &bestJuryMovie)
			{
				bestUserMovie = GetMaxSumMovie(GuestsArray, 0, 3);
				bestJuryMovie = GetMaxSumMovie(JuryArray, 1, 3);
				return;
			}

			Movie^ GetMaxSumMovie(array<String^>^ usersArray, int type, int param)
			{
				Movie^ maxSumMovie;
				int maxSum = 0;
				for each (Movie^ movie in MoviesArray) {
					int sum = 0;
					for each (String^ user in usersArray) {
						Rating^ rating;
						try {
							rating = Rating::ReadRating(user, movie->Title, type);
							sum += rating->GetRatingParam(param);
						}
						catch (Exception^) {
						}
					}
					if (sum > maxSum) {
						maxSum = sum;
						maxSumMovie = movie;
					}
				}
				System::Console::WriteLine(maxSumMovie->Title + ": " + maxSum);
				return maxSumMovie;
			}

			System::String^ GetMovieScore(System::String^ movieName, array<String^>^ usersArray, int type)
			{
				int sum = 0;
				int count = 0;
				for each (String^ user in usersArray) {
					Rating^ rating;
					try {
						rating = Rating::ReadRating(user, movieName, type);
						sum += rating->Score;
						count++;
					}
					catch (Exception^) {
					}
				}
				return System::Convert::ToString(Math::Round(sum / (double) count));
			}

	public: void InitMoviesArray()
	{
		MoviesArray = Movie::ReadMoviesArray();
		System::Console::WriteLine("MoviesCount: " + MoviesArray->Length);
		return;
	}

			// Кнопки навигации
	private: System::Void MoviesButton_Click(System::Object^  sender, System::EventArgs^  e) { MoviesButtonOnClick(); }

			 void MoviesButtonOnClick()
			 {
				 // Выбрать страницу фильмов
				 TabControl->SelectTab(0);
				 // Переместить индикатор навигации к кнопке Фильмы
				 NavigationCursor->Location = System::Drawing::Point(0, GetCenterOfControls(MoviesButton, NavigationCursor));
				 // Заполнить ListView фильмами

				 ClearMainComboBoxes();
				 FillMainComboBoxes();
				 UpdateData(0);
				 return;
			 }

	public: void UpdateMovieListView()
	{
		array<ListViewItem^>^ MoviesRange = gcnew array<ListViewItem^>(MoviesArray->Length);
		for (int i = 0; i < MoviesRange->Length; i++) {
			Movie^ movie = MoviesArray[i];
			System::String^ userScore = GetMovieScore(movie->Title, GuestsArray, 0);
			System::String^ juryScore = GetMovieScore(movie->Title, JuryArray, 1);
			MoviesRange[i] = movie->ToListViewItem(userScore, juryScore);
		}
		MoviesListView->Items->Clear();
		MoviesListView->Items->AddRange(MoviesRange);
		delete(MoviesRange);
	}

	private: System::Void RatingsButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		TabControl->SelectTab(1);
		NavigationCursor->Location = System::Drawing::Point(0, GetCenterOfControls(NominationsButton, NavigationCursor));
		NominationsComboBox->Items->Clear();
		NominationsComboBox->Items->AddRange(Utility::GetNominationsList());
		UpdateData(1);
	}

	private: System::Void PeoplesButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		TabControl->SelectTab(2);
		NavigationCursor->Location = System::Drawing::Point(0, GetCenterOfControls(PeoplesButton, NavigationCursor));
		UpdateData(2);
	}

			 void UpdateUsersList()
			 {
				 UsersListBox->Items->Clear();
				 GuestsListBox->Items->Clear();
				 JuryListBox->Items->Clear();

				 GuestsListBox->Items->AddRange(GuestsArray);
				 JuryListBox->Items->AddRange(JuryArray);

				 array<String^>^ NamesArray = Profile::ReadParticipantArray();
				 UsersListBox->Items->AddRange(NamesArray);
				 System::Console::WriteLine("ParticipantCount: " + NamesArray->Length);
				 delete(NamesArray);
			 }

			 void InitGuestsArray()
			 {
				 GuestsArray = Profile::ReadGestsArray();
				 for each (System::String^ name in GuestsArray) Utility::MakeFolder(System::String::Format(GUESTS_RATING_PATH, name));
				 System::Console::WriteLine("GuestsCount: " + GuestsArray->Length);
			 }

			 void InitJuryArray()
			 {
				 JuryArray = Profile::ReadJuryArray();
				 for each (System::String^ name in JuryArray) Utility::MakeFolder(System::String::Format(JURY_RATING_PATH, name));
				 System::Console::WriteLine("JuryCount: " + JuryArray->Length);
			 }

			 // Получение середины координаты относительно отностительно двух элементов интерфейса  
			 int GetCenterOfControls(System::Windows::Forms::Control^ Anchor, System::Windows::Forms::Control^ Obj)
			 { return Anchor->Location.Y + (Anchor->Height - Obj->Height) / 2; }

	private: System::Void AddMovieButton_Click(System::Object^  sender, System::EventArgs^  e)
 {
		Form^ AddMovieForm = gcnew CinemaMeet::AddMovieForm(this);
		AddMovieForm->Show();
	}

	private: System::Void AddGuestButton_Click_1(System::Object^  sender, System::EventArgs^  e)
	{
		GuestsListBox->Items->Add(GuestTextBox->Text);
		Profile::WriteProfile(GuestTextBox->Text, 0);
		GuestTextBox->Text = String::Empty;
	}

	private: System::Void AddUserButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		UsersListBox->Items->Add(UserTextBox->Text);
		Profile::WriteProfile(UserTextBox->Text, 1);
		UserTextBox->Text = String::Empty;
	}

	private: System::Void AddJuryButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		JuryListBox->Items->Add(JuryTextBox->Text);
		Profile::WriteProfile(JuryTextBox->Text, 2);
		JuryTextBox->Text = String::Empty;
	}

	private: System::Void ComboBox_DataChanged(System::Object^  sender, System::EventArgs^  e)
	{
		InitMoviesArray();

		bool isAlphabetEmpty = AlphabetComboBox->Text->Equals(String::Empty);
		bool isGenreEmpty = GenresComboBox->Text->Equals(String::Empty);
		bool isYearEmpty = YearsComboBox->Text->Equals(String::Empty);
		bool isCountryEmpty = CountriesComboBox->Text->Equals(String::Empty);

		if (!isAlphabetEmpty) CheckMovieForName();
		if (!isGenreEmpty) CheckMovieForGenre();
		if (!isYearEmpty) CheckMovieForYear();
		if (!isCountryEmpty) CheckMovieForCountry();

		// Заполнить список фильмами, удовлетворяющим условиям: название, жанр, страна, год
		array<ListViewItem^>^ MoviesRange = gcnew array<ListViewItem^>(MoviesArray->Length);
		for (int i = 0; i < MoviesArray->Length; i++) {
			Movie^ movie = MoviesArray[i];
			System::String^ userScore = GetMovieScore(movie->Title, GuestsArray, 0);
			System::String^ juryScore = GetMovieScore(movie->Title, JuryArray, 1);
			MoviesRange[i] = MoviesArray[i]->ToListViewItem(userScore, juryScore);
		}
		MoviesListView->Items->Clear(); // Очистить список фильмов
		MoviesListView->Items->AddRange(MoviesRange); // Добавить в список актуальные 
	}
			 void CheckMovieForName()
			 {
				 int count = 0;
				 for each(Movie^ movie in MoviesArray) {
					 if (movie->Title->StartsWith(AlphabetComboBox->Text)) count++;
				 }
				 array<Movie^>^ tempArray = gcnew cli::array<Movie^>(count);
				 count = 0;
				 for (int i = 0; i < MoviesArray->Length; i++) {
					 Movie^ movie = MoviesArray[i];
					 if (movie->Title->StartsWith(AlphabetComboBox->Text)) {
						 tempArray[count] = movie;
						 count++;
					 }
				 }
				 MoviesArray = tempArray;
			 }

			 void CheckMovieForGenre()
			 {
				 int count = 0;
				 for each(Movie^ movie in MoviesArray) {
					 for each (String^ genre in movie->Geners) if (genre->Equals(GenresComboBox->Text)) count++;
				 }
				 array<Movie^>^ tempArray = gcnew cli::array<Movie^>(count);
				 count = 0;
				 for (int i = 0; i < MoviesArray->Length; i++) {
					 Movie^ movie = MoviesArray[i];
					 for each (String^ genre in movie->Geners) if (genre->Equals(GenresComboBox->Text)) {
						 tempArray[count] = MoviesArray[i];
						 count++;
					 }
				 }
				 MoviesArray = tempArray;
			 }

			 void CheckMovieForYear()
			 {
				 int count = 0;
				 for each(Movie^ movie in MoviesArray) {
					 if (movie->Year == System::Convert::ToInt32(YearsComboBox->Text)) count++;
				 }
				 array<Movie^>^ tempArray = gcnew cli::array<Movie^>(count);
				 count = 0;
				 for (int i = 0; i < MoviesArray->Length; i++) {
					 Movie^ movie = MoviesArray[i];
					 if (movie->Year == System::Convert::ToInt32(YearsComboBox->Text)) {
						 tempArray[count] = movie;
						 count++;
					 }
				 }
				 MoviesArray = tempArray;
			 }

			 void CheckMovieForCountry()
			 {
				 int count = 0;
				 for each(Movie^ movie in MoviesArray) {
					 if (movie->Country->Equals(CountriesComboBox->Text)) count++;
				 }
				 array<Movie^>^ tempArray = gcnew cli::array<Movie^>(count);
				 count = 0;
				 for (int i = 0; i < MoviesArray->Length; i++) {
					 Movie^ movie = MoviesArray[i];
					 if (movie->Country->Equals(CountriesComboBox->Text)) {
						 tempArray[count] = movie;
						 count++;
					 }
				 }
				 MoviesArray = tempArray;
			 }

	private: System::Void ResetButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClearMainComboBoxes();
		UpdateData(0);
	}

	private: System::Void AddVoteButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Form^ RateMovieForm = gcnew CinemaMeet::RateMovieForm(this);
		RateMovieForm->Show();
	}
	private: System::Void NominationsComboBox_TextChanged(System::Object^  sender, System::EventArgs^  e) { UpdateNominations(); return; }
	};
}