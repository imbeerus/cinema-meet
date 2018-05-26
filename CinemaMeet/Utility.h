#pragma once

#define ALPHABET_FILE_PATH "Data/alphabet.txt"
#define GENRES_FILE_PATH "Data/genres.txt"
#define COUNTRIES_FILE_PATH "Data/countries.txt"
#define YEARS_FILE_PATH "Data/years.txt"
#define NOMINATIONS_FILE_PATH "Data/nominations.txt"

#define DEFAULT_SIZE 100
#define FILE_EXTENSION_SIZE 4

namespace Utility
{

	static void WriteFile(array<System::String^>^ DataArray, System::String^ FilePath)
	{
		try
		{
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(FilePath);
			try
			{
				for each(System::String^ str in DataArray) sw->WriteLine(str);
			}
			finally
			{
				if (sw) delete (System::IDisposable^) sw;
			}
		}
		catch (System::Exception^ e)
		{
			System::Console::WriteLine("Файл не может быть записан:");
			System::Console::WriteLine(e->Message);
		}
		return;
	}

	static array<System::String^>^ ReadFile(System::String^ FilePath)
	{
		array<System::String^>^ TempArray = gcnew array<System::String^>(DEFAULT_SIZE);
		System::String^ line;
		int count = 0;
		try
		{
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(FilePath);
			try
			{
				while (line = sr->ReadLine())
				{
					TempArray[count] = line;
					count++;
				}
			}
			finally
			{
				if (sr) delete (System::IDisposable^) sr;
			}
		}
		catch (System::Exception^ e)
		{
			System::Console::WriteLine("Файл не может быть прочитан:");
			System::Console::WriteLine(e->Message);
		}

		array<System::String^>^ ReusltArray = gcnew array<System::String^>(count);
		for (int i = 0; i < count; i++) ReusltArray[i] = TempArray[i];
		delete(TempArray);
		delete(line);
		return ReusltArray;
	}

	static System::String^ GetFileName(System::String^ filePath)
	{
		System::String^ withoutPath = filePath->Remove(0, filePath->LastIndexOf("\\") + 1);
		System::String^ name = withoutPath->Remove(withoutPath->LastIndexOf("."), FILE_EXTENSION_SIZE);
		delete(withoutPath);
		return name;
	}

	static System::String^ GetDirName(System::String^ filePath)
	{
		System::String^ name = filePath->Remove(0, filePath->LastIndexOf("/") + 1);
		return name;
	}

	static inline array<System::String^>^ GetAlphabetList() { return ReadFile(ALPHABET_FILE_PATH); }
	static inline array<System::String^>^  GetGenresList() { return ReadFile(GENRES_FILE_PATH); }
	static inline array<System::String^>^  GetCountriesList() { return ReadFile(COUNTRIES_FILE_PATH); }
	static inline array<System::String^>^  GetYearsList() { return ReadFile(YEARS_FILE_PATH); }
	static inline array<System::String^>^  GetNominationsList() { return ReadFile(NOMINATIONS_FILE_PATH); }

	static array<System::String^>^ ItemListToStrArray(System::Windows::Forms::ListBox^ listBox) {
		array<System::String^>^ ReusltArray = gcnew array<System::String^>(listBox->Items->Count);
		for (int i = 0; i < ReusltArray->Length; i++) ReusltArray[i] = System::Convert::ToString(listBox->Items[i]);
		return ReusltArray;
	}

	static array<System::String^>^ IntArrayToStrArray(array<int>^ ValuesArray) {
		array<System::String^>^ ReusltArray = gcnew array<System::String^>(ValuesArray->Length);
		int count = 0;
		for each(int Value in ValuesArray) {
			ReusltArray[count] = System::Convert::ToString(Value);
			count++;
		}
		return ReusltArray;
	}

	static array<int>^ StrArrayToIntArray(array<System::String^>^ ValuesArray) {
		array<int>^ ReusltArray = gcnew array<int>(ValuesArray->Length);
		int count = 0;
		for each(System::String^ Value in ValuesArray) {
			ReusltArray[count] = System::Convert::ToInt32(Value);
			count++;
		}
		return ReusltArray;
	}

	static double AverageValueOfIntArray(array<int>^ ValuesArray) {
		int sum = 0;
		for each(int Value in ValuesArray) {
			sum += Value;
		}
		double value = sum / (double)ValuesArray->Length;
		return System::Math::Round(value, 1);
	}

	static array<System::String^>^ ReadFileNames(System::String^ path) {
		array<System::String^>^ FilesArray = System::IO::Directory::GetFiles(path);
		array<System::String^>^ NamesArray = gcnew array<System::String^>(FilesArray->Length);
		for (int i = 0; i < NamesArray->Length; i++) {
			System::String^ profileName = Utility::GetFileName(FilesArray[i]);
			NamesArray[i] = profileName;
		}
		delete(FilesArray);
		return NamesArray;
	}

	static void MakeFolder(System::String^ Path)
	{
		try
		{
			System::IO::Directory::CreateDirectory(Path);
		}
		catch (System::Exception^){
		}
		return;
	}
}
