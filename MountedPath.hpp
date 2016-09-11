#ifndef MOUNTEDPATH_H
#define MOUNTEDPATH_H
#include <SSVUtils/SSVUtils.hpp>
#include "MacroFunctions.hpp"
#include "FileHandle.hpp"
DEFINE_CLASS(MountedPath)

class MountedPath
{

public:
	virtual MountedPath();
	virtual pFileHandle OpenFile(std::string);
};

#endif // OWN_GAMEFS_H
