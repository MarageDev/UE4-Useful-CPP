# UE4-Useful-CPP

General function library plugin for Unreal Engine 4.

## Install and Setup 
### How to install a plugin
1. Download the plugin you want from the repository
2. Ensure your project is a c++ project (Make a c++ class to convert it)
3. Copy the plugin folder into the 'Plugins' folder of your project (Make the folder if it doesnt exist)
4. You can now use it

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
WriteText : write in a specified file a specified content
```

![image](https://user-images.githubusercontent.com/33568643/162084680-ebe5eb6f-8713-4ae6-aa8a-1b64528fdb2e.png)

```cs
CreateText : create a file with a specified extension
```
![image](https://user-images.githubusercontent.com/76840739/162075089-f4971190-be7f-4efe-b8ac-104a39f8458c.png)

```cs
FindFilesInDir : find all the files under a specified directory, returns an array of Names
```

![image](https://user-images.githubusercontent.com/76840739/162074859-de9b6f92-87a3-4e30-87e2-603c94bbb31c.png)


## Credits
Made by [Marage](https://github.com/MarageDev)  and [Oxi](https://github.com/oxi-dev0) 
