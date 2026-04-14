@class HMDEventCounterGroup, NSString, HMDEventCountersManager, HMDCounterThresholdTTRTrigger;
@protocol HMMLogEventSubmitting;

@interface HMDCoreDataLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMMDailyTaskRunner>

@property (readonly, nonatomic) HMDEventCounterGroup *aggregationEventGroup;
@property (readonly, nonatomic) HMDEventCounterGroup *cloudStoreReasonsEventGroup;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *workingStoreCommitTTRTrigger;
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *cloudKitImportCountTTRTrigger;
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *cloudKitExportCountTTRTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;

- (void)runDailyTask;
- (id)initWithDataSource:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;
- (void)handleCloudKitOperationEvent:(id)a0;
- (void)handleCloudStoreTransactionEvent:(id)a0;
- (void)handleWorkingStoreTransactionEvent:(id)a0;

@end
