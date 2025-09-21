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
@property (nonatomic) char ignoreSettingNotifications;
@property (readonly, nonatomic) NSArray *pairedAirPods;
@property (readonly, nonatomic) char isConnectedToBluetoothSystem;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (char)supportsSpatialAudio;
- (id)initSharedInstance;
- (void)_applySettings;
- (char)isBeatsProduct:(id)a0;
- (void)setToneVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl { } *)a0 event:(int)a1 device:(struct BTDeviceImpl { } *)a2 state:(int)a3;
- (void)_applySettingsForAddress:(id)a0;
- (void)_beginDetach;
- (id)_deviceWithDeviceAddress:(id)a0;
- (void)_didConnectWithSession:(struct BTSessionImpl { } *)a0;
- (void)_didDisconnect;
- (id)_pairedAirPods;
- (void)_probeAccessories;
- (id)_productIdentifierForBTDevice:(id)a0;
- (void)_retrieveSettingsForAddress:(id)a0;
- (void)_retrieveSettingsFromDevices:(id)a0;
- (void)_serviceEventForDevice:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 eventType:(int)a2 specificEvent:(unsigned int)a3 result:(int)a4;
- (void)_sessionEventForSession:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (char)caseTonesEnabledForDeviceAddress:(id)a0;
- (unsigned int)defaultToneVolumeForDeviceAddress:(id)a0;
- (id)disambiguationString;
- (float)holdDurationForDeviceAddress:(id)a0;
- (char)isAirPodProduct:(id)a0;
- (char)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)a0;
- (char)pairedAirPodsSupportSpatialAudio;
- (void)setCaseTonesEnabled:(char)a0 forDeviceAddress:(id)a1;
- (void)setHoldDuration:(float)a0 forDeviceAddress:(id)a1;
- (void)setNoiseCancellationEnabledWithOneUnit:(char)a0 forDeviceAddress:(id)a1;
- (void)setTapSpeed:(float)a0 forDeviceAddress:(id)a1;
- (void)setVolumeSwipeDuration:(float)a0 forDeviceAddress:(id)a1;
- (void)setVolumeSwipeEnabled:(char)a0 forDeviceAddress:(id)a1;
- (void)startWithCallback:(id /* block */)a0;
- (char)supportsCaseTonesForDeviceAddress:(id)a0;
- (char)supportsHoldDurationForDeviceAddress:(id)a0;
- (char)supportsNoiseCancellationEnabledForDeviceAddress:(id)a0;
- (char)supportsSpatialAudioForDeviceAddress:(id)a0;
- (char)supportsTapSpeedForDeviceAddress:(id)a0;
- (char)supportsToneVolumeForDeviceAddress:(id)a0;
- (char)supportsVolumeSwipeForDeviceAddress:(id)a0;
- (float)tapSpeedForDeviceAddress:(id)a0;
- (id)titleForSettings;
- (unsigned int)toneVolumeForDeviceAddress:(id)a0;
- (float)volumeSwipeDurationForDeviceAddress:(id)a0;
- (char)volumeSwipeEnabledForDeviceAddress:(id)a0;

@end
