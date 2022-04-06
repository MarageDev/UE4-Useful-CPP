// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFileManager.generated.h"

/**
 * 
 */
UCLASS()
class USEFULCPP_API UBPFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	/* Load content of a file */
	UFUNCTION(BlueprintCallable, Category = "FileManager", meta = (Keywords = "ReadText"))
		static bool ReadText(FString FileNameA, FString& SaveTextA);

	/* Write in the file */
	UFUNCTION(BlueprintCallable, Category = "FileManager", meta = (Keywords = "WriteText"))
		static bool WriteText(FString SaveTextB, FString FileNameB);

	/* Create a new file */
	UFUNCTION(BlueprintCallable, Category = "FileManager", meta = (Keywords = "CreateFile"))
		static bool CreateFile(FString FileNameA);

	/* Find all .txt files below a directory */
	UFUNCTION(BlueprintCallable, Category = "FileManager", meta = (Keywords = "FindFilesInDir"))
		static void FindFilesInDir(FString Dir, TArray<FString>& Files);
};
