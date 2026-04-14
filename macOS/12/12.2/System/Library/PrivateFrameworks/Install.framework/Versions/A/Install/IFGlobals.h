@interface IFGlobals : NSObject

+ (id)hardwareModel;
+ (BOOL)hasAppleIPAddress;
+ (BOOL)runningFromInstallMedia;
+ (id)installFrameworkVersionString;
+ (id)raidOperationQueue;
+ (id)stringForNVRAMVariable:(id)a0;
+ (BOOL)debugReadOnlyRoot;
+ (BOOL)shouldDisableLowPriorityIO;
+ (BOOL)showVerboseLog;
+ (BOOL)dontWriteFiles;
+ (id)OSInstallImageLocation;
+ (void)resetIFGlobalsCache;
+ (BOOL)shouldExecuteScripts;
+ (BOOL)isCPUSWBuildTrain;
+ (BOOL)runningInRosetta;
+ (BOOL)runningOnPhysicalIntel;
+ (BOOL)shouldShowPerfStats;
+ (id)activeLanguage;
+ (BOOL)autoPilot;
+ (id)autoPilotTarget;
+ (double)installFrameworkVersion;
+ (void)logSystemInfo;
+ (void)logMemStats;
+ (BOOL)lowMemorySituation;
+ (BOOL)debugChoiceAttrEngine;
+ (void)setSpecialFlags:(id)a0;
+ (BOOL)isDittoEnabled;
+ (BOOL)isPFScriptModuleEnabled;
+ (BOOL)isPatchDiagnosticEnabled;
+ (BOOL)enableP2PDownloads;

@end
