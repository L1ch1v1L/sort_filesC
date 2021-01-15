void find_extension(char* file_extension, char* file_name, int strlen_of_file)
{
	int number_before_extension;
	for(int i = 0;i <= strlen_of_file;++i)
	{
		if (file_name[i] == '.') number_before_extension = i;
	}
	for (int i = number_before_extension,d = 0;i <= strlen_of_file;++i,++d)
	{
		file_extension[d] = file_name[i];
	}
}
