# UE4-Useful-CPP

General function library plugin for Unreal Engine 4.

## Install and Setup 
### How to install a plugin
1. Download the plugin you want from the repository
2. Ensure your project is a c++ project (Make a c++ class to convert it)
3. Copy the plugin folder into the 'Plugins' folder of your project (Make the folder if it doesnt exist)
4. You can now use it

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

![image](https://user-images.githubusercontent.com/76840739/162074990-0f7b75b9-06e7-4ed2-9872-c23736bc8503.png)

```cs
WriteText : write in a specified file a specified content
```

![image](https://user-images.githubusercontent.com/76840739/162074927-11240dbc-4835-49ed-a453-a0c5d965771d.png)

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
