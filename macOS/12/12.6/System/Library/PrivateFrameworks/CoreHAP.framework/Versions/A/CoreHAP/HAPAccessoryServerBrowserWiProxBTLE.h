@class NSMapTable, WPHomeKit, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HMFLocking, HAPAccessoryServerBrowserWiProxBTLEDelegate;

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject <WPHomeKitDelegate, HMFLogging> {
    id<HMFLocking> _lock;
    NSMutableSet *_trackedPeripherals;
    NSMutableSet *_trackedIdentifiers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) id<HAPAccessoryServerBrowserWiProxBTLEDelegate> delegate;
@property (readonly, nonatomic) WPHomeKit *wpHomeKit;
@property (nonatomic) long long currentScanState;
@property (nonatomic) BOOL scanInBackground;
@property (readonly, weak) NSMapTable *reachabilityScanTuples;
@property (nonatomic) unsigned char wholeHomeBluetooth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)pauseScans;
- (void)homeKitDidUpdateState:(id)a0;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2 RSSI:(id)a3 type:(long long)a4;
- (void)resetLastSeenForTrackedAccessories:(id)a0;
- (void)startBrowsingForHAPBLEAccessories;
- (void)stopBrowsingForHAPBLEAccessories:(BOOL)a0;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)a0 stateNumber:(id *)a1 isReachable:(BOOL *)a2 linkQuality:(unsigned long long *)a3 lastSeen:(id *)a4;
- (void)updateStateForIdentifier:(id)a0 stateNumber:(id)a1;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)probeReachabilityForTrackedAccessoriesWithScanTuples:(id)a0;
- (id)trackedPeripheralForIdentifier:(id)a0;
- (void)_stopScanning;
- (void)_startBrowsingForHAPBLEAccessories;
- (void)_startScanningWithData:(id)a0;
- (void)_stopBrowsingForHAPBLEAccessories:(BOOL)a0;
- (id)trackedIdentifiers;
- (void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0 restartScan:(BOOL)a1;
- (void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)a0;
- (void)_removeTrackedPeripheral:(id)a0;
- (id)_getTrackedPeripheralWithIdentifier:(id)a0;
- (unsigned long long)_getLinkQuality:(id)a0;
- (void)_probeReachabilityForTrackedAccessories;
- (id)trackedPeripherals;
- (void)_reportHAPPeripheral:(id)a0;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2 RSSI:(id)a3;
- (id)_parseAdvertisementData:(id)a0 forPeripheral:(id)a1 RSSI:(id)a2;
- (void)homeKit:(id)a0 foundDevice:(id)a1 withData:(id)a2;
- (void)homeKitStartedScanning:(id)a0;
- (void)homeKitStoppedScanning:(id)a0;
- (void)homeKit:(id)a0 failedToStartScanningWithError:(id)a1;

@end
