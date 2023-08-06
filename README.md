## MySQL-Database-Connector-Plugin-for-Unreal-Engine-5
Updated from MySQLConnectorUE4Plugin see https://github.com/KhArtNJava/MySQLConnectorUE4Plugin

MySQL Database Connector Plugin for Unreal Engine 5

## What is it?
A plugin for UE5 that provides code and blueprint functionality that enables you to use MySQL databases in your projects based on MySQLConnectorUE4Plugin

By using reflection it is possible to get data directly into member properties of C++ classes and blueprints, provided that the database field names match the UObject property names and that they have compatible data types. By using a normal query you can get data from tables into an array of string key -> value pairs.
Both C++ and blueprints are supported. For convenience, queries can be constructed from nodes in blueprints (easier to plug in variables into queries) or entered directly as a string. From C++ you're expected to use the string version of the methods.

Modifications by Back2RL: 
{
## Installation guide
1. Create a directory called 'Plugins' if it not exists in the root directory of your project (e.g. ../ProjectName/Plugins)
2. Download or clone the repository into this directory. 
	The structure should look like this:
	
	ProjectName
	-	Plugins
		-	MySQLConnectorUE5Plugin
			-	Content
			-	Resources
			-	Source
			-	...
3. Rightclick on the UProject file in the Root directory of your project and click on "Generate Visual Studio Project Files"
4. Open the Visiual Studio Project file and Rightclick on your Project -> Project Only -> Run Code Analysis on 'ProjectName'
5. Wait until the building has finished!! 
6. Launch the UE5 Editor and start building your new connection see the images in the wiki directory

Note : Example Blueprint called SQL_TESTER and some ohter Blueprints containing example Database related data as well as a SQL-Script to generate the Database for the Example BP (enable "show Plugin Content" in Project Browser).
		You can set up a Database, change the Login-data in the 'Information BP', run the SQL-Script and open the 'DemoRoom' Level to test the Database.
		If everything works there should be some prints on screen after 5 seconds of playing.
		Using this plugin in a production is probably not a very good solution as all the database related things are in the game and can potentially be abused... 

## Currently supported platforms
The current version was built and tested using Windows with Unreal Engine version 5.0, 5.1, 5.2
Win32 and Win64 platforms are currently supported and tested. 
Tested using Visual Studio 2022 c/c++, c#
