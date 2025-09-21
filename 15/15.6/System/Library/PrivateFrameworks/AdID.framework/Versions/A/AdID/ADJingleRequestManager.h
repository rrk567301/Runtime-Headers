@class NSMutableDictionary;

@interface ADJingleRequestManager : ADSingleton

@property char jingleRequestInProgress;
@property (retain, nonatomic) NSMutableDictionary *pendingJingleRequests;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)authenticateUser:(id /* block */)a0;
- (char)canMakeJingleRequest;
- (void)jingleRequestCompleted:(id)a0;
- (id)makeSegmentRequest:(id)a0 forceSegments:(char)a1 withCompletion:(id /* block */)a2;
- (void)startJingleRequest:(id)a0;

@end
