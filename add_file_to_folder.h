void add_file_to_folder(char* name, char* name_of_folder)
{	
	int len_name_of_folder = strlen(name_of_folder);
	mkdir(name_of_folder,0777);;
//	printf("name:%s\n",name);
	int len_name_of_file = strlen(name);
//	printf("len_name_of_file:%d\n",len_name_of_file);
	int len_of_new_path = len_name_of_file + len_name_of_folder + 1;
//	printf("len_of_new_path:%d\n",len_of_new_path);
	char new_path[len_of_new_path];
	for(int i = 0; i <= len_name_of_folder; ++i)
	{
	new_path[i] = name_of_folder[i];
	} 
	new_path[len_name_of_folder] = '/';
	for (int d = 0, i = len_name_of_folder+1; i <= len_of_new_path; ++d, ++i)
	{
	new_path[i] = name[d];
	}
//	printf("%s\n",new_path);
	rename(name,new_path);
	remove(name);
}
