@class WPDZoneManager, NSMapTable, NSMutableDictionary, NSObject, WPDObjectDiscoveryManager, WPDState, NSString, WPDScanManager, WPDStatsManager, WPDPipeManager, NSMutableSet, WPDAdvertisingManager, NSArray, NSXPCListener, WPDClient;
@protocol OS_dispatch_queue;

@interface WPDaemonServer : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) WPDState *wpdState;
@property (nonatomic) long long cbState;
@property unsigned char coreBluetoothState;
@property (retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) WPDScanManager *scanManager;
@property (retain) WPDAdvertisingManager *advertisingManager;
@property (retain) WPDZoneManager *zoneManager;
@property (retain) WPDPipeManager *pipeManager;
@property (retain) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (readonly) WPDClient *spObjectDiscoveryClient;
@property (retain, nonatomic) NSArray *managers;
@property (retain, nonatomic) WPDStatsManager *statsManager;
@property (retain) NSMutableDictionary *clients;
@property (retain) NSMutableSet *testClients;
@property (retain) NSMutableSet *privilegedClients;
@property (retain) NSMapTable *clientsWithMach;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCListener *listener;
@property (nonatomic) int lockStatusChangedToken;
@property (nonatomic) int screenStateToken;
@property (nonatomic) int firstUnlockStatusChangedToken;
@property BOOL screenOff;
@property BOOL systemLocked;
@property BOOL isTesting;
@property (nonatomic) int gazeChangeToken;
@property BOOL onHead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)isInternalBuild;
+ (BOOL)isHomePod;
+ (BOOL)isAppleTV;
+ (BOOL)supportsRanging;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)updateState;
- (void)startListening;
- (void)enableRanging:(BOOL)a0;
- (void)enableTestMode;
- (void)dumpDaemonState;
- (void)generateStateDump;
- (void)cbManagerDidUpdateState:(id)a0;
- (BOOL)isRangingEnabled;
- (void)SetupSignalHandler;
- (void)initManagers;
- (void)initClients;
- (BOOL)isClientTestMode:(id)a0;
- (id)getClientForUUID:(id)a0;
- (id)getAllClients;
- (void)notifyManagersOfStateChange;
- (void)registerClient:(id)a0 withMachName:(id)a1 withCompletion:(id /* block */)a2;
- (id)clientForMachName:(id)a0;
- (void)notifyClientsOfStateChange;
- (BOOL)scanWithRetainDuplicates;
- (void)screenStateUpdate;
- (void)lockStateUpdate;
- (void)enableTestMode:(BOOL)a0;
- (void)disableScanningForClient:(id)a0;
- (void)dumpDaemonStateAsync;

@end
