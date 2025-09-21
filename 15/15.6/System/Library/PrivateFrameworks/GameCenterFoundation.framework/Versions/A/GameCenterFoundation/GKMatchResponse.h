@class GKMatchRequestInternal, NSString, NSArray, NSData, NSDictionary, NSNumber, GKDispatchGroup;

@interface GKMatchResponse : GKInternalRepresentation

@property (nonatomic) long long state;
@property (retain) NSString *rid;
@property (retain) NSArray *matches;
@property (retain) NSString *matchID;
@property (retain) NSData *sessionToken;
@property (retain) NSArray *relayPushes;
@property (retain) NSData *cdxTicket;
@property (retain) NSString *selfPseudonym;
@property (retain) NSDictionary *serverRequest;
@property (retain) NSNumber *transportVersionToUse;
@property GKDispatchGroup *matchingGroup;
@property (retain) GKMatchRequestInternal *matchRequest;
@property (readonly) int sequence;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (char)isCancelled;
- (char)isFinished;
- (char)transitionToState:(long long)a0;
- (char)isTimeout;
- (int)_incrementSequence;
- (char)isNetworkError;

@end
