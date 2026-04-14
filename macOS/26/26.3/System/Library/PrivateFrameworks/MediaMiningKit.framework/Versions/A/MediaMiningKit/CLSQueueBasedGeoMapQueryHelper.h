@class NSString, NSObject;
@protocol OS_dispatch_source, CLSQueryProtocol, OS_dispatch_queue;

@interface CLSQueueBasedGeoMapQueryHelper : NSObject <CLSPublicEventQueryHelperProtocol>

@property (readonly, nonatomic) id<CLSQueryProtocol> query;
@property (readonly, copy, nonatomic) id /* block */ cancellerBlock;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double internalProgressTimeInterval;
@property (nonatomic) unsigned long long retryLevel;
@property (nonatomic) double nextRetryTime;
@property (nonatomic) BOOL alreadyLaunched;
@property (nonatomic) BOOL didFinishQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic, getter=isSimulatingTimeout) BOOL simulatesTimeout;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, nonatomic) unsigned long long numberOfRetries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)cancel;
- (void)_handleError:(id)a0;
- (void).cxx_destruct;
- (void)_handleQueryResultsForQuery:(id)a0 error:(id)a1;
- (void)_heartBeat;
- (void)_startQuery;
- (id)initWithQueryObject:(id)a0;
- (void)launchPublicEventQueryWithCancellerBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)launchQueryWithCancellerBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;

@end
