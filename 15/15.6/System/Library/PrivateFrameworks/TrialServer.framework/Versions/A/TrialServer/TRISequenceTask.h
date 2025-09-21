@class NSString, NSArray, NSDate;
@protocol TRITask, TRITaskQueueStateProviding;

@interface TRISequenceTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    id<TRITask> _task;
    id<TRITask> _dependentTask;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) id<TRITask> lastTask;
@property (nonatomic) int retryCount;
@property char wasDeferred;
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

+ (id)task;
+ (char)_isTask:(id)a0 equalTo:(id)a1;
+ (id)parseFromData:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metrics;
- (id)dimensions;
- (id)serialize;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (void)addTaskToEndOfSequence:(id)a0;
- (id)initWithTask:(id)a0 dependency:(id)a1;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;

@end
