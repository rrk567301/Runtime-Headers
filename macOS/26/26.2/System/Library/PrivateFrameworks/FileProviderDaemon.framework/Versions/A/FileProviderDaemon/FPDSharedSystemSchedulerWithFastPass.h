@class NSString;

@interface FPDSharedSystemSchedulerWithFastPass : FPDSharedSystemScheduler {
    id /* block */ _criteriaBuilder;
    id /* block */ _fastPassCriteriaBuilder;
    BOOL _shouldRunInFastPass;
    long long _semanticVersion;
    NSString *_fastPassLabel;
    BOOL _allowRunningOnlyAsFastPass;
}

@property BOOL allowRunningOnlyAsFastPass;

- (void)defer;
- (void).cxx_destruct;
- (id)buildNewTaskRequest;
- (void)enableFastPassRunWithSemanticVersion:(long long)a0;
- (id)initWithTaskRequest:(id)a0 fastPassTaskRequest:(id)a1 options:(long long)a2;
- (BOOL)isRunningAsFastPass;
- (BOOL)preventRunning;
- (id)taskLabel;

@end
