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
@property (readonly, nonatomic) char isWiFiEnabled;
@property (readonly, nonatomic) char isWiFiAssociated;
@property (readonly, nonatomic) char isWiFiCaptive;
@property (readonly, nonatomic) char isHostingWiFiHotSpot;
@property (readonly, nonatomic) char isWoWSupported;
@property (readonly, nonatomic) char isWoWEnabled;
@property (readonly, nonatomic) char willTryToSearchForWiFiNetwork;
@property (readonly, nonatomic) char willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, nonatomic) NSString *currentSSID;
@property (nonatomic) char autoAssociateWiFiAsForegroundClient;
@property (readonly, nonatomic) char autoAssociateWiFi;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_adjustWoWState;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_createDynamicStore;
- (char)_isPrimaryCellular;
- (void)_updateIsWiFiAssociatedAsync:(char)a0;
- (void)_updateIsWiFiEnabled;
- (double)_wifiMeasurementErrorForInterval:(double)a0;
- (void)addWiFiAutoAssociationClientToken:(id)a0;
- (void)addWoWClient:(id)a0;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(id /* block */)a0;
- (char)hasWiFiAutoAssociationClientToken:(id)a0;
- (char)hasWoWClient:(id)a0;
- (void)removeWiFiAutoAssociationClientToken:(id)a0;
- (void)removeWoWClient:(id)a0;
- (void)showNetworkOptions;

@end
