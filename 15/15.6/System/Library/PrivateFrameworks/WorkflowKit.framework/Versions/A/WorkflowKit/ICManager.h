@class NSMutableArray, NSDistributedNotificationCenter, ICScheme, NSLock;

@interface ICManager : NSObject <WFApplicationStateObserver>

@property (class, readonly, nonatomic) ICManager *sharedManager;

@property (retain, nonatomic) NSMutableArray *queuedRequests;
@property (retain, nonatomic) NSLock *queueLock;
@property (nonatomic) char enteringForeground;
@property (nonatomic) char resignedActiveWhileOpeningURL;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;
@property (retain, nonatomic) ICScheme *callbackScheme;
@property (nonatomic) char allowsOpeningFromBackground;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)performRequest:(id)a0;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)registerHandler:(id /* block */)a0 forIncomingRequestsWithAction:(id)a1 scheme:(id)a2;
- (void)removeHandlerForIncomingRequestsWithAction:(id)a0 scheme:(id)a1;
- (void)_performRequest:(id)a0;
- (char)handleIncomingRequest:(id)a0;
- (char)handleOpenURL:(id)a0 fromSourceApplication:(id)a1 errorHandler:(id /* block */)a2;
- (char)handleOpenURL:(id)a0 fromSourceApplication:(id)a1 errorHandler:(id /* block */)a2 postNotification:(char)a3;
- (void)handleOpenURLRequestNotification:(id)a0;
- (void)performQueuedRequestIfApplicable;
- (id)popQueuedRequest;
- (void)queueRequest:(id)a0;
- (void)registerHandler:(id /* block */)a0 forIncomingRequestsWithAction:(id)a1 legacyAction:(id)a2 scheme:(id)a3;

@end
