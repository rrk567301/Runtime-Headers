@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, RWIDeviceDelegate;

@interface RWIDevice : RWITarget {
    NSObject<OS_dispatch_source> *_deviceAccessQueuePairingTimer;
    NSString *_loggingIdentifier;
    BOOL _hasBuildVersion;
    BOOL _attemptedPair;
    BOOL _supportsAutoAttach;
    long long _automationAvailability;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceAccessQueue;
@property (readonly, copy, nonatomic) NSMutableArray *mobileDeviceConnections;
@property (readonly, nonatomic) long long deviceClass;
@property (weak, nonatomic) id<RWIDeviceDelegate> deviceDelegate;
@property (readonly, nonatomic) long long pairingProgress;
@property (readonly, nonatomic) BOOL supportsWirelessConnections;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) BOOL hasWiredConnection;
@property (readonly, nonatomic) BOOL hasWirelessConnection;
@property (readonly, nonatomic, getter=isRemoteInspectionEnabled) BOOL remoteInspectionEnabled;
@property (readonly, nonatomic, getter=isWirelessEnabled) BOOL wirelessEnabled;
@property (readonly, nonatomic, getter=isPasscodeLocked) BOOL passcodeLocked;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;

+ (void)initialize;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isReady;
- (void)pair;
- (BOOL)paired;
- (BOOL)isDevice;
- (void)connectionEstablished;
- (id)loggingIdentifier;
- (BOOL)isIOS;
- (BOOL)isSimulator;
- (BOOL)supportsAutomaticInspection;
- (void)disableWireless;
- (void)enableWireless;
- (long long)automationAvailability;
- (void)setAutomationAvailability:(long long)a0;
- (void)addMobileDeviceConnection:(id)a0;
- (id)initWithMobileDeviceConnection:(id)a0 manager:(id)a1;
- (void)removeMobileDeviceConnection:(id)a0;
- (void)_queueAttemptingPairWithProgressCallback:(id /* block */)a0;
- (BOOL)supportsWebDriver;
- (BOOL)needsAutomationAvailabilityFallback;
- (void)markAsHavingBuildVersion;
- (void)_fetchDeviceInformationFromMobileDeviceConnection:(id)a0;
- (void)webInspectorServiceEnabled;
- (void)webInspectorServiceDisabled;
- (void)setDeviceName:(id)a0 udid:(id)a1 buildVersion:(id)a2 productVersion:(id)a3 deviceClass:(long long)a4 paired:(long long)a5 wirelessEnabled:(BOOL)a6 supported:(BOOL)a7 supportsAutoAttach:(BOOL)a8;
- (void)setPasscodeLocked:(BOOL)a0;
- (void)connectionLost;
- (void)deviceNameChanged;
- (void)lockStatusChanged;
- (void)wirelessCapabilitiesChanged;

@end
