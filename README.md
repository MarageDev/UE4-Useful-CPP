# UE4-Useful-CPP

General function library plugin for Unreal Engine 4.

## Install and Setup 
### How to install a plugin
1. Download the plugin you want from the repository
2. Ensure your project is a c++ project (Make a c++ class to convert it)
3. Copy the plugin folder into the 'Plugins' folder of your project (Make the folder if it doesnt exist)
4. You can now use it

## Plugins list
- [File Manager](#file-manager)

## File Manager
### How to use
You can use the functions from the plugin by searching in the "blueprint browser" ( right click while you are in a blueprint graph ) for "FileManager".

![image](https://user-images.githubusercontent.com/33568643/162084171-33fcbb16-0709-4c52-8bdb-3ff657c3496d.png)


### Documentation
The functions below are subject to changes and are currently in WIP
#### File Manager
> ***Note :*** 'FileName' is relative to the project directory, 'FilePath' or 'FullDir' are full paths.
```cs
ReadText : read the text content of a specified file
```

![image](https://user-images.githubusercontent.com/33568643/162084505-45446f1a-11a3-475b-97a4-d1e55879accf.png)

```cs
WriteText : write text content into a specified file
```

![image](https://user-images.githubusercontent.com/33568643/162084680-ebe5eb6f-8713-4ae6-aa8a-1b64528fdb2e.png)

```cs
WriteTextLines : write an array of lines into a specified file. A new-line char is placed inbetween each line
```

![image](https://user-images.githubusercontent.com/33568643/162085335-b88a4bf8-09d8-4aa6-95e1-a22188fa7c86.png)


```cs
CreateFile : create a file with empty content
```
![image](https://user-images.githubusercontent.com/33568643/162085146-4c549b38-463a-410b-961c-673a84dda7dc.png)

```cs
ListFilesInDir : find all the files under a specified directory with the specified extension, returns an array of file names
```

![image](https://user-images.githubusercontent.com/33568643/162085216-c17e3f48-fc9c-4b0c-b637-cc36c90f031c.png)

```cs
DoesDirExist : check if a directory exists (full path)
```

![image](https://user-images.githubusercontent.com/33568643/162085486-2d8a7200-a3ef-4dc9-bb63-0aad508d6cb0.png)

```cs
DoesFileExist : check if a file exists (full path)
```

![image](https://user-images.githubusercontent.com/33568643/162085551-37a0ea6b-01bc-4730-ba8c-be951b5b9115.png)


## Credits
Made by [Marage](https://github.com/MarageDev)  and [Oxi](https://github.com/oxi-dev0) 
