@class CBDiscovery, NSMutableDictionary, CBAdvertiser, NSObject;
@protocol OS_dispatch_queue;

@interface APBrowserBTLEManager : NSObject {
    unsigned short _btleMode;
    char _p2pSoloSupported;
    char _p2pSoloSupportedIsSet;
    void *_eventContext;
}

@property (retain, nonatomic) CBAdvertiser *btleAdvertiser;
@property (retain, nonatomic) CBDiscovery *btleDiscoverer;
@property (nonatomic) int btleAdvertiserSeed;
@property (nonatomic) int btleDiscovererSeed;
@property (nonatomic) void *eventHandlerContext;
@property (nonatomic) void /* function */ *eventHandlerFunc;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) char isAdvertising;
@property (nonatomic) char isEnabled;
@property (nonatomic) char isScanning;
@property (nonatomic) char isSoloBeaconDisabled;
@property (nonatomic) char isInvalidated;
@property (nonatomic) char preferencesUpdated;
@property (retain, nonatomic) NSMutableDictionary *btleDevices;
@property (nonatomic) const void *btleDiscoveryManagerToken;

+ (int)createEventInfoDictionary:(id *)a0 withDeviceID:(id)a1 IPAddress:(id)a2 port:(id)a3 supportsSolo:(id)a4 rssi:(id)a5;
+ (id)stringForBTLEMode:(unsigned short)a0;
+ (id)stringForBTLEState:(long long)a0;

- (void)dealloc;
- (int)invalidate;
- (int)stop;
- (int)update;
- (long long)btleManagerState;
- (int)copyShowInfo:(id *)a0 verbose:(char)a1;
- (id)createBTLEAdvertiser;
- (id)createBTLEDiscoverer;
- (int)dispatchEvent:(unsigned int)a0 withEventInfo:(id)a1;
- (int)ensureAdvertisingStarted;
- (int)ensureAdvertisingStopped;
- (int)ensureAdvertisingStoppedWithSeed:(int)a0;
- (int)ensurePreferencesUpdatedWithShouldForce:(char)a0;
- (int)ensureScanningStarted;
- (int)ensureScanningStopped;
- (int)ensureScanningStoppedWithSeed:(int)a0;
- (int)getBTLEMode:(unsigned short *)a0;
- (int)handleFoundDevice:(id)a0;
- (int)handleLostDevice:(id)a0;
- (id)initWithEventContext:(void *)a0;
- (unsigned long long)nearbySoloDevicesCount;
- (int)setBTLEMode:(unsigned short)a0;
- (int)setEventHandler:(void /* function */ *)a0 context:(void *)a1 managerRef:(struct OpaqueAPBrowserBTLEManager { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; } *)a2;
- (int)setSupportsSolo:(char)a0;
- (char)shouldAdvertiseSourcePresence;
- (int)startMode:(unsigned short)a0;

@end
