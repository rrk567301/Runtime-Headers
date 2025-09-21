@class geo_isolater, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MNSequence : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_steps;
    id /* block */ _finalizeHandler;
    geo_isolater *_stepsIsolater;
    BOOL _isStarted;
    unsigned long long _currentStepIndex;
}

- (id)initWithQueue:(id)a0;
- (void)start;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addStep:(id /* block */)a0;
- (void)_endSequence;
- (void)_finalizeSequenceWithPreviousStepResult:(id)a0;
- (void)_runNextStepWithPreviousStepResult:(id)a0;
- (void)setSequenceFinalizeHandler:(id /* block */)a0;

@end
