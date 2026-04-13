@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)_entityName;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;
+ (id)hangTracerInternalNoDownsamplingConfiguration;
+ (id)hangTracerInternalDownsamplingConfiguration;
+ (id)hangTracerSeedConfiguration;
+ (id)hangTracerCustomerConfiguration;
+ (id)sentryMacOSAppLaunchConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)drmResourceUsageConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;

@end
