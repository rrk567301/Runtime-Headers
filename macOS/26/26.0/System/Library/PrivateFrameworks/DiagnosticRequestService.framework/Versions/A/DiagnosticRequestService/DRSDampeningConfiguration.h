@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)sentryAppLaunchConfiguration;
+ (id)pearlAFileBundleConfiguration;
+ (id)drmRogueTaskConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)hangTracerNonWatchOSCustomerConfiguration;
+ (id)ppsUpgradeArchiveConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)ppsCEArchiveConfiguration;
+ (id)RMEIssueCategoryConfiguration;
+ (id)mssLostBeforeThisDrainConfiguration;
+ (id)watchdogdDefaultConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)hangTracerNonWatchOSInternalNoDownsamplingConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)skylightHitchesConfiguration;
+ (id)healthKitSlowWorkoutConfiguration;
+ (id)ppsBGArchiveConfiguration;
+ (id)appIntentsServicesSlowActivityConfiguration;
+ (id)ppsSafeguardArchiveConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)libtraceLoggingSampleConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)hangTracerNonWatchOSSeedConfiguration;
+ (id)shareSheetTimeoutConfiguration;
+ (id)sqlQueryPerformanceConfiguration;
+ (id)shareSheetMadRequestTimeoutConfiguration;
+ (id)_entityName;
+ (id)newsConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)mssLostThisDrainConfiguration;
+ (id)libtraceQuarantineConfiguration;
+ (id)hangTracerNonWatchOSInternalDownsamplingConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_Internal;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)ppsXCArchiveConfiguration;
+ (id)spotlightInternalWatchdogConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)backlightServicesFlipboookHangConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_External;
+ (id)caHitchesConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)abcDefaultConfiguration;
+ (id)softwareUpdateLogoutInterruptedConfiguration;

- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (id)debugDescription;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (id)description;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)initWithPlistDict:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
