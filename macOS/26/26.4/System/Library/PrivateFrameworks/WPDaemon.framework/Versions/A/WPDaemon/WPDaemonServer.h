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

+ (BOOL)isAppleTV;
+ (void)initialize;
+ (BOOL)supportsRanging;
+ (BOOL)supportsNC2AdvertisingInstance;
+ (BOOL)isInternalBuild;
+ (BOOL)isHomePod;

- (void)addClient:(id)a0;
- (BOOL)isClientTestMode:(id)a0;
- (void)dumpDaemonStateAsync;
- (void)disableScanningForClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)enableRanging:(BOOL)a0;
- (id)initWithCBStackAdaptor:(id)a0;
- (BOOL)isRangingEnabled;
- (void)startListening;
- (void)enableTestMode:(BOOL)a0;
- (void)registerClient:(id)a0 withMachName:(id)a1 withCompletion:(id /* block */)a2;
- (void)SetupSignalHandler;
- (void)updateState;
- (void)cbManagerDidUpdateState:(id)a0;
- (id)clientForMachName:(id)a0;
- (void)lockStateUpdate;
- (void)notifyManagersOfStateChange;
- (id)getAllClients;
- (void).cxx_destruct;
- (void)dumpDaemonState;
- (void)initManagers;
- (void)mirroringStateUpdate;
- (BOOL)scanWithRetainDuplicates;
- (void)notifyClientsOfStateChange;
- (id)getClientForUUID:(id)a0;
- (void)generateStateDump;
- (void)screenStateUpdate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)enableTestMode;
- (void)initClients;
- (void)dealloc;

@end
