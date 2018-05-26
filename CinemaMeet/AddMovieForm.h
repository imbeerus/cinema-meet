#pragma once
#include "Utility.h"
#include "Models\DataForm.h"
#include "Models\Movie.h"

namespace CinemaMeet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddMovieForm
	/// </summary>
	public ref class AddMovieForm : public System::Windows::Forms::Form
	{
	public:
		DataForm ^ ParentForm;
		AddMovieForm(DataForm^ parentForm)
		{
			InitializeComponent();
			FillComboBoxes();
			ParentForm = parentForm;
			ParentForm->Hide();
		}

		void FillComboBoxes()
		{
			CountriesComboBox->Items->AddRange(Utility::GetCountriesList());
			GenereComboBox->Items->AddRange(Utility::GetGenresList());
			YearComboBox->Items->AddRange(Utility::GetYearsList());

			array<String^>^ FilesArray = System::IO::Directory::GetFiles("Data/Participant");
			array<String^>^  NamesArray = gcnew array<String^>(FilesArray->Length);
			for (int i = 0; i < NamesArray->Length; i++) {
				System::String^ profileName = Utility::GetFileName(FilesArray[i]);
				NamesArray[i] = profileName;
			}
		 	WriterComboBox->Items->AddRange(NamesArray);
			DirectorComboBox->Items->AddRange(NamesArray);
			delete(FilesArray);
			delete(NamesArray);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddMovieForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  NameLabel;
	private: System::Windows::Forms::Button^  OkButton;

	protected:

	private: System::Windows::Forms::TextBox^  NameTextBox;


	private: System::Windows::Forms::Label^  WriterLabel;

	private: System::Windows::Forms::Label^  DirectorLabel;
	private: System::Windows::Forms::Label^  CountryLabel;
	private: System::Windows::Forms::Label^  YearLabel;

	private: System::Windows::Forms::ComboBox^  CountriesComboBox;
	private: System::Windows::Forms::ComboBox^  YearComboBox;
	private: System::Windows::Forms::ListBox^  GenersListBox;

	private: System::Windows::Forms::Label^  GenreLabel;
	private: System::Windows::Forms::ComboBox^  GenereComboBox;
	private: System::Windows::Forms::Button^  AddGenreButton;
	private: System::Windows::Forms::Label^  RuntimeLabel;

	private: System::Windows::Forms::TextBox^  RuntimeTextBox;
	private: System::Windows::Forms::ComboBox^  WriterComboBox;
	private: System::Windows::Forms::ComboBox^  DirectorComboBox;





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
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->WriterLabel = (gcnew System::Windows::Forms::Label());
			this->DirectorLabel = (gcnew System::Windows::Forms::Label());
			this->CountryLabel = (gcnew System::Windows::Forms::Label());
			this->YearLabel = (gcnew System::Windows::Forms::Label());
			this->CountriesComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->YearComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->GenersListBox = (gcnew System::Windows::Forms::ListBox());
			this->GenreLabel = (gcnew System::Windows::Forms::Label());
			this->GenereComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddGenreButton = (gcnew System::Windows::Forms::Button());
			this->RuntimeLabel = (gcnew System::Windows::Forms::Label());
			this->RuntimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->WriterComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->DirectorComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->NameLabel->Location = System::Drawing::Point(8, 32);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(95, 25);
			this->NameLabel->TabIndex = 0;
			this->NameLabel->Text = L"Название";
			// 
			// OkButton
			// 
			this->OkButton->Location = System::Drawing::Point(370, 549);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(110, 39);
			this->OkButton->TabIndex = 1;
			this->OkButton->Text = L"ОК";
			this->OkButton->UseVisualStyleBackColor = true;
			this->OkButton->Click += gcnew System::EventHandler(this, &AddMovieForm::OkButton_Click);
			// 
			// NameTextBox
			// 
			this->NameTextBox->Location = System::Drawing::Point(13, 61);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(336, 33);
			this->NameTextBox->TabIndex = 2;
			// 
			// WriterLabel
			// 
			this->WriterLabel->AutoSize = true;
			this->WriterLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->WriterLabel->Location = System::Drawing::Point(8, 193);
			this->WriterLabel->Name = L"WriterLabel";
			this->WriterLabel->Size = System::Drawing::Size(105, 25);
			this->WriterLabel->TabIndex = 5;
			this->WriterLabel->Text = L"Сценарист";
			// 
			// DirectorLabel
			// 
			this->DirectorLabel->AutoSize = true;
			this->DirectorLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->DirectorLabel->Location = System::Drawing::Point(260, 193);
			this->DirectorLabel->Name = L"DirectorLabel";
			this->DirectorLabel->Size = System::Drawing::Size(97, 25);
			this->DirectorLabel->TabIndex = 6;
			this->DirectorLabel->Text = L"Режиссер";
			// 
			// CountryLabel
			// 
			this->CountryLabel->AutoSize = true;
			this->CountryLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->CountryLabel->Location = System::Drawing::Point(7, 109);
			this->CountryLabel->Name = L"CountryLabel";
			this->CountryLabel->Size = System::Drawing::Size(74, 25);
			this->CountryLabel->TabIndex = 7;
			this->CountryLabel->Text = L"Страна";
			// 
			// YearLabel
			// 
			this->YearLabel->AutoSize = true;
			this->YearLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->YearLabel->Location = System::Drawing::Point(354, 109);
			this->YearLabel->Name = L"YearLabel";
			this->YearLabel->Size = System::Drawing::Size(42, 25);
			this->YearLabel->TabIndex = 8;
			this->YearLabel->Text = L"Год";
			// 
			// CountriesComboBox
			// 
			this->CountriesComboBox->FormattingEnabled = true;
			this->CountriesComboBox->Location = System::Drawing::Point(12, 137);
			this->CountriesComboBox->Name = L"CountriesComboBox";
			this->CountriesComboBox->Size = System::Drawing::Size(337, 33);
			this->CountriesComboBox->TabIndex = 9;
			// 
			// YearComboBox
			// 
			this->YearComboBox->FormattingEnabled = true;
			this->YearComboBox->Location = System::Drawing::Point(359, 137);
			this->YearComboBox->Name = L"YearComboBox";
			this->YearComboBox->Size = System::Drawing::Size(121, 33);
			this->YearComboBox->TabIndex = 10;
			// 
			// GenersListBox
			// 
			this->GenersListBox->FormattingEnabled = true;
			this->GenersListBox->ItemHeight = 25;
			this->GenersListBox->Location = System::Drawing::Point(13, 353);
			this->GenersListBox->Name = L"GenersListBox";
			this->GenersListBox->Size = System::Drawing::Size(467, 179);
			this->GenersListBox->TabIndex = 11;
			// 
			// GenreLabel
			// 
			this->GenreLabel->AutoSize = true;
			this->GenreLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->GenreLabel->Location = System::Drawing::Point(8, 271);
			this->GenreLabel->Name = L"GenreLabel";
			this->GenreLabel->Size = System::Drawing::Size(60, 25);
			this->GenreLabel->TabIndex = 12;
			this->GenreLabel->Text = L"Жанр";
			// 
			// GenereComboBox
			// 
			this->GenereComboBox->FormattingEnabled = true;
			this->GenereComboBox->Location = System::Drawing::Point(13, 299);
			this->GenereComboBox->Name = L"GenereComboBox";
			this->GenereComboBox->Size = System::Drawing::Size(336, 33);
			this->GenereComboBox->TabIndex = 13;
			// 
			// AddGenreButton
			// 
			this->AddGenreButton->Location = System::Drawing::Point(359, 299);
			this->AddGenreButton->Name = L"AddGenreButton";
			this->AddGenreButton->Size = System::Drawing::Size(121, 33);
			this->AddGenreButton->TabIndex = 14;
			this->AddGenreButton->Text = L"Добавить";
			this->AddGenreButton->UseVisualStyleBackColor = true;
			this->AddGenreButton->Click += gcnew System::EventHandler(this, &AddMovieForm::AddGenreButton_Click);
			// 
			// RuntimeLabel
			// 
			this->RuntimeLabel->AutoSize = true;
			this->RuntimeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->RuntimeLabel->Location = System::Drawing::Point(354, 32);
			this->RuntimeLabel->Name = L"RuntimeLabel";
			this->RuntimeLabel->Size = System::Drawing::Size(123, 25);
			this->RuntimeLabel->TabIndex = 15;
			this->RuntimeLabel->Text = L"Время (мин.)";
			// 
			// RuntimeTextBox
			// 
			this->RuntimeTextBox->Location = System::Drawing::Point(359, 61);
			this->RuntimeTextBox->Name = L"RuntimeTextBox";
			this->RuntimeTextBox->Size = System::Drawing::Size(121, 33);
			this->RuntimeTextBox->TabIndex = 16;
			// 
			// WriterComboBox
			// 
			this->WriterComboBox->FormattingEnabled = true;
			this->WriterComboBox->Location = System::Drawing::Point(13, 222);
			this->WriterComboBox->Name = L"WriterComboBox";
			this->WriterComboBox->Size = System::Drawing::Size(234, 33);
			this->WriterComboBox->TabIndex = 17;
			// 
			// DirectorComboBox
			// 
			this->DirectorComboBox->FormattingEnabled = true;
			this->DirectorComboBox->Location = System::Drawing::Point(265, 222);
			this->DirectorComboBox->Name = L"DirectorComboBox";
			this->DirectorComboBox->Size = System::Drawing::Size(215, 33);
			this->DirectorComboBox->TabIndex = 18;
			// 
			// AddMovieForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 600);
			this->Controls->Add(this->DirectorComboBox);
			this->Controls->Add(this->WriterComboBox);
			this->Controls->Add(this->RuntimeTextBox);
			this->Controls->Add(this->RuntimeLabel);
			this->Controls->Add(this->AddGenreButton);
			this->Controls->Add(this->GenereComboBox);
			this->Controls->Add(this->GenreLabel);
			this->Controls->Add(this->GenersListBox);
			this->Controls->Add(this->YearComboBox);
			this->Controls->Add(this->CountriesComboBox);
			this->Controls->Add(this->YearLabel);
			this->Controls->Add(this->CountryLabel);
			this->Controls->Add(this->DirectorLabel);
			this->Controls->Add(this->WriterLabel);
			this->Controls->Add(this->NameTextBox);
			this->Controls->Add(this->OkButton);
			this->Controls->Add(this->NameLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"AddMovieForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddMovieForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	protected: virtual void AddMovieForm::OnClosed(System::EventArgs^ e) override
	{
		ParentForm->UpdateData(0);
		ParentForm->Show();
	}

	private:  Movie ^ AddMovieForm::ReadMovieInput()
	{
		Movie^ movie = gcnew Movie();
		movie->Title = NameTextBox->Text;
		movie->Writer->Name = WriterComboBox->Text;
		movie->Director->Name = DirectorComboBox->Text;
		movie->Country = CountriesComboBox->Text;
		movie->Year = System::Convert::ToInt32(YearComboBox->Text);
		movie->Runtime = System::Convert::ToInt32(YearComboBox->Text);
		movie->Geners = Utility::ItemListToStrArray(GenersListBox);
		return movie;
	}

#pragma endregion
	private: System::Void AddGenreButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		GenersListBox->Items->Add(GenereComboBox->Text);
	}
	private: System::Void OkButton_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Movie^ movie = AddMovieForm::ReadMovieInput();
			Movie::WriteMovie(movie);
			delete(movie);
			this->Close();
		}
		catch (Exception^) {
			MessageBox::Show("Заполните все поля", "Ошибка");
		}
	}
	private: System::Void ValidateInputValues(System::Object^  sender, System::EventArgs^  e) {
	
	}
};
}