#include <3ds.h>
#include <unistd.h>

inline bool directoryExists(FS_Archive archive, const FS_Path& path) {
	Handle handle;

	return R_SUCCEEDED(FSUSER_OpenDirectory(&handle, archive, path)) &&
		   R_SUCCEEDED(FSDIR_Close(handle));
}

inline bool fileExists(FS_Archive archive, const FS_Path& path) {
	Handle handle;

	return R_SUCCEEDED(
			   FSUSER_OpenFile(&handle, archive, path, FS_OPEN_READ, 0)) &&
		   R_SUCCEEDED(FSFILE_Close(handle));
}

inline bool exists(const char* path) {
	return access(path, F_OK) == 0;
}
