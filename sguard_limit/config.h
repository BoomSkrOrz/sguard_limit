#pragma once
#include <Windows.h>
#include <string>


// config load & save module (sington)
class ConfigManager {

private:
	static ConfigManager  configManager;

private:
	ConfigManager();
	~ConfigManager()                                   = default;
	ConfigManager(const ConfigManager&)                = delete;
	ConfigManager(ConfigManager&&)                     = delete;
	ConfigManager& operator= (const ConfigManager&)    = delete;
	ConfigManager& operator= (ConfigManager&&)         = delete;

public:
	static ConfigManager&  getInstance();

public:
	void    init(const std::string& profileDir);
	bool    loadConfig();
	void    writeConfig();

private:
	std::string  profile;
};