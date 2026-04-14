@class NSDictionary;

@interface GTGPUAPSConfig : NSObject

@property (nonatomic) unsigned long long syncDrainMode;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long pulsePeriod;
@property (nonatomic) unsigned long long countPeriod;
@property (nonatomic) unsigned long long tileTracing;
@property (nonatomic) unsigned long long eslInstTracing;
@property (nonatomic) unsigned long long bufferSizeInKb;
@property (nonatomic) unsigned long long systemTimePeriod;
@property (nonatomic) unsigned long long cliqueTraceLevel;
@property (nonatomic) unsigned long long emitPos;
@property (nonatomic) unsigned long long emitThreadControlFlow;
@property (nonatomic) unsigned long long subSamplingMinTraced;
@property (nonatomic) unsigned long long subSamplingTargetThreshold;
@property (nonatomic) BOOL cliqueAdvanceReason;
@property (nonatomic) unsigned long long overridePulsePeriod;
@property (nonatomic) unsigned long long overrideCountPeriod;
@property (nonatomic) unsigned long long overrideTileTracing;
@property (nonatomic) unsigned long long overrideEslInstTracing;
@property (nonatomic) unsigned long long overrideCliqueTraceLevel;
@property (nonatomic) unsigned long long overrideEmitPos;
@property (nonatomic) unsigned long long overrideEmitThreadControlFlow;
@property (nonatomic) BOOL overrideCliqueAdvanceReason;
@property (nonatomic) unsigned long long mGPUMask;
@property (nonatomic) unsigned long long uscNumPerMGPU;
@property (retain, nonatomic) NSDictionary *uscMaskPerMGPU;
@property (readonly, nonatomic) NSDictionary *grcOptions;
@property (readonly, nonatomic) NSDictionary *grcTrigger;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initForCounters;
- (id)initForTimeline;
- (id)initForProfiling;
- (id)initForProfilingConfigurationDetermination;
- (id)initForTimelineConfigurationDetermination;
- (void)readConfig:(id)a0;

@end
