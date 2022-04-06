# UE4-Useful-CPP

General function library plugin for Unreal Engine 4.

## Install and Setup 
### How to install the plugin
1. Download the "plugin" folder from the Github repository
2. Copy the folder in the root of your project
3. You can now use it

### Example Project
1. Download the repository ( from Git clone or .zip file )
2. ( if you downloaded the .zip, extract it )
3. Start the file "UsefulCPP.uproject"

### How to use
You can use the functions from the plugin by searching in the "blueprint browser" ( right click while you are in a blueprint graph ) for "FileManager".

![image](https://user-images.githubusercontent.com/76840739/162073965-e5a2f277-42f3-43b8-981f-206cd39f133b.png)

### Functions
The functions below are subject to changes and are currently in WIP
#### File Manager
> ***Note :*** The path is relative
```cs
ReadText : read the content of a specified file
```
```cpp
bool UBPFileManager::ReadText(FString FileNameA, FString& SaveTextA)
```
![image](https://user-images.githubusercontent.com/76840739/162074990-0f7b75b9-06e7-4ed2-9872-c23736bc8503.png)

```cs
WriteText : write in a specified file a specified content
```
```cpp
bool UBPFileManager::WriteText(FString SaveTextB, FString FileNameB)
```
![image](https://user-images.githubusercontent.com/76840739/162074927-11240dbc-4835-49ed-a453-a0c5d965771d.png)

```cs
CreateText : create a file with a specified extension
```
```cpp
bool UBPFileManager::CreateFile(FString FileNameA)
```
![image](https://user-images.githubusercontent.com/76840739/162075089-f4971190-be7f-4efe-b8ac-104a39f8458c.png)

```cs
FindFilesInDir : find all the files under a specified directory, returns an array of Names
```
```cpp
void UBPFileManager::FindFilesInDir(FString Dir, TArray<FString>& Files)
```
![image](https://user-images.githubusercontent.com/76840739/162074859-de9b6f92-87a3-4e30-87e2-603c94bbb31c.png)


## Credits
Made by [Marage](https://github.com/MarageDev)  and [Oxi](https://github.com/oxi-dev0) 
