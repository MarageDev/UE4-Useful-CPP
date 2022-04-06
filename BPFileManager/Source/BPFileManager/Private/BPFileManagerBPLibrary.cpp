// Copyright Epic Games, Inc. All Rights Reserved.

#include "BPFileManagerBPLibrary.h"
#include "BPFileManager.h"

bool UBPFileManagerBPLibrary::ReadText(FString FileName, FString& Text)
{
    return FFileHelper::LoadFileToString(Text, *(FPaths::ProjectDir() + FileName));
}

bool UBPFileManagerBPLibrary::WriteText(FString Text, FString FileName, EFileWrite_BP WriteMode)
{
    bool successful = FFileHelper::SaveStringToFile(Text, *(FPaths::ProjectDir() + FileName), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), WriteMode);

	if (!successful){
		bool createSuccessful = UBPFileManagerBPLibrary::CreateFile(FileName);
		if (createSuccessful){
			return FFileHelper::SaveStringToFile(Text, *(FPaths::ProjectDir() + FileName), FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), WriteMode);
		} else {
			return false;
		}
	} else {
		return true;
	}
}

bool UBPFileManagerBPLibrary::WriteTextLines(TArray<FString> Lines, FString FileName){
	return FFileHelper::SaveStringArrayToFile(Lines, *FileName);
}

bool UBPFileManagerBPLibrary::CreateFile(FString FileName)
{
    FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + FileName;
    FString FileContent = TEXT("");
    return FFileHelper::SaveStringToFile(FileContent, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

void UBPFileManagerBPLibrary::ListFilesInDir(FString fullDir, FString fileExt, TArray<FString>& FileNames)
{
    IFileManager::Get().FindFiles(FileNames, *fullDir, *fileExt);
}


bool UBPFileManagerBPLibrary::DoesFileExist(FString FilePath)
{
    return FPaths::FileExists(*FilePath);
}

bool UBPFileManagerBPLibrary::DoesDirExist(FString DirPath)
{
    return FPaths::DirectoryExists(*DirPath);
}
