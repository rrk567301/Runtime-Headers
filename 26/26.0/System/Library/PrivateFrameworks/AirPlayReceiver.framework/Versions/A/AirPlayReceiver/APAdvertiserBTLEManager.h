@class CBDiscovery, NSMutableDictionary, CUNetInterfaceMonitor, CBAdvertiser, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APAdvertiserBTLEManager : NSObject {
    struct OpaqueFigCFWeakReferenceHolder { } *_weakSelf;
    unsigned short _btleMode;
    unsigned short _receiverPort;
    int _accessControlType;
    BOOL _isP2PAllowed;
    BOOL _p2pSolo;
    BOOL _p2pSoloQueried;
    NSObject<OS_dispatch_source> *_p2pSoloQueryTimer;
    struct { struct OpaqueFigSimpleMutex *mutex; unsigned int seed; void /* function */ *func; void *context; } _eventHandlerState;
    void *_eventContext;
}

@property (retain, nonatomic) CBAdvertiser *btleAdvertiser;
@property (retain, nonatomic) CBDiscovery *btleDiscoverer;
@property (nonatomic) int btleAdvertiserSeed;
@property (nonatomic) int btleDiscovererSeed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) BOOL isAdvertising;
@property (nonatomic) BOOL isScanning;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isInvalidated;
@property (nonatomic) CUNetInterfaceMonitor *netInterfaceMonitor;
@property (nonatomic) unsigned char seed;
@property (nonatomic) unsigned int soloDeviceFlags;
@property (retain, nonatomic) NSMutableDictionary *soloDevices;
@property (retain, nonatomic) NSMutableDictionary *pendingLostLegacyDevices;
@property (nonatomic) int touchSetupActiveNotifyToken;
@property (nonatomic) NSObject<OS_dispatch_source> *lostLegacyDeviceTimer;

+ (id)stringForBTLEState:(long long)a0;
+ (id)stringForBTLEMode:(unsigned short)a0;

- (void)dispatchEvent:(unsigned int)a0;
- (void)stopAdvertising;
- (id)initWithEventContext:(void *)a0;
- (int)start;
- (void)dealloc;
- (void)startScanning;
- (void)invalidate;
- (int)stop;
- (void)stopScanning;
- (void)handleFoundDevice:(id)a0;
- (int)getBTLEMode:(unsigned short *)a0;
- (long long)btleManagerState;
- (id)createBTLEDiscoverer;
- (int)setBTLEMode:(unsigned short)a0;
- (int)update;
- (void)startAdvertising;
- (id)createBTLEAdvertiser;
- (int)setProperty:(id)a0 withValue:(id)a1;
- (int)updatePreferences;
- (BOOL)canAdvertise;
- (void)removeLostDeviceWithIdentifier:(id)a0;
- (int)stopMonitoringForNetworkChanges;
- (void)cleanupEventHandlerState;
- (void)computeNearbyDeviceTypesAndDispatchEventIfNecessary;
- (void)handleLostDevice:(id)a0 withGoodbye:(BOOL)a1;
- (void)handleP2PSoloQueryTimerCancelled;
- (void)handleP2PSoloQueryTimerFired;
- (void)handlePrimaryIPChanged;
- (void)removeExpiredDevices;
- (void)restartAdvertisingIfNecessary;
- (int)setAccessControlType:(unsigned int)a0;
- (int)setEventHandler:(void /* function */ *)a0 withContext:(void *)a1;
- (int)setIsP2PAllowed:(BOOL)a0;
- (int)setReceiverPort:(unsigned short)a0;
- (int)setupEventHandlerState;
- (BOOL)shouldScanForSourceWithScreenOff;
- (int)showDebugWithDataBuffer:(struct { char *x0; unsigned long long x1; unsigned long long x2; char *x3; unsigned long long x4; unsigned long long x5; unsigned char x6; int x7; } *)a0 verbose:(BOOL)a1;
- (int)startMonitoringForNetworkChanges;
- (int)startP2PSoloQueryTimer;
- (void)stopAdvertisingWithSeed:(int)a0;
- (void)stopScanningWithSeed:(int)a0;
- (int)supportsSolo:(BOOL *)a0;
- (void)updateLostLegacyDeviceTimer;
- (int)updateSupportsSoloAndForceReadFromPrefs:(BOOL)a0;

@end
