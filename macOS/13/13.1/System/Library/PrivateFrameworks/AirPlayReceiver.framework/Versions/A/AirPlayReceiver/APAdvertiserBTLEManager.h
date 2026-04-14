@class CBDiscovery, NSMutableDictionary, CBAdvertiser, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APAdvertiserBTLEManager : NSObject {
    unsigned short _btleMode;
    BOOL _isP2PAllowed;
    BOOL _p2pSolo;
    BOOL _p2pSoloQueried;
    NSObject<OS_dispatch_source> *_p2pSoloQueryTimer;
}

@property (retain, nonatomic) CBAdvertiser *btleAdvertiser;
@property (retain, nonatomic) CBDiscovery *btleDiscoverer;
@property (nonatomic) int btleAdvertiserSeed;
@property (nonatomic) int btleDiscovererSeed;
@property (nonatomic) void *eventHandlerContext;
@property (nonatomic) void /* function */ *eventHandlerFunc;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) BOOL isAdvertising;
@property (nonatomic) BOOL isScanning;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) struct OpaqueAPAdvertiserBTLEManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *managerRef;
@property (nonatomic) struct __SCDynamicStore { } *scStore;
@property (nonatomic) unsigned char seed;
@property (nonatomic) unsigned int soloDeviceFlags;
@property (retain, nonatomic) NSMutableDictionary *soloDevices;
@property (retain, nonatomic) NSMutableDictionary *pendingLostLegacyDevices;
@property (nonatomic) int touchSetupActiveNotifyToken;
@property (nonatomic) NSObject<OS_dispatch_source> *lostLegacyDeviceTimer;

+ (id)stringForBTLEMode:(unsigned short)a0;
+ (id)stringForBTLEState:(long long)a0;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (int)update;
- (int)start;
- (int)stop;
- (int)setProperty:(id)a0 withValue:(id)a1;
- (void)dispatchEvent:(unsigned int)a0;
- (void)startScanning;
- (void)stopScanning;
- (void)stopAdvertising;
- (id)createBTLEAdvertiser;
- (id)createBTLEDiscoverer;
- (int)setBTLEMode:(unsigned short)a0;
- (int)getBTLEMode:(unsigned short *)a0;
- (void)handleFoundDevice:(id)a0;
- (long long)btleManagerState;
- (void)startAdvertising;
- (BOOL)canAdvertise;
- (int)updatePreferences;
- (unsigned char)isAcceptableDeviceWithFlags:(unsigned char)a0;
- (int)startP2PSoloQueryTimer;
- (void)handleP2PSoloQueryTimerFired;
- (void)handleP2PSoloQueryTimerCancelled;
- (int)updateSupportsSoloAndForceReadFromPrefs:(BOOL)a0;
- (int)supportsSolo:(BOOL *)a0;
- (BOOL)shouldScanForSourceWithScreenOff;
- (int)setIsP2PAllowed:(BOOL)a0;
- (int)startListeningForNetworkChanges;
- (int)stopListeningForNetworkChanges;
- (void)stopAdvertisingWithSeed:(int)a0;
- (void)restartAdvertisingIfNecessary;
- (void)stopScanningWithSeed:(int)a0;
- (void)updateLostLegacyDeviceTimer;
- (void)removeExpiredDevices;
- (void)computeNearbyDeviceTypesAndDispatchEventIfNecessary;
- (void)handleLostDevice:(id)a0 withGoodbye:(BOOL)a1;
- (void)removeLostDeviceWithIdentifier:(id)a0;
- (int)showDebugWithDataBuffer:(struct { char *x0; unsigned long long x1; unsigned long long x2; char *x3; unsigned long long x4; unsigned long long x5; unsigned char x6; int x7; } *)a0 verbose:(BOOL)a1;

@end
