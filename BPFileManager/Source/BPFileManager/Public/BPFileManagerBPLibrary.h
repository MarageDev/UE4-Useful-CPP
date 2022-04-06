// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

#include "BPFileManagerBPLibrary.generated.h"

UENUM(BlueprintType, Category = "File Manager")
enum EFileWrite_BP
{
    FILEWRITE_BP_None                 = 0x00,
    FILEWRITE_BP_NoFail               = 0x01,
    FILEWRITE_BP_NoReplaceExisting    = 0x02,
    FILEWRITE_BP_EvenIfReadOnly       = 0x04,
    FILEWRITE_BP_Append               = 0x08,
    FILEWRITE_BP_AllowRead            = 0x10,
    FILEWRITE_BP_Silent               = 0x20
};

UCLASS()
class UBPFileManagerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	/* Read text data from a file */
	UFUNCTION(BlueprintCallable, Category = "File Manager", meta = (Keywords = "ReadText"))
		static bool ReadText(FString FileName, FString& Text);

	/* Write text data to a file */
	UFUNCTION(BlueprintCallable, Category = "File Manager", meta = (Keywords = "WriteText"))
		static bool WriteText(FString Text, FString FileName, EFileWrite_BP WriteMode);

	/* Write array of lines to a file */
	UFUNCTION(BlueprintCallable, Category = "File Manager", meta = (Keywords = "WriteTextLines"))
		static bool WriteTextLines(TArray<FString> Lines, FString FileName);

	/* Create a new file */
	UFUNCTION(BlueprintCallable, Category = "File Manager", meta = (Keywords = "CreateFile"))
		static bool CreateFile(FString FileName);

	/* Find all files with a certain ending in a directory */
	UFUNCTION(BlueprintCallable, Category = "File Manager", meta = (Keywords = "ListFilesInDir"))
		static void ListFilesInDir(FString FullDir, FString fileExt, TArray<FString>& FileNames);


	/* Check if file exists */
	UFUNCTION(BlueprintPure, Category = "File Manager", meta = (Keywords = "FileExists"))
		static bool DoesFileExist(FString FilePath);

	/* Check if directory exists */
	UFUNCTION(BlueprintPure, Category = "File Manager", meta = (Keywords = "DirExists"))
		static bool DoesDirExist(FString DirPath);
};
