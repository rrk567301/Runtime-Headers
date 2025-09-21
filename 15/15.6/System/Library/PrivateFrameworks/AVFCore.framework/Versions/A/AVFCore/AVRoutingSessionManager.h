@class NSArray, AVRoutingSessionManagerInternal, AVRoutingSession;

@interface AVRoutingSessionManager : NSObject {
    AVRoutingSessionManagerInternal *_ivars;
}

@property (readonly) AVRoutingSession *currentRoutingSession;
@property (readonly) NSArray *likelyExternalDestinations;
@property (readonly) NSArray *allLikelyDestinations;
@property (readonly) char prefersLikelyDestinationsOverCurrentRoutingSession;

+ (void)initialize;
+ (char)longFormVideoManagerCanHaveCurrentSessionWithDestinationOfType:(long long)a0 subType:(long long)a1;
+ (id)longFormVideoRoutingSessionManager;

- (void)dealloc;
- (id)description;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(id /* block */)a0;
- (char)startRoutingSessionWithOutputDeviceDescriptions:(id)a0 error:(id *)a1;
- (char)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id *)a0;
- (char)stopSuppressingLikelyDestinationsAndReturnError:(id *)a0;
- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(id /* block */)a0;

@end
