#include "FsSystem.hpp"

FsSystem::FsSystem()
{

}

pFileHandle FsSystem::OpenFile(std::string filename)
{
	pFileHandle temp_handle = 0;
	for(unsigned int i=0;i < paths.size();++i)
	{
		temp_handle = paths[i]->OpenFile(filename);
		if(temp_handle) return temp_handle;
	}
}
