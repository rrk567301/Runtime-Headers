@class NSString, NSArray, TRIRolloutDeployment, NSDate, TRIRolloutTaskSupport;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIRolloutTargetingTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    TRIRolloutTaskSupport *_support;
    BOOL _includeDependencies;
    id<TRITaskAttributing> _taskAttribution;
    unsigned long long _triggerEvent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;
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

+ (id)taskWithRolloutDeployment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3;
+ (id)parseFromData:(id)a0;

- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)_asPersistedTask;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)trialSystemTelemetry;
- (void)encodeWithCoder:(id)a0;
- (id)dimensions;
- (id)_runTaskUsingContext:(id)a0 withTaskQueue:(id)a1 rolloutTargeter:(id)a2 error:(id *)a3;
- (id)serialize;
- (id)_taskResultWithStatus:(int)a0 reportResults:(BOOL)a1 nextTasks:(id)a2;
- (id)_systemCovariatesWithPaths:(id)a0;
- (id)initWithRolloutDeployment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3;
- (id)metrics;
- (id)initWithCoder:(id)a0;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
