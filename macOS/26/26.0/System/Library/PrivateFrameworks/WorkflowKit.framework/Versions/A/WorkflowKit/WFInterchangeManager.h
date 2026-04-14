@class WFInterchangeScheme, NSDistributedNotificationCenter, NSMutableArray, NSLock;

@interface WFInterchangeManager : NSObject <WFApplicationStateObserver>

@property (class, readonly, nonatomic) WFInterchangeManager *sharedManager;

@property (retain, nonatomic) NSMutableArray *queuedRequests;
@property (retain, nonatomic) NSLock *queueLock;
@property (nonatomic) BOOL enteringForeground;
@property (nonatomic) BOOL resignedActiveWhileOpeningURL;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;
@property (retain, nonatomic) WFInterchangeScheme *callbackScheme;
@property (nonatomic) BOOL allowsOpeningFromBackground;

- (void)performRequest:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)registerHandler:(id /* block */)a0 forIncomingRequestsWithAction:(id)a1 scheme:(id)a2;
- (void)removeHandlerForIncomingRequestsWithAction:(id)a0 scheme:(id)a1;
- (void)_performRequest:(id)a0;
- (BOOL)handleIncomingRequest:(id)a0;
- (BOOL)handleOpenURL:(id)a0 fromSourceApplication:(id)a1 errorHandler:(id /* block */)a2;
- (BOOL)handleOpenURL:(id)a0 fromSourceApplication:(id)a1 errorHandler:(id /* block */)a2 postNotification:(BOOL)a3;
- (void)handleOpenURLRequestNotification:(id)a0;
- (void)performQueuedRequestIfApplicable;
- (id)popQueuedRequest;
- (void)queueRequest:(id)a0;
- (void)registerHandler:(id /* block */)a0 forIncomingRequestsWithAction:(id)a1 legacyAction:(id)a2 scheme:(id)a3;

@end
