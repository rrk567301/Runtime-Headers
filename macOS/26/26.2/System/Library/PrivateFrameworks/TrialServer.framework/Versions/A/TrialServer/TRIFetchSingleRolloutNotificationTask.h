@class NSString, NSArray, NSDate, TRIRolloutDeployment, TRIRolloutTaskSupport;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIFetchSingleRolloutNotificationTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    TRIRolloutDeployment *_deployment;
    id<TRITaskAttributing> _taskAttributing;
    TRIRolloutTaskSupport *_support;
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

+ (id)parseFromData:(id)a0;
+ (id)taskWithDeployment:(id)a0 taskAttributing:(id)a1;

- (id)trialSystemTelemetry;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)dimensions;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithDeployment:(id)a0 taskAttributing:(id)a1;
- (id)serialize;
- (id)metrics;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)requiredCapabilities;
- (id)_asPersistedTask;
- (void).cxx_destruct;
- (void)runEnqueueHandlerUsingContext:(id)a0;

@end
