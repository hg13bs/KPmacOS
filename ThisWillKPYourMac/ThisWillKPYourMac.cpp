//
//  ThisWillKPYourMac.cpp
//  ThisWillKPYourMac
//
//  Created by hg13 on 01/11/1445 AH.
//

#include "ThisWillKPYourMac.h"
#include <Headers/kern_api.hpp>
#include <Headers/plugin_start.hpp>

static const char *twkpoff[] {
	"-twkpoff"
};

static const char *twkpdebug[] {
	"-twkpdbg"
};

static const char *twkpbeta[] {
	"-twkpbeta"
};

static twkp Twkp;

void twkp::init() {
	// log what we doing first
	SYSLOG("twkp", "its trolling time :trolleybus:");
	// do funny panic if kext not off
	if (checkKernelArgument("-twkpoff")) {
		SYSLOG("twkp", "cant troll, will troll next time.");
	} else {
		PANIC("twkp", "get panic !!!!!");
	}
}

PluginConfiguration ADDPR(config) {
	xStringify(PRODUCT_NAME),
	parseModuleVersion(xStringify(MODULE_VERSION)),
	LiluAPI::AllowNormal | LiluAPI::AllowInstallerRecovery | LiluAPI::AllowSafeMode,
	twkpoff,
	1,
	twkpdebug,
	1,
	twkpbeta,
	1,
	KernelVersion::Monterey,
	KernelVersion::Sonoma,
	[]() {
		Twkp.init();
	},
};
