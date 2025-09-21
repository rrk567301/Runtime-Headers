@interface IFGlobals : NSObject

+ (id)hardwareModel;
+ (char)hasAppleIPAddress;
+ (char)runningFromInstallMedia;
+ (id)installFrameworkVersionString;
+ (id)autoPilotTarget;
+ (id)OSInstallImageLocation;
+ (id)activeLanguage;
+ (char)autoPilot;
+ (char)debugChoiceAttrEngine;
+ (char)debugReadOnlyRoot;
+ (char)dontWriteFiles;
+ (char)enableP2PDownloads;
+ (double)installFrameworkVersion;
+ (char)isCPUSWBuildTrain;
+ (char)isDittoEnabled;
+ (char)isPFScriptModuleEnabled;
+ (char)isPatchDiagnosticEnabled;
+ (void)logMemStats;
+ (void)logSystemInfo;
+ (char)lowMemorySituation;
+ (id)raidOperationQueue;
+ (void)resetIFGlobalsCache;
+ (char)runningInRosetta;
+ (char)runningOnPhysicalIntel;
+ (void)setSpecialFlags:(id)a0;
+ (char)shouldDisableLowPriorityIO;
+ (char)shouldExecuteScripts;
+ (char)shouldShowPerfStats;
+ (char)showVerboseLog;
+ (id)stringForNVRAMVariable:(id)a0;

@end
