#include "Movie.h"
#include "../Utility.h"

Movie::Movie()
{
}

Movie::~Movie()
{
	delete(Title);
	delete(Country);
	delete(Director);
	delete(Writer);
	delete(Geners);
	delete(Director);
	delete(Writer);
}

Movie^ Movie::ReadMovie(System::String^ movieTitle)
{
	Movie^ movie = gcnew Movie();

	array<System::String^>^ LinesArray = Utility::ReadFile(System::String::Format(MOVIES_FILES_PATH, movieTitle));
	movie->Title = LinesArray[0];
	movie->Country = LinesArray[1];
	movie->Year = System::Convert::ToInt32(LinesArray[2]);
	movie->Runtime = System::Convert::ToInt32(LinesArray[3]);
	movie->Director = gcnew Profile(LinesArray[4], 1);
	movie->Writer = gcnew Profile(LinesArray[5], 1);
	delete(LinesArray);

	movie->Geners = Movie::ReadMovieGeners(movieTitle);
	return movie;
}

System::Windows::Forms::ListViewItem^ Movie::ToListViewItem() {
	return (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(8) {
		Title,
			GetGenersStr(), Country, System::Convert::ToString(Year), Director->Name, Writer->Name, System::Convert::ToString("TODO"), System::Convert::ToString("TODO")
	}, -1));
}

inline array<System::String^>^ Movie::ReadMovieGeners(System::String^ title) { return Utility::ReadFile(System::String::Format(GENERS_FILES_PATH, title)); }

array<Movie^>^ Movie::ReadMoviesArray()
{
	array<System::String^>^ FilesArray = System::IO::Directory::GetFiles(MOVIES_PATH);
	array<Movie^>^ MoviesArray = gcnew array<Movie^>(FilesArray->Length);
	for (int i = 0; i < MoviesArray->Length; i++) {
		System::String^ movieName = Utility::GetFileName(FilesArray[i]);
		MoviesArray[i] = Movie::ReadMovie(movieName);
	}
	delete(FilesArray);
	return MoviesArray;
}

array<System::String^>^ Movie::ToStrArray()
{
	array<System::String^>^ LinesArray = gcnew array<System::String^>(6);
	LinesArray[0] = Title;
	LinesArray[1] = Country;
	LinesArray[2] = System::Convert::ToString(Year);
	LinesArray[3] = System::Convert::ToString(Runtime);
	LinesArray[4] = Director->Name;
	LinesArray[5] = Writer->Name;
	return LinesArray;
}

System::String ^ Movie::GetGenersStr()
{
	System::String^ genersStr;
	for (int i = 0; i < Geners->Length; i++)
	{
		if (i != Geners->Length - 1) genersStr += Geners[i] + "; ";
		else genersStr += Geners[i];
	}
	return genersStr;
}

System::String ^ Movie::GetRuntimeStr()
{
	int hour = Runtime / MINUTES_IN_HOUR;
	int minutes = Runtime - (hour * MINUTES_IN_HOUR);
	return System::String::Format(RUNTIME_CAPTION, hour, minutes);
}

void Movie::WriteMovie(Movie^ movie)
{
	array<System::String^>^ LinesArray = movie->ToStrArray();
	Utility::WriteFile(LinesArray, System::String::Format(MOVIES_FILES_PATH, movie->Title));
	LinesArray = movie->Geners;
	Utility::WriteFile(LinesArray, System::String::Format(GENERS_FILES_PATH, movie->Title));
	delete(LinesArray);
	return;
}
