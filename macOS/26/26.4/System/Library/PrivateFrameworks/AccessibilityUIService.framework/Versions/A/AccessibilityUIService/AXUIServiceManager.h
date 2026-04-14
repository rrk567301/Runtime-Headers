@class AXAccessQueue, NSMutableDictionary, AXUIMessageSender, NSString, BSServiceConnectionListener, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AXUIServiceManagerDelegate;

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate, BSServiceConnectionListenerDelegate, AccessibilityBoardServices_ServerProtocol> {
    BSServiceConnectionListener *_connectionListener;
}

@property (retain, nonatomic) NSMutableArray *pausedConnections;
@property (retain, nonatomic) AXAccessQueue *resumingConnectionsQueue;
@property (retain, nonatomic) NSMutableDictionary *entitlementsCheckers;
@property (retain, nonatomic) AXAccessQueue *entitlementsCheckersAccessQueue;
@property (retain, nonatomic) AXUIMessageSender *messageSender;
@property (retain, nonatomic) NSMutableArray *serviceContexts;
@property (retain, nonatomic) AXAccessQueue *servicesAccessQueue;
@property (nonatomic) unsigned long long lastUsedServiceIdentifier;
@property (nonatomic) BOOL shouldAllowServicesToProcessMessages;
@property (retain, nonatomic) NSMutableDictionary *transactions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionsQueue;
@property (weak, nonatomic) id<AXUIServiceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_releaseSharedServiceManager;
+ (id)sharedServiceManager;

- (id)_clientMessengerWithIdentifier:(id)a0;
- (void)_applicationDidFinishLaunching;
- (id)_uniqueIdentifierForService:(id)a0;
- (void)_sendAsynchronousMessage:(id)a0 withIdentifier:(long long)a1 toClientWithMessenger:(id)a2 targetAccessQueue:(id)a3 completionRequiresWritingBlock:(BOOL)a4 completion:(id /* block */)a5;
- (oneway void)sendBoardServiceMessage:(id)a0 callback:(id /* block */)a1;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)endTransactionWithIdentifier:(id)a0 forService:(id)a1;
- (void)_handleConnection:(id)a0;
- (id)_serviceFromBundlePath:(id)a0 clientIdentifier:(id)a1 connection:(id)a2 initiatingMessageIdentifier:(long long)a3 stopSearching:(BOOL *)a4 error:(id *)a5;
- (id)_serviceContextForClientWithIdentifier:(id)a0;
- (id)clientsForService:(id)a0;
- (id)_sendSynchronousMessage:(id)a0 withIdentifier:(long long)a1 toClientWithMessenger:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)startLaunchAngel;
- (id)_services;
- (BOOL)_registerClientWithIdentifier:(id)a0 connection:(id)a1 serviceBundleName:(id)a2 initiatingMessageIdentifier:(long long)a3 error:(id *)a4;
- (void)messageSender:(id)a0 willSendXPCMessage:(id)a1 context:(void *)a2;
- (id)_extractClientIdentifier:(id)a0;
- (id)init;
- (void)_unregisterClientsIdentifiersLists:(id)a0 serviceContexts:(id)a1;
- (void)_processXPCObject:(id)a0 context:(id)a1;
- (void)beginTransactionWithIdentifier:(id)a0 forService:(id)a1;
- (unsigned long long)_servicesCount;
- (id)_serviceContextForService:(id)a0;
- (void)_applicationDidReceiveMemoryWarning:(id)a0;
- (void)_unregisterAllClientsWithConnection:(id)a0;
- (void)invalidateConnectionListener;
- (BOOL)_serviceWithClass:(Class)a0 canProcessMessageWithIdentifier:(long long)a1 fromClientWithConnection:(id)a2 possibleRequiredEntitlements:(id *)a3 needsToRequireEntitlements:(BOOL *)a4;
- (BOOL)_extractAndHandleRegistration:(id)a0 clientIdentifier:(id)a1 messageIdentifier:(long long)a2 context:(id)a3 error:(id *)a4;
- (void)dealloc;
- (void)messageSender:(id)a0 accessLaunchAngelConnectionForMessageWithContext:(void *)a1 usingBlock:(id /* block */)a2;
- (BOOL)_start;
- (id)_servicesForUniqueIdentifiers:(id)a0;

@end
