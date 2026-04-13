@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRIDeactivateTreatmentTask : TRIExperimentBaseTask <TRIRetryableTask>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL failOnUnrecognizedExperiment;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL wasDeferred;
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
+ (id)taskWithExperimentId:(id)a0 failOnUnrecognizedExperiment:(BOOL)a1;
+ (id)taskWithExperimentId:(id)a0 startTime:(id)a1 failOnUnrecognizedExperiment:(BOOL)a2 triggerEvent:(unsigned long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (unsigned long long)requiredCapabilities;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (BOOL)_notifyUpdatedShadowEvaluationWithExperimentRecord:(id)a0 context:(id)a1;
- (BOOL)_purgeRolloutLayerIfNecessaryWithRecord:(id)a0 fromAppContainer:(id)a1 paths:(id)a2;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)a0;

@end
