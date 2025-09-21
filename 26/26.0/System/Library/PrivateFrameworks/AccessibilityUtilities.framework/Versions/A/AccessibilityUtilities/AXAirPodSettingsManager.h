@class NSArray, NSPointerArray, AXDispatchTimer, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AXAirPodSettingsManager : NSObject {
    NSPointerArray *_deviceListeners;
    struct BTSessionImpl { } *_session;
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSObject<OS_dispatch_queue> *_queue;
    AXDispatchTimer *_delayTimer;
    NSMutableSet *_deviceMap;
}

@property (copy, nonatomic) id /* block */ readyBlock;
@property (nonatomic) BOOL ignoreSettingNotifications;
@property (readonly, nonatomic) NSArray *pairedAirPods;
@property (readonly, nonatomic) BOOL isConnectedToBluetoothSystem;

+ (id)sharedInstance;

- (unsigned int)defaultToneVolumeForDeviceAddress:(id)a0;
- (void)setToneVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (void)_serviceEventForDevice:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 eventType:(int)a2 specificEvent:(unsigned int)a3 result:(int)a4;
- (void)start;
- (BOOL)supportsSpatialAudioForDeviceAddress:(id)a0;
- (BOOL)supportsCaseTonesVolumeForDeviceAddress:(id)a0;
- (void)dealloc;
- (void)_sessionEventForSession:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (BOOL)pairedAirPodsSupportSpatialAudio;
- (void)setVolumeSwipeEnabled:(BOOL)a0 forDeviceAddress:(id)a1;
- (BOOL)supportsCaseTonesForDeviceAddress:(id)a0;
- (void)setVolumeSwipeDuration:(float)a0 forDeviceAddress:(id)a1;
- (BOOL)isBeatsProduct:(id)a0;
- (id)titleAndAssetNameForSettings;
- (id)initSharedInstance;
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl { } *)a0 event:(int)a1 device:(struct BTDeviceImpl { } *)a2 state:(int)a3;
- (void)setCaseTonesVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (float)volumeSwipeDurationForDeviceAddress:(id)a0;
- (BOOL)caseTonesEnabledForDeviceAddress:(id)a0;
- (void)setHoldDuration:(float)a0 forDeviceAddress:(id)a1;
- (void)_beginDetach;
- (id)_deviceWithDeviceAddress:(id)a0;
- (unsigned int)caseTonesVolumeForDeviceAddress:(id)a0;
- (void)_didConnectWithSession:(struct BTSessionImpl { } *)a0;
- (void)_probeAccessories;
- (long long)_pairedProductsFlags;
- (BOOL)supportsSpatialAudio;
- (id)disambiguationString;
- (BOOL)isAirPodProduct:(id)a0;
- (void)_retrieveSettingsFromDevices:(id)a0;
- (void)setTapSpeed:(float)a0 forDeviceAddress:(id)a1;
- (void)setNoiseCancellationEnabledWithOneUnit:(BOOL)a0 forDeviceAddress:(id)a1;
- (unsigned int)toneVolumeForDeviceAddress:(id)a0;
- (void)_didDisconnect;
- (BOOL)supportsTapSpeedForDeviceAddress:(id)a0;
- (float)holdDurationForDeviceAddress:(id)a0;
- (void)startWithCallback:(id /* block */)a0;
- (BOOL)volumeSwipeEnabledForDeviceAddress:(id)a0;
- (BOOL)supportsVolumeSwipeForDeviceAddress:(id)a0;
- (void)_retrieveSettingsForAddress:(id)a0;
- (unsigned int)defaultCaseTonesVolumeForDeviceAddress:(id)a0;
- (id)titleForSettings;
- (void)setCaseTonesEnabled:(BOOL)a0 forDeviceAddress:(id)a1;
- (id)_productIdentifierForBTDevice:(id)a0;
- (float)tapSpeedForDeviceAddress:(id)a0;
- (BOOL)supportsHoldDurationForDeviceAddress:(id)a0;
- (void)_applySettingsForAddress:(id)a0;
- (void)_applySettings;
- (BOOL)_supportsCapability:(int)a0 forDeviceAddress:(id)a1 capabilityName:(id)a2;
- (BOOL)supportsToneVolumeForDeviceAddress:(id)a0;
- (BOOL)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)a0;
- (BOOL)supportsNoiseCancellationEnabledForDeviceAddress:(id)a0;
- (id)_pairedAirPods;
- (void).cxx_destruct;

@end
