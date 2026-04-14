@interface SiriSharedUILatencyCoordinatorWrapper : NSObject <SiriSharedUILatencyCoordinating> {
    void /* unknown type, empty encoding */ delayedLatencyTask;
    void /* unknown type, empty encoding */ stringProvider;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ activityStateStreamContinuation;
    void /* unknown type, empty encoding */ latencyStreamContinuation;
    void /* unknown type, empty encoding */ latencyStream;
    void /* unknown type, empty encoding */ latencyStreamIteratorTask;
    void /* unknown type, empty encoding */ enqueuedUpdates;
    void /* unknown type, empty encoding */ configuredInputType;
    void /* unknown type, empty encoding */ keyboardActivityDelayDuration;
    void /* unknown type, empty encoding */ delayDurationForNewUserTurnDidEnd;
    void /* unknown type, empty encoding */ latencyExperienceConfigured;
    void /* unknown type, empty encoding */ _featureChecker;
    void /* unknown type, empty encoding */ responseMode;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)computedResponseModeDidUpdate:(id)a0;
- (void)didPresentResponseWithDispatchToken:(id)a0;
- (void)handleExecutionLatencyInformation:(id)a0 dispatchToken:(id)a1;
- (id)initWithLatencyExperience:(BOOL)a0 durationConfiguration:(id)a1 stringProvider:(id)a2 delegate:(id)a3;
- (void)requestWillBeginWithInput:(long long)a0 dispatchToken:(id)a1;
- (void)siriSessionDidTransitionFromState:(long long)a0 toState:(long long)a1 event:(long long)a2 dispatchToken:(id)a3;
- (void)willOfferListenAfterSpeaking;

@end
