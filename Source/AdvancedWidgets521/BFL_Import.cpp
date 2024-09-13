// Fill out your copyright notice in the Description page of Project Settings.


#include "BFL_Import.h"

#include "Misc/FileHelper.h"

FString UBFL_Import::ImportFile(FString fileLocation)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (PlatformFile.FileExists(*fileLocation))
	{
		FString fileData;
		FFileHelper::LoadFileToString(fileData, *fileLocation);

		return fileData;
	}

	return FString();
}

