@class NSString, NSArray, NSSet, NSDate, NSMutableArray;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIFetchMultipleExperimentNotificationsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    NSMutableArray *_metrics;
    NSMutableArray *_dimensions;
    NSMutableArray *_nextTasks;
    NSDate *_startingFetchDateOverride;
    BOOL _rollbacksOnly;
    BOOL _limitedCarryOnly;
    id<TRITaskAttributing> _taskAttributing;
    NSSet *_namespaceNames;
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

+ (id)taskWithStartingFetchDateOverride:(id)a0 namespaceNames:(id)a1 taskAttributing:(id)a2 rollbacksOnly:(BOOL)a3 limitedCarryOnly:(BOOL)a4;
+ (id)parseFromData:(id)a0;

- (unsigned long long)requiredCapabilities;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)trialSystemTelemetry;
- (long long)nextTaskCount;
- (void)_addNextTask:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dimensions;
- (id)serialize;
- (void)_addDimension:(id)a0;
- (id)metrics;
- (id)initWithCoder:(id)a0;
- (id)nextTasks;
- (void)_addMetric:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_checkIfAnyTreatmentPresent:(id)a0 usingContext:(id)a1;
- (id)_getNextTaskForExperiment:(id)a0 taskContext:(id)a1 taskQueue:(id)a2;
- (id)_nameForNotificationType:(int)a0;
- (BOOL)_processExperiment:(id)a0 taskContext:(id)a1 taskQueue:(id)a2;
- (id)initWithStartingFetchDateOverride:(id)a0 container:(int)a1 team:(id)a2 rollbacksOnly:(BOOL)a3 withNamespaceNames:(id)a4;
- (id)initWithStartingFetchDateOverride:(id)a0 namespaceNames:(id)a1 taskAttributing:(id)a2 rollbacksOnly:(BOOL)a3 limitedCarryOnly:(BOOL)a4;
- (void)updateStatusForNamespacesWithContext:(id)a0;

@end
