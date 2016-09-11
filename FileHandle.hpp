#ifndef FILEHANDLE_H
#define FILEHANDLE_H
#include "MacroFunctions.hpp"
DEFINE_CLASS(MountedPath)
DEFINE_CLASS(FsSystem)

class FileHandle
{
public:
	FileHandle();
private:
	pFsSystem filesystem;
	sMountedPath mount_point;
};

#endif // FILEHANDLE_H
