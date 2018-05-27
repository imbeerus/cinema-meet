#pragma once
#include "Rating.h"
#include "Profile.h"

#define MOVIES_PATH "Data/Movies"
#define GENERS_PATH "Data/Geners"
#define MOVIES_FILES_PATH "Data/Movies/{0}.txt"
#define GENERS_FILES_PATH "Data/Geners/{0}_GENERS.txt"

#define RUNTIME_CAPTION "{0} ÷. {1} ì."
#define MINUTES_IN_HOUR 60

public ref class Movie
{

public:
	Movie();
	virtual ~Movie();

	System::String^ Title;
	System::String^ Country;

	int Year;
	int Runtime;


	Profile^ Director;
	Profile^ Writer;

	array<System::String^>^ Geners;
	System::String^ GetGenersStr();
	System::String^ GetRuntimeStr();

	array<System::String^>^ ToStrArray();
	System::Windows::Forms::ListViewItem^ ToListViewItem(System::String^, System::String^);

	static void WriteMovie(Movie^);
	static Movie^ ReadMovie(System::String^);
	static array<System::String^>^ ReadMovieGeners(System::String^);

	static array<Movie^>^ ReadMoviesArray();
};



