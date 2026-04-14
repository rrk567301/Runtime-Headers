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
- (void)stopScanning;
- (id)configuredDevices;
- (id)allDevices;
- (id)thisDevice;
- (id)availableDevices;
- (void)promptPINForDevice:(id)a0;
- (void)successPINForDevice:(id)a0;
- (void)_invalidateCaches;
- (id)ded;
- (void)_postDeviceChangeNotification;
- (void)beginScanning;
- (id)_preferredTargetDevicesForFollowup:(id)a0 withConfiguredDevices:(id)a1;
- (id)devicesMatchingPlatform:(id)a0 withDevices:(id)a1;
- (id)notConfiguredDevices;
- (id)_configuredDevicesWithAvailableDevices:(id)a0;
- (id)_availableDevicesWithUserVisiblePlatforms:(id)a0;
- (id)groupedDevicesSortDescriptors;
- (id)dedDevicesSortDescriptors;
- (id)devicesFromDefaults;
- (id)_allDevicesFromDEDDevices:(id)a0;
- (unsigned long long)_pinAttemptCountForDevice:(id)a0;
- (void)_showPinChallengeForDevice:(id)a0;
- (void)_failedPinChallengeForDevice:(id)a0;
- (id)groupedDeviceForDEDDevice:(id)a0;
- (void)_reportPinAttemptForDevice:(id)a0 success:(BOOL)a1;
- (void)_incrementPinChallengeAttemptForDevice:(id)a0;
- (void)incrementScanRequest;
- (void)decrementScanRequest;
- (BOOL)canStopScan;
- (void)_updateStoredDevices;
- (void)_drainPostScanTaskQueue;
- (void)_updateStoredDevicesWithConfiguredDevices:(id)a0;
- (id)preferredTargetDevicesForFollowup:(id)a0;
- (BOOL)hasAnyConfiguredDevicesMatchingPlatform:(id)a0;
- (id)notConfiguredDevicesMatchingPlatform:(id)a0;
- (id)groupedDeviceWithIdentifier:(id)a0;
- (void)beginPairingDevice:(id)a0 showUIBlock:(id /* block */)a1;
- (void)tryPairingDevice:(id)a0 withPin:(id)a1 completion:(id /* block */)a2;
- (void)runAfterScan:(id /* block */)a0;

@end
