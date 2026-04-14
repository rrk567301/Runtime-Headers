@interface PLConfigAgent : PLAgent

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (id)entryEventNoneDefinitionAdapterInformation;
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
- (id)getDeviceNameMacOS;
- (void)logEventNoneConfig;
- (void)logEventNonePairedDeviceConfig;
- (id)hardwareModelConfig;
- (int)getDeviceType;
- (id)logAndUpdateLastUpgradeTime:(id)a0;
- (id)logAndUpdateLastBuild:(id)a0;
- (id)deviceShutdownReasons;
- (int)getOSVariant;
- (double)logDeviceDiskSize;
- (unsigned long long)getMemorySize;
- (unsigned long long)volumeFreespace:(id)a0;
- (void)logEntryToCA:(id)a0;
- (BOOL)noWatchdogs;
- (BOOL)disableCABlanking;
- (long long)autolockTime;
- (id)logLastBackupTime;
- (id)baseband;
- (id)basebandFirmware;
- (id)hwConfig;
- (id)hwBoardRevision;
- (unsigned long long)getEnclosureMaterial;

@end
