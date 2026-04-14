@interface PLConfigAgent : PLAgent

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitionKeyboardClicks;
+ (id)entryEventForwardDefinitionKeyboardHaptics;
+ (id)entryEventForwardDefintionRinger;
+ (id)entryEventForwardDefinitionPhotoSharing;
+ (id)entryEventForwardDefinitionContinuityCamera;
+ (id)entryEventNoneDefinitionAdapterInformation;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (void)resetRAPIDTaskingConfig;

- (void)dealloc;
- (id)init;
- (id)deviceName;
- (void)log;
- (id)buildVersion;
- (id)bootArgs;
- (void)initOperatorDependancies;
- (id)crashReporterKey;
- (id)seedGroup;
- (unsigned long long)volumeFreespace:(id)a0;
- (id)supplementalBuildVersion;
- (int)getDeviceType;
- (unsigned long long)getMemorySize;
- (BOOL)noWatchdogs;
- (BOOL)disableCABlanking;
- (long long)autolockTime;
- (id)logAndUpdateLastBuild:(id)a0;
- (id)logAndUpdateLastUpgradeTime:(id)a0;
- (void)logToPPTBuild:(id)a0 atDate:(id)a1;
- (double)logDeviceDiskSize;
- (id)logLastBackupTime;
- (id)deviceShutdownReasons;
- (id)getDeviceNameMacOS;
- (int)getOSVariant;
- (id)baseband;
- (id)basebandFirmware;
- (id)hwConfig;
- (id)hwBoardRevision;
- (void)logEventNoneConfig;
- (void)logEventNonePairedDeviceConfig;
- (unsigned long long)getEnclosureMaterial;
- (void)logEntryToCA:(id)a0;

@end
