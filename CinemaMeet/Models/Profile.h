#pragma once

#define GUESTS_PATH "Data/Guests"
#define PARTICIPANT_PATH "Data/Participant"
#define JURY_PATH "Data/Jury"
#define GUESTS_FILES_PATH "Data/Guests/{0}.txt"
#define PARTICIPANT_FILES_PATH "Data/Participant/{0}.txt"
#define JURY_FILES_PATH "Data/Jury/{0}.txt"

public ref class Profile
{
public:
	Profile();
	Profile(System::String^, int);

	System::String^ Name;
	int UserType; // 0 - GUESTS, 1 - PARTICIPANT, 2 - JURY

	static System::String^ GetPathByType(int);
	static void WriteProfile(Profile^);
	static void WriteProfile(System::String^, int);
	static Profile^ ReadProfile(System::String^, int);

	static array<System::String^>^ ReadGestsArray();
	static array<System::String^>^ ReadParticipantArray();
	static array<System::String^>^ ReadJuryArray();
};
