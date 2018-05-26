#include "Profile.h"
#include "../Utility.h"

Profile::Profile()
{
}

Profile::Profile(System::String^ name, int type)
{
	Name = name;
	UserType = type;
}

System::String^ Profile::GetPathByType(int value) {
	switch (value)
	{
	case 0:
		return GUESTS_FILES_PATH;
		break;
	case 1:
		return PARTICIPANT_FILES_PATH;
		break;
	case 2:
		return JURY_FILES_PATH;
		break;
	default:
		return GUESTS_FILES_PATH;
		break;
	}
}

inline void Profile::WriteProfile(Profile^ profile) { return WriteProfile(profile->Name, profile->UserType); }

void Profile::WriteProfile(System::String^ Name, int UserType)
{
	array<System::String^>^ LinesArray = { Name, System::Convert::ToString(UserType)};
	System::String^ path = Profile::GetPathByType(UserType);
	Utility::WriteFile(LinesArray, System::String::Format(path, Name));
	delete(path);
	return;
}

Profile^ Profile::ReadProfile(System::String^ profileTitle, int userType)
{
	Profile^ profile = gcnew Profile();
	array<System::String^>^ LinesArray;
	System::String^ path = Profile::GetPathByType(profile->UserType);
	LinesArray = Utility::ReadFile(System::String::Format(path, profileTitle));
	profile->Name = LinesArray[0];
	profile->UserType = userType;
	delete(LinesArray);
	delete(path);
	return profile;
}

inline array<System::String^>^ Profile::ReadGestsArray() { return Utility::ReadFileNames(GUESTS_PATH); }
inline array<System::String^>^ Profile::ReadParticipantArray() { return Utility::ReadFileNames(PARTICIPANT_PATH); }
inline array<System::String^>^ Profile::ReadJuryArray() { return Utility::ReadFileNames(JURY_PATH); }
