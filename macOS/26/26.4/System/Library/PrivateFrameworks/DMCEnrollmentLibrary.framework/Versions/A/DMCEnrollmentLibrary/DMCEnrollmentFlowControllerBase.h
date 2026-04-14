@class NSMutableSet, NSMutableArray, DMCHangDetectionQueue;

@interface DMCEnrollmentFlowControllerBase : NSObject

@property (retain, nonatomic) DMCHangDetectionQueue *workerQueue;
@property (nonatomic) unsigned long long currentStep;
@property (nonatomic) unsigned long long nextStepIndex;
@property (retain, nonatomic) NSMutableArray *stepQueue;
@property (retain, nonatomic) NSMutableSet *executedSteps;

- (void)_workerQueue_cleanupCachedValuesWillRestart:(BOOL)a0;
- (void)_appendSteps:(id)a0;
- (void)_workerQueue_performFlowStep:(unsigned long long)a0;
- (void)_pollNextStep;
- (void)_jumpToStep:(unsigned long long)a0;
- (void)_resetToInitialSteps;
- (void)_workerQueue_flowCompleted;
- (void).cxx_destruct;
- (id)init;

@end
