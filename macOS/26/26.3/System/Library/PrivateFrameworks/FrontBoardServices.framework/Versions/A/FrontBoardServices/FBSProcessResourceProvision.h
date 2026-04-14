@class RBSProcessHandle, BSAbsoluteMachTimer, NSObject;
@protocol OS_dispatch_queue;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {
    unsigned long long _baselineValue;
    unsigned long long _consumedValue;
    NSObject<OS_dispatch_queue> *_queue;
    BSAbsoluteMachTimer *_timer;
    RBSProcessHandle *_processHandle;
    double _timerFireInterval;
    unsigned long long _timerFireCount;
}

@property (nonatomic) long long type;
@property (nonatomic) struct { long long type; unsigned long long value; unsigned long long reserved; } allowance;

+ (id)provisionWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;
+ (id)provisionWithResourceType:(long long)a0 timeInterval:(double)a1;

- (void)_stopMonitoring;
- (void)_queue_noteAllowanceExhausted;
- (BOOL)_queue_calculateValueConsumed:(out unsigned long long *)a0;
- (long long)type;
- (id)succinctDescriptionBuilder;
- (id)initWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (BOOL)isResourceProvision;
- (BOOL)_queue_updateConsumption;
- (void)_updateProgress;
- (void)_beginMonitoring;
- (void)_prepareForReuse;
- (void)_queue_stopMonitoring;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)allowanceRemaining:(out struct { long long x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_queue_evaluateConsumptionFromTimer:(BOOL)a0;

@end
