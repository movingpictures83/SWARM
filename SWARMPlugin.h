#ifndef SWARMPLUGIN_H
#define SWARMPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class SWARMPlugin : public Plugin
{
public: 
 std::string toString() {return "SWARM";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
