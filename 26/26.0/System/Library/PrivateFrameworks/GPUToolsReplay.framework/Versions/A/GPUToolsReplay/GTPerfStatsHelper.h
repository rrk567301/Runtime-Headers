@class NSString, NSDictionary, NSMutableDictionary;

@interface GTPerfStatsHelper : NSObject {
    NSString *_outputPath;
    struct vector<GTPerfStateGroup, std::allocator<GTPerfStateGroup>> { struct GTPerfStateGroup *__begin_; struct GTPerfStateGroup *__end_; struct GTPerfStateGroup *__cap_; } _perfStateGroups;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
    NSDictionary *_configVariables;
    NSMutableDictionary *_socBlockBandwidths;
}

- (void)setup;
- (void)reset;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithOutputPath:(id)a0;
- (id)initWithConfigurationVariables:(id)a0;
- (BOOL)_collectOperatingPoints;
- (id)_frequenciesForStateName:(const char *)a0 forReg:(unsigned int)a1;
- (id)exportStats;
- (void)gatherStats;
- (void)startCollectingPerfStatsAtInterval:(unsigned long long)a0 andPeriodicSamplesAtInterval:(unsigned long long)a1;
- (void)stopCollectingStats;

@end
