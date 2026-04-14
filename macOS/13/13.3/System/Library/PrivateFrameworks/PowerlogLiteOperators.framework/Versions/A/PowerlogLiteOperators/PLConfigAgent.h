@interface PLConfigAgent : PLAgent

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionContinuityCamera;
+ (id)entryEventForwardDefinitionKeyboardClicks;
+ (id)entryEventForwardDefinitionKeyboardHaptics;
+ (id)entryEventForwardDefinitionPhotoSharing;
+ (id)entryEventForwardDefintionRinger;
+ (id)entryEventNoneDefinitionAdapterInformation;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (void)resetRAPIDTaskingConfig;

- (void)dealloc;
- (id)init;
- (id)deviceName;
- (void)log;
- (id)bootArgs;
- (id)crashReporterKey;
- (void)initOperatorDependancies;
- (id)seedGroup;
- (id)hwBoardRevision;
- (void)logConfigEntry:(id)a0;
- (long long)autolockTime;
- (id)baseband;
- (id)basebandFirmware;
- (id)deviceShutdownReasons;
- (BOOL)disableCABlanking;
- (int)getDeviceType;
- (unsigned long long)getEnclosureMaterial;
- (BOOL)getMDMStatus;
- (unsigned long long)getMemorySize;
- (int)getOSVariant;
- (id)getSplatVersionString;
- (id)hwConfig;
- (id)logAndUpdateLastBuild:(id)a0;
- (id)logAndUpdateLastUpgradeTime:(id)a0;
- (double)logDeviceDiskSize;
- (void)logEntryToCA:(id)a0;
- (void)logEventNoneConfig;
- (void)logEventNonePairedDeviceConfig;
- (id)logLastBackupTime;
- (void)logToPPTBuild:(id)a0 atDate:(id)a1;
- (BOOL)noWatchdogs;
- (unsigned long long)volumeFreespace:(id)a0;

@end
