@class PLNSNotificationOperatorComposition, PLTimer, CLPCReportingStatSelection, NSDate, CLPCReportingReadResult;
@protocol CLPCReportingAccess;

@interface PLCLPCAgent : PLAgent

@property (retain) NSDate *lastEntryDate;
@property (retain) NSDate *lastCPUClusterEntryDate;
@property (retain) PLTimer *tenMinuteTimer;
@property (retain) id<CLPCReportingAccess> provider;
@property (retain) CLPCReportingStatSelection *selection;
@property (retain) CLPCReportingReadResult *readResults;
@property (retain) id<CLPCReportingAccess> CPUClusterProvider;
@property (retain) CLPCReportingStatSelection *CPUClusterSelection;
@property (retain) CLPCReportingReadResult *CPUClusterReadResults;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitionAccumulators;
+ (id)entryEventIntervalDefinitionCPUClusterAccumulators;
+ (id)entryEventIntervalDefinitionLostPerformance;
+ (id)entryEventIntervalDefinitionTGAccumulators;
+ (id)entryEventIntervalDefinitionTGCPUClusterAccumulators;
+ (id)entryEventIntervalDefinitionTGInfo;
+ (id)entryEventNoneAccumulatorsLookup;
+ (id)entryEventNoneCPUClusterAccumulatorsLookup;
+ (id)entryEventNoneLostPerformanceLookup;

- (void)initOperatorDependancies;
- (void)setupTimer;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)configureCPUClusterAccumulators;
- (BOOL)configureTGInfo;
- (void)addToLookupTableAndCache:(unsigned long long)a0 forEntryKey:(id)a1 andLookupMap:(id)a2;
- (BOOL)configureAccumulators;
- (BOOL)configureLostPerformance;
- (BOOL)configureTGAccumulators;
- (BOOL)configureTGCPUClusterAccumulators;
- (void)constructCache:(id)a0 forEntryKey:(id)a1;
- (void)createLookupCache:(id)a0;
- (void)createLookupMaps;
- (void)logCLPCCPUClusterAccumulators:(id)a0;
- (void)logCLPCLostPerformance:(id)a0;
- (void)logCLPCStatsAccumulators:(id)a0;
- (void)logCLPCTGAccumulators:(id)a0;
- (void)logCLPCTGCPUClusterAccumulators:(id)a0;
- (void)logCLPCTGInfo:(id)a0;
- (void)logLookupTable:(id)a0 withEntryKey:(id)a1;
- (void)setEntryKeys;
- (void)setUpDisplayStateChangeNotification;
- (BOOL)setupStats;
- (BOOL)setupStatsForCPUCluster;

@end
