@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)_entityName;
+ (id)RMEIssueCategoryConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)caHitchesConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)hangTracerIOSCustomerConfiguration;
+ (id)hangTracerIOSInternalDownsamplingConfiguration;
+ (id)hangTracerIOSInternalNoDownsamplingConfiguration;
+ (id)hangTracerIOSSeedConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)ppsArchiveConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)sentryMacOSAppLaunchConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)watchdogdDefaultConfiguration;

- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)initWithPlistDict:(id)a0;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)jsonCompatibleDictRepresentation;

@end
