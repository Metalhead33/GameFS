#ifndef FSSYSTEM_H
#define FSSYSTEM_H
#include "MountedPath.hpp"
#include "FileHandle.hpp"
#include "MacroFunctions.hpp"
#include <vector>
DEFINE_CLASS(FsSystem)

class FsSystem
{
public:
	FsSystem();
	pFileHandle OpenFile(std::string filename);
private:
	std::vector<sMountedPath> paths;
};

#endif // FSSYSTEM_H
