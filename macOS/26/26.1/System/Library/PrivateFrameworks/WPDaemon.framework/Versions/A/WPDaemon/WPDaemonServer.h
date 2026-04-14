@class WPDZoneManager, NSMapTable, NSMutableDictionary, NSObject, WPDObjectDiscoveryManager, WPDState, NSString, WPDScanManager, WPDStatsManager, WPDPipeManager, NSMutableSet, WPDAdvertisingManager, NSArray, NSXPCListener, WPDClient;
@protocol OS_dispatch_queue, CBStackAdaptor;

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
@property (nonatomic) int screenDisplayChangedNotifyToken;
@property (nonatomic) int screenDimmedChangeNotifyToken;
@property (nonatomic) int screenUndimmedChangeNotifyToken;
@property BOOL screenOff;
@property BOOL systemLocked;
@property BOOL isMirroring;
@property BOOL isTesting;
@property (readonly, nonatomic) id<CBStackAdaptor> stackAdaptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRanging;
+ (BOOL)isAppleTV;
+ (BOOL)supportsNC2AdvertisingInstance;
+ (BOOL)isInternalBuild;
+ (void)initialize;
+ (BOOL)isHomePod;

- (void)enableTestMode;
- (void)updateState;
- (void)addClient:(id)a0;
- (void)cbManagerDidUpdateState:(id)a0;
- (void)dumpDaemonState;
- (void)startListening;
- (void)removeClient:(id)a0;
- (id)initWithCBStackAdaptor:(id)a0;
- (void)disableScanningForClient:(id)a0;
- (BOOL)isClientTestMode:(id)a0;
- (BOOL)isRangingEnabled;
- (void)notifyManagersOfStateChange;
- (void)initManagers;
- (void)initClients;
- (void)enableRanging:(BOOL)a0;
- (void)lockStateUpdate;
- (id)getAllClients;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)screenStateUpdate;
- (void)mirroringStateUpdate;
- (void)SetupSignalHandler;
- (void)generateStateDump;
- (void).cxx_destruct;
- (BOOL)scanWithRetainDuplicates;
- (id)clientForMachName:(id)a0;
- (void)enableTestMode:(BOOL)a0;
- (void)dumpDaemonStateAsync;
- (void)notifyClientsOfStateChange;
- (id)getClientForUUID:(id)a0;
- (void)registerClient:(id)a0 withMachName:(id)a1 withCompletion:(id /* block */)a2;

@end
