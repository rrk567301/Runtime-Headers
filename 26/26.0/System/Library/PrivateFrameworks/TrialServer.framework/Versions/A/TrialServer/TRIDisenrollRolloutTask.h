@class NSString, NSArray, NSDate, _PASLock;
@protocol TRITaskQueueStateProviding;

@interface TRIDisenrollRolloutTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    NSString *_rolloutId;
    unsigned long long _triggerEvent;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

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

+ (id)taskWithRolloutId:(id)a0 triggerEvent:(unsigned long long)a1;
+ (id)taskWithRolloutId:(id)a0;
+ (id)parseFromData:(id)a0;

- (unsigned long long)requiredCapabilities;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)trialSystemTelemetry;
- (void)encodeWithCoder:(id)a0;
- (id)dimensions;
- (void)addMetric:(id)a0;
- (id)init;
- (id)serialize;
- (void)mergeTelemetry:(id)a0;
- (id)metrics;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRolloutId:(id)a0 triggerEvent:(unsigned long long)a1;

@end
