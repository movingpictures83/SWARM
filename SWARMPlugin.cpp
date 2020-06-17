#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SWARMPlugin.h"

void SWARMPlugin::input(std::string file) {
 inputfile = file;
}

void SWARMPlugin::run() {}

void SWARMPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "swarm";
myCommand += " ";
myCommand += "-d";
myCommand += " ";
myCommand += "0";
myCommand += " ";
myCommand += "-w";
myCommand += " ";
myCommand += "derep.fasta";
myCommand += " ";
myCommand += "-o";
myCommand += " ";
myCommand += "/dev/null";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += "-a";
myCommand += " ";
myCommand += "1";
myCommand += "; swarm derep.fasta -o "+file;
 system(myCommand.c_str());
}

PluginProxy<SWARMPlugin> SWARMPluginProxy = PluginProxy<SWARMPlugin>("SWARM", PluginManager::getInstance());
