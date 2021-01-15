int check_file(char* file_extension, char* extension_music,int len)
{
	for(int i = 0; i < 4; ++i)
	{	
		if (file_extension[i] != extension_music[i])
		{
			return 0;
		}
	}
	return 1;
}
