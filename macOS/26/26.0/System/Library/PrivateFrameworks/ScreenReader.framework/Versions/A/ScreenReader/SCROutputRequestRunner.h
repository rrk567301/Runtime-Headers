@class NSString, NSArray;

@interface SCROutputRequestRunner : SCROutputThreadedObject {
    NSString *_name;
    int _currentStepIndex;
    int _currentActionIndex;
    NSArray *_currentSequentialSteps;
    NSString *_currentQueueIdentifier;
    NSString *_currentOutputIdentifier;
    unsigned long long _currentRequestID;
}

- (void)handleEvent:(id)a0;
- (void)stop;
- (unsigned long long)currentRequestID;
- (BOOL)isActive;
- (id)description;
- (id)name;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)_stopAndSendStopMessageToCurrentComponentForNewQueueIdentifier:(id)a0;
- (void)_executeAllNonBlockingActionsForSequentialSteps:(id)a0;
- (void)_executeSequentialSteps;
- (void)_resolveTargetComponentsInSequentialSteps:(id)a0;
- (void)_setCurrentOutputIdentifier:(id)a0;
- (void)_setCurrentQueueIdentifier:(id)a0;
- (id)currentOutputIdentifier;
- (id)currentQueueIdentifier;
- (void)processObject:(id)a0 forNotification:(id)a1 fromAction:(id)a2;
- (void)runSequentialSteps:(id)a0 requestID:(unsigned long long)a1 queueIdentifier:(id)a2 outputIdentifier:(id)a3 stopExclusions:(id)a4;
- (void)stopWithNewQueueIdentifier:(id)a0;

@end
