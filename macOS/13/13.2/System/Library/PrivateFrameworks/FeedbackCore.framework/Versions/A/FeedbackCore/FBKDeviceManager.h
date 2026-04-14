@class NSArray, NSMutableDictionary, NSString, NSMutableArray;

@interface FBKDeviceManager : NSObject <DEDPairingProtocol>

@property (retain) NSMutableDictionary *_notConfiguredDevicesMatchingPlatformCache;
@property (retain) NSArray *_notConfiguredDevicesCache;
@property long long scanRequestCount;
@property BOOL isScanning;
@property BOOL hasScannedAtLeastOnce;
@property (retain) NSMutableArray *postScanTaskQueue;
@property (retain) NSMutableDictionary *beginPairingBlocks;
@property (retain) NSMutableDictionary *tryPinBlocks;
@property (retain) NSMutableDictionary *devicePinAttemptCount;
@property BOOL hidesNotConfiguredDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)supportedPlatforms;

- (id)init;
- (void).cxx_destruct;
- (id)allDevices;
- (void)stopScanning;
- (id)configuredDevices;
- (id)thisDevice;
- (id)availableDevices;
- (void)successPINForDevice:(id)a0;
- (void)promptPINForDevice:(id)a0;
- (void)_invalidateCaches;
- (void)_postDeviceChangeNotification;
- (id)preferredTargetDevicesForFollowup:(id)a0;
- (id)_preferredTargetDevicesForFollowup:(id)a0 withConfiguredDevices:(id)a1;
- (BOOL)hasAnyConfiguredDevicesMatchingPlatform:(id)a0;
- (id)notConfiguredDevicesMatchingPlatform:(id)a0;
- (id)notConfiguredDevices;
- (id)_configuredDevicesWithAvailableDevices:(id)a0;
- (id)_availableDevicesWithUserVisiblePlatforms:(id)a0;
- (id)_allDevicesFromDEDDevices:(id)a0;
- (id)groupedDeviceForDEDDevice:(id)a0;
- (id)groupedDeviceWithIdentifier:(id)a0;
- (void)_showPinChallengeForDevice:(id)a0;
- (void)_failedPinChallengeForDevice:(id)a0;
- (void)_reportPinAttemptForDevice:(id)a0 success:(BOOL)a1;
- (unsigned long long)_pinAttemptCountForDevice:(id)a0;
- (void)_incrementPinChallengeAttemptForDevice:(id)a0;
- (void)beginPairingDevice:(id)a0 showUIBlock:(id /* block */)a1;
- (void)tryPairingDevice:(id)a0 withPin:(id)a1 completion:(id /* block */)a2;
- (void)beginScanning;
- (void)runAfterScan:(id /* block */)a0;
- (void)_drainPostScanTaskQueue;
- (id)devicesFromDefaults;
- (id)ded;
- (void)_updateStoredDevices;
- (void)_updateStoredDevicesWithConfiguredDevices:(id)a0;
- (BOOL)canStopScan;
- (void)incrementScanRequest;
- (void)decrementScanRequest;
- (id)devicesMatchingPlatform:(id)a0 withDevices:(id)a1;
- (id)dedDevicesSortDescriptors;
- (id)groupedDevicesSortDescriptors;

@end
