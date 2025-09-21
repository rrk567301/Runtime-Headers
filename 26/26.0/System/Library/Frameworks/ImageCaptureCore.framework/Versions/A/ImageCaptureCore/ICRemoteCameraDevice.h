@class NSString, NSXPCListenerEndpoint, NSArray, ICSessionManager, NSMutableDictionary, NSOperationQueue, NSMutableArray, NSObject, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ICRemoteCameraDevice : NSObject <ICSessionManagerProtocol, NSXPCListenerDelegate>

@property (nonatomic) void *cpPowerAssertion;
@property (readonly, copy, nonatomic) NSArray *allConnections;
@property (retain, nonatomic) NSMutableDictionary *cameraDictionary;
@property (readonly) NSString *internalUUID;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NSMutableArray *deniedBundles;
@property (retain, nonatomic) NSMutableArray *addedBundles;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) ICSessionManager *sessionManager;
@property (retain, nonatomic) NSOperationQueue *deviceOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deviceOperationUnderlyingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startListening;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)initWithDeviceContext:(id)a0;
- (id)additionalProperties;
- (void).cxx_destruct;
- (void)releasePowerAssertion;
- (BOOL)acceptConnection:(id)a0;
- (void)addInitiatedOperation:(id)a0;
- (void)addInteractiveOperation:(id)a0;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (void)closeDevice;
- (BOOL)evaulateCommonTCC:(id)a0;
- (void)holdPowerAssertion;
- (void)registerInterestedEventNotifications:(id)a0;
- (void)removeAllSessions;
- (void)removeSessionsWithProcessIdentifier:(id)a0;
- (void)sendAddedItemsNotification:(id)a0 toConnections:(id)a1;
- (void)sendNotification:(id)a0 toConnections:(id)a1 selector:(SEL)a2;
- (void)sendPTPEventNotification:(id)a0;
- (void)sendRemovedItemsNotification:(id)a0 toConnections:(id)a1;
- (void)sendStatusNotification:(id)a0 toConnections:(id)a1;
- (void)sendUpdatedItemsNotification:(id)a0 toConnections:(id)a1;
- (void)sessionManagerDidCloseAllSessions:(id)a0;
- (void)unregisterInterestedEventNotifications:(id)a0;

@end
