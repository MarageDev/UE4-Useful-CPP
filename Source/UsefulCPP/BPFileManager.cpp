// Fill out your copyright notice in the Description page of Project Settings.


#include "BPFileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UBPFileManager::ReadText(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool UBPFileManager::WriteText(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}

bool UBPFileManager::CreateFile(FString FileNameA)
{
    FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + FileNameA;
    FString FileContent = TEXT("New File");
    return FFileHelper::SaveStringToFile(FileContent, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}
void UBPFileManager::FindFilesInDir(FString Dir, TArray<FString>& Files)
{
    FString dir = FPaths::ProjectDir();
    FString fileExt = TEXT("txt");
    return IFileManager::Get().FindFiles(Files, *(dir + Dir), *fileExt);
}