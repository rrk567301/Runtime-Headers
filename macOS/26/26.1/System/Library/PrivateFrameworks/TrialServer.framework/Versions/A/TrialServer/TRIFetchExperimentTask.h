@class NSString, NSArray, NSDate, TRITrialSystemTelemetry;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIFetchExperimentTask : TRIExperimentBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    id<TRITaskAttributing> _taskAttributing;
    TRITrialSystemTelemetry *_trialSystemTelemetry;
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

+ (id)taskWithExperimentDeployment:(id)a0 taskAttributing:(id)a1;
+ (id)parseFromData:(id)a0;

- (id)metrics;
- (id)dimensions;
- (id)_asPersistedTask;
- (unsigned long long)requiredCapabilities;
- (id)trialSystemTelemetry;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)serialize;
- (id)_nextTasksForRunStatus:(int)a0;
- (id)initWithExperimentDeployment:(id)a0 taskAttributing:(id)a1;

@end
