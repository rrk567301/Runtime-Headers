@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)softwareUpdateLogoutInterruptedConfiguration;
+ (id)ppsXCArchiveConfiguration;
+ (id)healthKitSlowWorkoutConfiguration;
+ (id)shareSheetTimeoutConfiguration;
+ (id)ppsCEArchiveConfiguration;
+ (id)sqlQueryPerformanceConfiguration;
+ (id)ppsUpgradeArchiveConfiguration;
+ (id)backlightServicesFlipboookHangConfiguration;
+ (id)libtraceLoggingSampleConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)_entityName;
+ (id)RMEIssueCategoryConfiguration;
+ (id)pearlAFileBundleConfiguration;
+ (id)mssLostThisDrainConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)memoryToolsDefaultConfiguration;
+ (id)abcDefaultConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)drmRogueTaskConfiguration;
+ (id)hangTracerNonWatchOSInternalNoDownsamplingConfiguration;
+ (id)libtraceQuarantineConfiguration;
+ (id)hangTracerNonWatchOSSeedConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_Internal;
+ (id)drmResourceUsageConfiguration;
+ (id)hangTracerNonWatchOSInternalDownsamplingConfiguration;
+ (id)ppsBGArchiveConfiguration;
+ (id)spindumpWorkflowResponsivenessConfiguration_External;
+ (id)skylightHitchesConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)shareSheetMadRequestTimeoutConfiguration;
+ (id)hangTracerNonWatchOSCustomerConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)appIntentsServicesSlowActivityConfiguration;
+ (id)mssLostBeforeThisDrainConfiguration;
+ (id)spotlightInternalWatchdogConfiguration;
+ (id)sentryAppLaunchConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)newsConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)coreAudioOverloadConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)caHitchesConfiguration;
+ (id)ppsSafeguardArchiveConfiguration;
+ (id)watchdogdDefaultConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;

- (id)debugDescription;
- (id)initWithPlistDict:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (id)description;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;

@end
