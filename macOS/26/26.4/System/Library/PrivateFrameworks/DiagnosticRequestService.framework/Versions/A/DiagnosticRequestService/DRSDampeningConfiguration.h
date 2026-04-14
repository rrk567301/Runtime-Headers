@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)mssLostBeforeThisDrainConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)watchdogdDefaultConfiguration;
+ (id)hangTracerNonWatchOSInternalDownsamplingConfiguration;
+ (id)drmRogueTaskConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)abcDefaultConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)healthKitSlowWorkoutConfiguration;
+ (id)ppsSafeguardArchiveConfiguration;
+ (id)shareSheetMadRequestTimeoutConfiguration;
+ (id)hangTracerNonWatchOSInternalNoDownsamplingConfiguration;
+ (id)libtraceQuarantineConfiguration;
+ (id)backlightServicesFlipboookHangConfiguration;
+ (id)ppsBGArchiveConfiguration;
+ (id)appIntentsServicesSlowActivityConfiguration;
+ (id)mssLostThisDrainConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_Internal;
+ (id)shareSheetTimeoutConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)sentryAppLaunchConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)RMEIssueCategoryConfiguration;
+ (id)caHitchesConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)ppsCEArchiveConfiguration;
+ (id)spotlightInternalWatchdogConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)coreAudioOverloadConfiguration;
+ (id)_entityName;
+ (id)libtraceLoggingSampleConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)skylightHitchesConfiguration;
+ (id)ppsUpgradeArchiveConfiguration;
+ (id)newsConfiguration;
+ (id)ppsAppleCareConfiguration;
+ (id)hangTracerNonWatchOSCustomerConfiguration;
+ (id)sqlQueryPerformanceConfiguration;
+ (id)softwareUpdateLogoutInterruptedConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_External;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)ppsXCArchiveConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)pearlAFileBundleConfiguration;
+ (id)hangTracerNonWatchOSSeedConfiguration;

- (id)debugDescription;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)description;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)initWithPlistDict:(id)a0;

@end
