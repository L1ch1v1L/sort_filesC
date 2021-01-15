#include <stdio.h>
#include <string.h>
#include "checking.h"
#include "find_extension.h"
#include "add_file_to_folder.h"
#include <dirent.h>
void add_file_to_folder(char* name, char* name_of_folder);

void main()
{	
	DIR *dir;
	struct dirent *ent;
	if ((dir = opendir(".")) != NULL) {
  	/* print all the files and directories within directory */
  	while ((ent = readdir (dir)) != NULL) 
  	{
  		char file_extension[1024];
  		char folder_music[7] = "Cmusic";
		char folder_video[7] = "Cvideo";
		char folder_archive[10] = "Carchives";
 	 	char extension_music[4] = ".mp3";
 	 	char extension_video[4] = ".mp4";
 	 	char extension_archive[7] = ".tar.gz";
		char* name = ent->d_name;
		int len = strlen(name);
		int strlen_of_file = strlen(name);
		find_extension(file_extension,name,strlen_of_file);
		if (check_file(file_extension,extension_music,4) == 1) add_file_to_folder(name,folder_music);
		if (check_file(file_extension,extension_video,4) == 1) add_file_to_folder(name,folder_video);
  	}
  		closedir (dir);
	}
}

