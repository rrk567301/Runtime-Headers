@class NSRecursiveLock, NSThread, NSString, NSHashTable, NSMutableSet, NSRunLoop, NSNumber;

@interface CUTWiFiManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSThread *wifiThread;
@property (retain, nonatomic) NSRunLoop *wifiRunLoop;
@property (nonatomic) struct __CFRunLoopSource { } *runLoopSource;
@property (nonatomic) void *wifiManager;
@property (nonatomic) void *wifiDevice;
@property (nonatomic) void *currentNetwork;
@property (nonatomic) void *dynamicStore;
@property (nonatomic) int linkToken;
@property (retain, nonatomic) NSHashTable *delegateMap;
@property (retain, nonatomic) NSHashTable *wowClients;
@property (retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens;
@property (readonly, nonatomic) BOOL isWiFiEnabled;
@property (readonly, nonatomic) BOOL isWiFiAssociated;
@property (readonly, nonatomic) BOOL isWiFiCaptive;
@property (readonly, nonatomic) BOOL isHostingWiFiHotSpot;
@property (readonly, nonatomic) BOOL isWoWSupported;
@property (readonly, nonatomic) BOOL isWoWEnabled;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, nonatomic) NSString *currentSSID;
@property (nonatomic) BOOL autoAssociateWiFiAsForegroundClient;
@property (readonly, nonatomic) BOOL autoAssociateWiFi;

+ (id)sharedInstance;

- (void)_updateIsWiFiEnabled;
- (void)_adjustWoWState;
- (void)dealloc;
- (void)addDelegate:(id)a0;
- (double)_wifiMeasurementErrorForInterval:(double)a0;
- (void)removeDelegate:(id)a0;
- (void)addWoWClient:(id)a0;
- (id)init;
- (void)_adjustWiFiAutoAssociation;
- (BOOL)hasWoWClient:(id)a0;
- (void)_updateIsWiFiAssociatedAsync:(BOOL)a0;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)showNetworkOptions;
- (void)addWiFiAutoAssociationClientToken:(id)a0;
- (BOOL)_isPrimaryCellular;
- (void)_createDynamicStore;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(id /* block */)a0;
- (BOOL)hasWiFiAutoAssociationClientToken:(id)a0;
- (void)removeWoWClient:(id)a0;
- (void)removeWiFiAutoAssociationClientToken:(id)a0;
- (void).cxx_destruct;

@end
