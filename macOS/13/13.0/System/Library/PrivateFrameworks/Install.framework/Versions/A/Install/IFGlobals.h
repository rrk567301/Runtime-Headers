@interface IFGlobals : NSObject

+ (id)hardwareModel;
+ (BOOL)hasAppleIPAddress;
+ (BOOL)runningFromInstallMedia;
+ (id)installFrameworkVersionString;
+ (void)resetIFGlobalsCache;
+ (BOOL)shouldExecuteScripts;
+ (id)raidOperationQueue;
+ (BOOL)isCPUSWBuildTrain;
+ (BOOL)runningInRosetta;
+ (BOOL)runningOnPhysicalIntel;
+ (BOOL)shouldDisableLowPriorityIO;
+ (BOOL)shouldShowPerfStats;
+ (id)activeLanguage;
+ (BOOL)showVerboseLog;
+ (BOOL)debugReadOnlyRoot;
+ (BOOL)autoPilot;
+ (id)autoPilotTarget;
+ (double)installFrameworkVersion;
+ (id)OSInstallImageLocation;
+ (void)logSystemInfo;
+ (void)logMemStats;
+ (BOOL)lowMemorySituation;
+ (BOOL)debugChoiceAttrEngine;
+ (void)setSpecialFlags:(id)a0;
+ (BOOL)isDittoEnabled;
+ (BOOL)isPFScriptModuleEnabled;
+ (BOOL)isPatchDiagnosticEnabled;
+ (BOOL)enableP2PDownloads;
+ (BOOL)dontWriteFiles;
+ (id)stringForNVRAMVariable:(id)a0;

@end
