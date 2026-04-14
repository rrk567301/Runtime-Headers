@class NSArray, AVRoutingSessionManagerInternal, AVRoutingSession;

@interface AVRoutingSessionManager : NSObject {
    AVRoutingSessionManagerInternal *_ivars;
}

@property (readonly) AVRoutingSession *currentRoutingSession;
@property (readonly) NSArray *likelyExternalDestinations;
@property (readonly) NSArray *allLikelyDestinations;
@property (readonly) BOOL prefersLikelyDestinationsOverCurrentRoutingSession;

+ (void)initialize;
+ (id)longFormVideoRoutingSessionManager;

- (void)dealloc;
- (id)description;
- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(id /* block */)a0;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(id /* block */)a0;
- (BOOL)startRoutingSessionWithOutputDeviceDescriptions:(id)a0 error:(id *)a1;
- (BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id *)a0;
- (BOOL)stopSuppressingLikelyDestinationsAndReturnError:(id *)a0;

@end
