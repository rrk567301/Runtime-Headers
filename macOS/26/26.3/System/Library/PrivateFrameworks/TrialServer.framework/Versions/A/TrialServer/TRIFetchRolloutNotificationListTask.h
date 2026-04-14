@class NSString, NSArray, NSSet, NSDate, NSMutableArray;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIFetchRolloutNotificationListTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    NSMutableArray *_metrics;
    NSMutableArray *_dimensions;
    NSMutableArray *_nextTasks;
    NSDate *_startingFetchDateOverride;
    NSSet *_namespaceNames;
    id<TRITaskAttributing> _taskAttribution;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int retryCount;
@property BOOL wasDeferred;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithStartingFetchDateOverride:(id)a0 namespaceNames:(id)a1 taskAttribution:(id)a2;
+ (id)parseFromData:(id)a0;

- (id)trialSystemTelemetry;
- (id)metrics;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (unsigned long long)requiredCapabilities;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)nextTaskCount;
- (id)dimensions;
- (BOOL)isEqual:(id)a0;
- (void)_addNextTask:(id)a0;
- (id)_asPersistedTask;
- (void)_addMetric:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_addDimension:(id)a0;
- (void)_processRolloutArtifact:(id)a0 context:(id)a1 taskQueue:(id)a2;
- (id)initWithStartingFetchDateOverride:(id)a0 namespaceNames:(id)a1 taskAttribution:(id)a2;

@end
