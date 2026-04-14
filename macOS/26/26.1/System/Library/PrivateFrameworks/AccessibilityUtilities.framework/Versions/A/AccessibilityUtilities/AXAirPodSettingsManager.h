@class NSArray, NSPointerArray, AXDispatchTimer, NSMutableSet, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AXAirPodSettingsManager : NSObject {
    NSPointerArray *_deviceListeners;
    struct BTSessionImpl { } *_session;
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSObject<OS_dispatch_queue> *_queue;
    AXDispatchTimer *_delayTimer;
    NSMutableSet *_deviceMap;
    NSMutableDictionary *_deviceInfo;
}

@property (copy, nonatomic) id /* block */ readyBlock;
@property BOOL ignoreSettingNotifications;
@property (readonly, nonatomic) NSArray *pairedAirPods;
@property (readonly, nonatomic) BOOL isConnectedToBluetoothSystem;

+ (id)sharedInstance;

- (BOOL)caseTonesEnabledForDeviceAddress:(id)a0;
- (void)_applySettings;
- (void)start;
- (float)holdDurationForDeviceAddress:(id)a0;
- (BOOL)_supportsCaseTonesForProductID:(unsigned int)a0;
- (void)setVolumeSwipeEnabled:(BOOL)a0 forDeviceAddress:(id)a1;
- (float)volumeSwipeDurationForDeviceAddress:(id)a0;
- (id)_pairedAirPods;
- (BOOL)isAirPodProduct:(id)a0;
- (void)setVolumeSwipeDuration:(float)a0 forDeviceAddress:(id)a1;
- (BOOL)supportsNoiseCancellationEnabledForDeviceAddress:(id)a0;
- (BOOL)_supportsCapability:(int)a0 forDeviceAddress:(id)a1 capabilityName:(id)a2;
- (unsigned int)defaultCaseTonesVolumeForDeviceAddress:(id)a0;
- (BOOL)pairedAirPodsSupportSpatialAudio;
- (void)_saveDeviceInfoForAddress:(id)a0 productID:(unsigned int)a1 bluetoothDevice:(struct BTDeviceImpl { } *)a2;
- (void)_retrieveSettingsForAddress:(id)a0;
- (void)_probeAccessories;
- (BOOL)supportsSpatialAudioForDeviceAddress:(id)a0;
- (void)setHoldDuration:(float)a0 forDeviceAddress:(id)a1;
- (float)tapSpeedForDeviceAddress:(id)a0;
- (BOOL)supportsTapSpeedForDeviceAddress:(id)a0;
- (id)_productIdentifierForBTDevice:(id)a0;
- (BOOL)supportsVolumeSwipeForDeviceAddress:(id)a0;
- (void)startWithCallback:(id /* block */)a0;
- (void)_didDisconnect;
- (id)disambiguationString;
- (void)_applySettingsForAddress:(id)a0;
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl { } *)a0 event:(int)a1 device:(struct BTDeviceImpl { } *)a2 state:(int)a3;
- (void)setTapSpeed:(float)a0 forDeviceAddress:(id)a1;
- (void)setCaseTonesEnabled:(BOOL)a0 forDeviceAddress:(id)a1;
- (void)_didConnectWithSession:(struct BTSessionImpl { } *)a0;
- (id)titleForSettings;
- (void)dealloc;
- (void)setNoiseCancellationEnabledWithOneUnit:(BOOL)a0 forDeviceAddress:(id)a1;
- (BOOL)supportsCaseTonesForDeviceAddress:(id)a0;
- (BOOL)volumeSwipeEnabledForDeviceAddress:(id)a0;
- (void).cxx_destruct;
- (BOOL)_supportsCaseTonesForDeviceAddress:(id)a0;
- (void)_sessionEventForSession:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (id)_deviceWithDeviceAddress:(id)a0;
- (id)initSharedInstance;
- (BOOL)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)a0;
- (id)titleAndAssetNameForSettings;
- (void)_serviceEventForDevice:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 eventType:(int)a2 specificEvent:(unsigned int)a3 result:(int)a4;
- (BOOL)supportsCaseTonesVolumeForDeviceAddress:(id)a0;
- (void)_retrieveSettingsFromDevices:(id)a0;
- (BOOL)isBeatsProduct:(id)a0;
- (long long)_pairedProductsFlags;
- (void)_beginDetach;
- (unsigned int)caseTonesVolumeForDeviceAddress:(id)a0;
- (BOOL)supportsHoldDurationForDeviceAddress:(id)a0;
- (BOOL)supportsSpatialAudio;
- (void)setToneVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (BOOL)_supportsCaseTonesVolumeForDeviceAddress:(id)a0;
- (unsigned int)toneVolumeForDeviceAddress:(id)a0;
- (unsigned int)defaultToneVolumeForDeviceAddress:(id)a0;
- (void)setCaseTonesVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (BOOL)supportsToneVolumeForDeviceAddress:(id)a0;

@end
