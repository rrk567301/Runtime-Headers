@class TRIBMLTTaskSupport, NSString, NSArray, NSDate, TRIBMLTDeployment;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIBMLTTargetingTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    TRIBMLTTaskSupport *_support;
    char _includeDependencies;
    id<TRITaskAttributing> _taskAttribution;
    unsigned long long _triggerEvent;
    TRIBMLTDeployment *_deployment;
    NSString *_bmltBatchNotificationIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeployment;
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

+ (id)parseFromData:(id)a0;
+ (id)taskWithBMLTDeployment:(id)a0 includeDependencies:(char)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3;
+ (id)taskWithBMLTDeployment:(id)a0 includeDependencies:(char)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3 bmltBatchNotificationIdentifier:(id)a4;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metrics;
- (id)dimensions;
- (id)serialize;
- (id)trialSystemTelemetry;
- (void)_allocationTelemetryWithEvent:(unsigned char)a0 factorPackSetId:(id)a1 bmltRecord:(id)a2 context:(id)a3;
- (id)_asPersistedTask;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)a0;
- (char)_targetBMLTDeployment:(id)a0 appendingTelemetryToSupport:(id)a1 backgroundMLTaskDatabase:(id)a2 backgroundMLTaskHistoryDatabase:(id)a3 targeter:(id)a4 reportTelemetryToServer:(char *)a5 factorPackSetIdToActivate:(id *)a6 wasEnrolled:(char *)a7 shouldDisenroll:(char *)a8 error:(id *)a9;
- (id)_taskResultWithStatus:(int)a0 wasEnrolled:(char)a1 reportResults:(char)a2 nextTasks:(id)a3 bmltHistoryDatabase:(id)a4;
- (id)initWithBMLTDeployment:(id)a0 includeDependencies:(char)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3 bmltBatchNotificationIdentifier:(id)a4;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;

@end
