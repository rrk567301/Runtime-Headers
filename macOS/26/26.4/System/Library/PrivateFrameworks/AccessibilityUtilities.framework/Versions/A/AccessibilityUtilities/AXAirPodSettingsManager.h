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

- (BOOL)supportsToneVolumeForDeviceAddress:(id)a0;
- (unsigned int)toneVolumeForDeviceAddress:(id)a0;
- (float)tapSpeedForDeviceAddress:(id)a0;
- (BOOL)_supportsCaseTonesForProductID:(unsigned int)a0;
- (void)_serviceEventForDevice:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 eventType:(int)a2 specificEvent:(unsigned int)a3 result:(int)a4;
- (id)disambiguationString;
- (void)_didDisconnect;
- (id)_pairedAirPods;
- (BOOL)supportsSpatialAudio;
- (id)_deviceWithDeviceAddress:(id)a0;
- (BOOL)supportsCaseTonesVolumeForDeviceAddress:(id)a0;
- (void)setToneVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (BOOL)_supportsCaseTonesForDeviceAddress:(id)a0;
- (void)_applySettings;
- (void)_applySettingsForAddress:(id)a0;
- (BOOL)volumeSwipeEnabledForDeviceAddress:(id)a0;
- (BOOL)supportsSpatialAudioForDeviceAddress:(id)a0;
- (void)_probeAccessories;
- (id)_productIdentifierForBTDevice:(id)a0;
- (void)_saveDeviceInfoForAddress:(id)a0 productID:(unsigned int)a1 bluetoothDevice:(struct BTDeviceImpl { } *)a2;
- (void)_retrieveSettingsForAddress:(id)a0;
- (float)volumeSwipeDurationForDeviceAddress:(id)a0;
- (id)initSharedInstance;
- (void)startWithCallback:(id /* block */)a0;
- (BOOL)supportsVolumeSwipeForDeviceAddress:(id)a0;
- (void)_retrieveSettingsFromDevices:(id)a0;
- (id)titleForSettings;
- (void)setCaseTonesEnabled:(BOOL)a0 forDeviceAddress:(id)a1;
- (BOOL)supportsCaseTonesForDeviceAddress:(id)a0;
- (void).cxx_destruct;
- (unsigned int)defaultToneVolumeForDeviceAddress:(id)a0;
- (long long)_pairedProductsFlags;
- (float)holdDurationForDeviceAddress:(id)a0;
- (void)_sessionEventForSession:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (void)_beginDetach;
- (void)setVolumeSwipeDuration:(float)a0 forDeviceAddress:(id)a1;
- (BOOL)caseTonesEnabledForDeviceAddress:(id)a0;
- (BOOL)_supportsCapability:(int)a0 forDeviceAddress:(id)a1 capabilityName:(id)a2;
- (unsigned int)caseTonesVolumeForDeviceAddress:(id)a0;
- (BOOL)isBeatsProduct:(id)a0;
- (BOOL)supportsHoldDurationForDeviceAddress:(id)a0;
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl { } *)a0 event:(int)a1 device:(struct BTDeviceImpl { } *)a2 state:(int)a3;
- (void)setCaseTonesVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (void)start;
- (void)setVolumeSwipeEnabled:(BOOL)a0 forDeviceAddress:(id)a1;
- (BOOL)isAirPodProduct:(id)a0;
- (unsigned int)defaultCaseTonesVolumeForDeviceAddress:(id)a0;
- (BOOL)pairedAirPodsSupportSpatialAudio;
- (void)setNoiseCancellationEnabledWithOneUnit:(BOOL)a0 forDeviceAddress:(id)a1;
- (id)titleAndAssetNameForSettings;
- (BOOL)supportsTapSpeedForDeviceAddress:(id)a0;
- (BOOL)_supportsCaseTonesVolumeForDeviceAddress:(id)a0;
- (void)dealloc;
- (void)setHoldDuration:(float)a0 forDeviceAddress:(id)a1;
- (BOOL)supportsNoiseCancellationEnabledForDeviceAddress:(id)a0;
- (BOOL)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)a0;
- (void)_didConnectWithSession:(struct BTSessionImpl { } *)a0;
- (void)setTapSpeed:(float)a0 forDeviceAddress:(id)a1;

@end
