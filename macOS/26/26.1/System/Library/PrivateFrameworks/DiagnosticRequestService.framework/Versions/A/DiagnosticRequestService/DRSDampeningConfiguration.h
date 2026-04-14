@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)mailIssueCategoryConfiguration;
+ (id)softwareUpdateLogoutInterruptedConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)ppsSafeguardArchiveConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_External;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)hangTracerNonWatchOSInternalNoDownsamplingConfiguration;
+ (id)backlightServicesFlipboookHangConfiguration;
+ (id)sqlQueryPerformanceConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)pearlAFileBundleConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)libtraceQuarantineConfiguration;
+ (id)drmRogueTaskConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)healthKitSlowWorkoutConfiguration;
+ (id)hangTracerNonWatchOSSeedConfiguration;
+ (id)abcDefaultConfiguration;
+ (id)shareSheetMadRequestTimeoutConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)shareSheetTimeoutConfiguration;
+ (id)spotlightInternalWatchdogConfiguration;
+ (id)libtraceLoggingSampleConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_Internal;
+ (id)ppsUpgradeArchiveConfiguration;
+ (id)caHitchesConfiguration;
+ (id)ppsBGArchiveConfiguration;
+ (id)watchdogdDefaultConfiguration;
+ (id)newsConfiguration;
+ (id)RMEIssueCategoryConfiguration;
+ (id)mssLostBeforeThisDrainConfiguration;
+ (id)ppsCEArchiveConfiguration;
+ (id)_entityName;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)sentryAppLaunchConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)mssLostThisDrainConfiguration;
+ (id)ppsXCArchiveConfiguration;
+ (id)hangTracerNonWatchOSCustomerConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)appIntentsServicesSlowActivityConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)hangTracerNonWatchOSInternalDownsamplingConfiguration;
+ (id)skylightHitchesConfiguration;
+ (id)nandAutoGBBSweepConfiguration;

- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)jsonCompatibleDictRepresentation;
- (id)description;
- (id)initWithPlistDict:(id)a0;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)debugDescription;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;

@end
