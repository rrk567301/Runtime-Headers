@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)ppsUpgradeArchiveConfiguration;
+ (id)mssLostBeforeThisDrainConfiguration;
+ (id)ppsCEArchiveConfiguration;
+ (id)ppsXCArchiveConfiguration;
+ (id)abcDefaultConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)spotlightInternalWatchdogConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)hangTracerNonWatchOSInternalDownsamplingConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)ppsSafeguardArchiveConfiguration;
+ (id)shareSheetMadRequestTimeoutConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)backlightServicesFlipboookHangConfiguration;
+ (id)mssLostThisDrainConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)libtraceQuarantineConfiguration;
+ (id)sqlQueryPerformanceConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)hangTracerNonWatchOSCustomerConfiguration;
+ (id)libtraceLoggingSampleConfiguration;
+ (id)healthKitSlowWorkoutConfiguration;
+ (id)sentryAppLaunchConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)newsConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_External;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)pearlAFileBundleConfiguration;
+ (id)appIntentsServicesSlowActivityConfiguration;
+ (id)hangTracerNonWatchOSSeedConfiguration;
+ (id)watchdogdDefaultConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_Internal;
+ (id)RMEIssueCategoryConfiguration;
+ (id)caHitchesConfiguration;
+ (id)skylightHitchesConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)drmRogueTaskConfiguration;
+ (id)hangTracerNonWatchOSInternalNoDownsamplingConfiguration;
+ (id)ppsBGArchiveConfiguration;
+ (id)_entityName;
+ (id)softwareUpdateLogoutInterruptedConfiguration;
+ (id)shareSheetTimeoutConfiguration;

- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)description;
- (id)initWithPlistDict:(id)a0;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)jsonCompatibleDictRepresentation;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;

@end
