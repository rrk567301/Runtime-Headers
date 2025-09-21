@class NSXPCListener, NSMutableDictionary, NSString, NSMutableSet, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface SYDDaemon : NSObject <NSXPCListenerDelegate, SYDDaemonToClientConnectionDelegate, SYDSyncManagerDelegate>

@property (readonly, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isInitializingSyncManagers) char initializingSyncManagers;
@property (retain, nonatomic) NSMutableSet *clientConnections;
@property (retain, nonatomic) NSMutableDictionary *syncManagersByPersona;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerForStoreType:(long long)a0 containerID:(id)a1 testConfiguration:(id)a2;
+ (id)defaultTestConfiguration;
+ (id)syncManagerLookupKeyForCurrentPersonaWithTestConfiguration:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (id)initWithListener:(id)a0;
- (id)allStoreIdentifiersWithError:(id *)a0;
- (void)removeUnitTestSyncManagers;
- (void)connectionDidInvalidate:(id)a0;
- (void)_processAccountChanges;
- (id)allSyncManagers;
- (id)_queue_allSyncManagers;
- (id)applicationIdentifiersForStoreIdentifiers:(id)a0;
- (id)connection:(id)a0 syncManagerForStoreID:(id)a1 error:(id *)a2;
- (id)initWithInitialStoreCreation:(char)a0;
- (id)initWithListener:(id)a0 initialStoreCreation:(char)a1;
- (void)initializeKnownSyncManagers;
- (void)processAccountChanges;
- (void)registerForPeriodAnalyticsXPCActivity;
- (void)removeInvalidSyncManagers;
- (void)sendAnalyticsEventForCurrentState;
- (char)syncManager:(id)a0 shouldSyncStoreWithIdentifier:(id)a1;
- (id)syncManagerForStoreType:(long long)a0 containerID:(id)a1 testConfiguration:(id)a2 createIfNecessary:(char)a3 error:(id *)a4;

@end
