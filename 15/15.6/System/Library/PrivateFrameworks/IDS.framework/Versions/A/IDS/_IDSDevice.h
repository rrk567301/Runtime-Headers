@class NSData, NSString, NSArray, NSUUID, IDSEndpointCapabilities, NSDate, NSDictionary, CUTWeakReference, IDSDeviceStateMonitoring;

@interface _IDSDevice : NSObject <IDSDeviceStateMonitoringDelegate> {
    NSDictionary *_info;
    CUTWeakReference *_account;
    CUTWeakReference *_serviceReference;
    IDSDeviceStateMonitoring *_monitor;
    char _nearby;
    char _connected;
    char _immutableCloudConnected;
    char _cloudConnected;
}

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic, getter=isNearby) char nearby;
@property (readonly, nonatomic, getter=isConnected) char connected;
@property (readonly, nonatomic, getter=isCloudConnected) char cloudConnected;
@property (readonly, nonatomic) char locallyPresent;
@property (readonly, nonatomic) char isDefaultPairedDevice;
@property (readonly, nonatomic) char isLocallyPaired;
@property (readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property (readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property (readonly, nonatomic) char supportsiCloudPairing;
@property (readonly, nonatomic) char supportsTethering;
@property (readonly, nonatomic) char supportsHandoff;
@property (readonly, nonatomic) char supportsApplePay;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSArray *identities;
@property (retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property (readonly, nonatomic) NSUUID *stableBluetoothIdentifier;
@property (readonly, nonatomic) char supportsSMSRelay;
@property (readonly, nonatomic) char supportsMMSRelay;
@property (readonly, nonatomic) char supportsPhoneCalls;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) NSString *enclosureColor;
@property (readonly, nonatomic) NSArray *linkedUserURIs;
@property (readonly, nonatomic) char isHSATrusted;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) long long relationship;
@property (readonly, nonatomic) IDSEndpointCapabilities *capabilities;
@property (readonly, nonatomic) NSDate *lastActivityDate;
@property (readonly, nonatomic) NSString *uniqueIDOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)cancel;
- (id)fullDescription;
- (void)stateDidChange:(unsigned long long)a0;
- (void)_addIdentity:(id)a0;
- (void)_cloudConnectedStateChanged;
- (void)_connectedStateChanged;
- (void)_nearbyStateChanged;
- (void)_setAccount:(id)a0;
- (void)_setService:(id)a0;
- (void)_stateChanged;
- (id)compactDescription;
- (char)isTinker;

@end
