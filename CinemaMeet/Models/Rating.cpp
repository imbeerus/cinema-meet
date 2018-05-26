#include "Rating.h"
#include "../Utility.h"

Rating::Rating()
{

}

array<System::String^>^ Rating::ToStrArray()
{
	array<System::String^>^ LinesArray = gcnew array<System::String^>(7);
	LinesArray[0] = UserName;
	LinesArray[1] = MovieName;
	LinesArray[2] = System::Convert::ToString(Story);
	LinesArray[3] = System::Convert::ToString(Directing);
	LinesArray[4] = System::Convert::ToString(Graphics);
	LinesArray[5] = System::Convert::ToString(Acting);
	LinesArray[6] = System::Convert::ToString(Score);
	return LinesArray;
}

void Rating::WriteRating(Rating^ rating, int userType)
{
	array<System::String^>^ LinesArray = rating->ToStrArray();
	Utility::WriteFile(LinesArray, System::String::Format(GetFilePathByType(userType), rating->UserName, rating->MovieName));
	delete(LinesArray);
	return;
}

Rating^ Rating::ReadRating(System::String^ userName, System::String^ movieName, int userType)
{
	Rating^ rating = gcnew Rating();

	array<System::String^>^ LinesArray = Utility::ReadFile(System::String::Format(GetFilePathByType(userType), userName, movieName));
	rating->UserName = LinesArray[0];
	rating->MovieName = LinesArray[1];
	rating->Story = System::Convert::ToInt32(LinesArray[2]);
	rating->Directing = System::Convert::ToInt32(LinesArray[3]);
	rating->Graphics = System::Convert::ToInt32(LinesArray[4]);
	rating->Acting = System::Convert::ToInt32(LinesArray[5]);
	rating->Score = System::Convert::ToInt32(LinesArray[6]);
	delete(LinesArray);

	return rating;
}

System::String^ Rating::GetFilePathByType(int userType)
{
	switch (userType)
	{
	case 0:
		return GUESTS_RATING_FILES_PATH;
		break;
	case 1:
		return JURY_RATING_FILES_PATH;
		break;
	default:
		break;
	}
	return "";
}

System::String^ Rating::GetPathByType(int userType)
{
	switch (userType)
	{
	case 0:
		return GUESTS_RATING_PATH;
		break;
	case 1:
		return JURY_RATING_PATH;
		break;
	default:
		break;
	}
	return "";
}

array<Rating^>^ Rating::ReadRatingsArray(int userType)
{
	int count = 0;
	array<System::String^>^ DirArray = System::IO::Directory::GetDirectories(System::String::Format(GetPathByType(userType), ""));
	array<System::String^>^ FilesArray;
	for each (System::String^ dir in DirArray) {
		FilesArray = System::IO::Directory::GetFiles(dir);
		for each (System::String^ file in FilesArray) count++;
	}
	array<Rating^>^ RatingsArray = gcnew array<Rating^>(count);
	count = 0;
	for each (System::String^ dir in DirArray) {
		System::String^ userName = Utility::GetDirName(dir);
		FilesArray = System::IO::Directory::GetFiles(dir);
		for each (System::String^ file in FilesArray) {
			System::String^ movieName = Utility::GetFileName(file);
			RatingsArray[count] = Rating::ReadRating(userName, movieName, userType);
			count++;
		}
	}
	delete(FilesArray);
	delete(DirArray);
	return RatingsArray;
}

int Rating::GetRatingParam(int value) {
	switch (value)
	{
	case 0:
		return Story;
		break;
	case 1:
		return Directing;
		break;
	case 2:
		return Graphics;
		break;
	case 3:
		return Acting;
		break;
	case 4:
		return Score;
		break;
	default:
		return 0;
		break;
	}
}
