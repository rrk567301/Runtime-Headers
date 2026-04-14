@class NSString, SiriSharedUILatencyCoordinatorWrapper;

@interface SiriSharedUILatencyCoordinator : NSObject <SiriSharedUILatencyCoordinating> {
    SiriSharedUILatencyCoordinatorWrapper *_underlyingCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)computedResponseModeDidUpdate:(id)a0;
- (void)didPresentResponseWithDispatchToken:(id)a0;
- (void)handleExecutionLatencyInformation:(id)a0 dispatchToken:(id)a1;
- (id)initWithDurationConfiguration:(id)a0 localization:(id)a1 delegate:(id)a2;
- (void)requestWillBeginWithInput:(long long)a0 dispatchToken:(id)a1;
- (void)siriSessionDidTransitionFromState:(long long)a0 toState:(long long)a1 event:(long long)a2 dispatchToken:(id)a3;
- (void)willOfferListenAfterSpeaking;

@end
