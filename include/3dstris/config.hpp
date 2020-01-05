#pragma once

#include <3ds.h>
#include <nlohmann/json.hpp>

struct Config {
	Config();
	~Config();

	void saveConfig(bool overwrite = true);

	double das = 0.2;
	double arr = 0.0;

	bool configFailed = false;

   private:
	const FS_Path dirPath = fsMakePath(PATH_ASCII, "/3dstris");
	const FS_Path configPath = fsMakePath(PATH_ASCII, "/3dstris/config.json");

	FS_Archive sdmcArchive;

	Handle dirHandle;
	Handle configHandle;
};
