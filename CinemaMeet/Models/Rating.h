#pragma once

#define GUESTS_RATING_PATH "Data/Guests/Vote/{0}"
#define JURY_RATING_PATH "Data/Jury/Vote/{0}"
#define GUESTS_RATING_FILES_PATH "Data/Guests/Vote/{0}/{1}.txt"
#define JURY_RATING_FILES_PATH "Data/Jury/Vote/{0}/{1}.txt"

public ref class Rating
{
public:
	Rating();

	System::String^ MovieName;
	System::String^ UserName;

	int Story;
	int Directing;
	int Graphics;
	int Acting;
	int Score;

	int Rating::GetRatingParam(int value);
	array<System::String^>^ ToStrArray();

	static System::String^ GetFilePathByType(int);
	static System::String^ GetPathByType(int);

	static void WriteRating(Rating^, int);
	static Rating^ ReadRating(System::String^, System::String^, int);
	
	static array<Rating^>^ ReadRatingsArray(int);

};

