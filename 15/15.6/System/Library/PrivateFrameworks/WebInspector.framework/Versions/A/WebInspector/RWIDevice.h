@class NSString, NSImage, NSObject;
@protocol RWIPairableDelegate, OS_dispatch_source, RWIDeviceDelegate;

@interface RWIDevice : RWIMobileDeviceTargetBase <RWIPairable> {
    NSObject<OS_dispatch_source> *_deviceAccessQueuePairingTimer;
    NSString *_loggingIdentifier;
    char _hasBuildVersion;
    char _wirelessEnabled;
    char _attemptedPair;
    long long _automationAvailability;
    NSImage *_icon;
    NSImage *_symbolImage;
    long long _deviceClass;
}

@property (weak, nonatomic) id<RWIDeviceDelegate> deviceDelegate;
@property (readonly, nonatomic, getter=isRemoteInspectionEnabled) char remoteInspectionEnabled;
@property (readonly, nonatomic, getter=isWirelessEnabled) char wirelessEnabled;
@property (readonly, nonatomic) char alwaysAllowsNetworkDebugging;
@property (readonly, nonatomic, getter=isPasscodeLocked) char passcodeLocked;
@property (readonly, nonatomic) long long pairingProgress;
@property (readonly, nonatomic, getter=isPaired) char paired;
@property (weak, nonatomic) id<RWIPairableDelegate> pairingDelegate;
@property (readonly, nonatomic) long long pairingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isReady;
- (void)pair;
- (id)icon;
- (long long)deviceClass;
- (char)paired;
- (char)isDevice;
- (void)connectionEstablished;
- (char)isSimulator;
- (id)symbolImage;
- (char)isIOS;
- (void)disableWireless;
- (void)enableWireless;
- (void)handleUserIntentForInteractingWithDevice;
- (void)unpair;
- (id)_copyRemoteInspectionEnabledValueFromDevice:(struct _AMDevice { } *)a0;
- (id)_copyWirelessEnabledValueFromDevice:(struct _AMDevice { } *)a0;
- (void)_fetchDeviceInformationFromMobileDeviceConnection:(id)a0 shouldDelayServiceConnection:(char)a1;
- (void)_queueAttemptingPairWithProgressCallback:(id /* block */)a0;
- (char)_shouldAllowDebuggingOnThisAMDeviceRef:(struct _AMDevice { } *)a0 udid:(id)a1;
- (char)_supportsRemoteInspectorForDeviceClass:(long long)a0 productVersion:(id)a1;
- (void)addMobileDeviceConnection:(id)a0;
- (long long)automationAvailability;
- (void)connectionLost;
- (void)deviceNameChanged;
- (id)initWithMobileDeviceConnection:(id)a0 manager:(id)a1;
- (void)lockStatusChanged;
- (void)markAsHavingBuildVersion;
- (char)needsAutomationAvailabilityFallback;
- (void)removeMobileDeviceConnection:(id)a0;
- (void)setAutomationAvailability:(long long)a0;
- (void)setDeviceName:(id)a0 udid:(id)a1 buildVersion:(id)a2 productVersion:(id)a3 deviceClass:(long long)a4 paired:(long long)a5 wirelessEnabled:(char)a6 supported:(char)a7;
- (void)setPasscodeLocked:(char)a0;
- (char)supportsWebDriver;
- (void)webInspectorServiceDisabled;
- (void)webInspectorServiceEnabled;
- (void)wirelessCapabilitiesChanged;

@end
