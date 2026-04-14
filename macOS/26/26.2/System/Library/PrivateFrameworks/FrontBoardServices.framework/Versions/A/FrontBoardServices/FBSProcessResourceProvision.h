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

- (BOOL)_queue_calculateValueConsumed:(out unsigned long long *)a0;
- (id)initWithAllowance:(struct { long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)_queue_stopMonitoring;
- (void)_updateProgress;
- (void)_prepareForReuse;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowanceRemaining:(out struct { long long x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)succinctDescriptionBuilder;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)_queue_updateConsumption;
- (BOOL)isResourceProvision;
- (void)_beginMonitoring;
- (void)_queue_evaluateConsumptionFromTimer:(BOOL)a0;
- (void)_stopMonitoring;
- (void)_queue_noteAllowanceExhausted;
- (void)dealloc;

@end
