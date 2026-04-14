@class HMDTimeBasedFlagsManager, HMMDateProvider, HMDEventCountersManager;
@protocol HMDLogEventAnalyzerDataSource, HMMLogEventSubmitting, HMDMetricsDeviceStateProvider;

@interface HMDCloudSyncLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, nonatomic) id<HMDMetricsDeviceStateProvider> deviceStateProvider;
@property (readonly, nonatomic) id<HMDLogEventAnalyzerDataSource> dataSource;

+ (id)managedEventCounterRequestGroups;

- (void)handleIncomingCloudPushLogEvent:(id)a0;
- (void)handleMaximumDelayLogEvent:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)resetDataSource;
- (void)handleFetchLogEvent:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)handleUploadLogEvent:(id)a0;
- (void)observeEvent:(id)a0;
- (void)handleUploadReasonLogEvent:(id)a0;
- (void)handleRecordOperationLogEvent:(id)a0;
- (void)handleDecryptionCompletedEvent:(id)a0;
- (id)cloudSyncAnalysisResultForDate:(id)a0;
- (void).cxx_destruct;

@end
