@class NSUUID, NSData, NSArray, NSDate, IDSEndpointCapabilities, NSString, IDSDestination, _IDSDevice;

@interface IDSDevice : NSObject {
    _IDSDevice *_internal;
}

@property (readonly, nonatomic) NSArray *linkedUserURIs;
@property (retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property (readonly, nonatomic) NSUUID *stableBluetoothIdentifier;
@property (readonly, nonatomic) char supportsApplePay;
@property (readonly, nonatomic) char supportsTethering;
@property (readonly, nonatomic) char supportsHandoff;
@property (readonly, nonatomic) char supportsiCloudPairing;
@property (readonly, nonatomic) char supportsSMSRelay;
@property (readonly, nonatomic) char supportsMMSRelay;
@property (readonly, nonatomic) char supportsPhoneCalls;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSDate *lastActivityDate;
@property (readonly, nonatomic) char isCloudConnected;
@property (readonly, nonatomic) IDSEndpointCapabilities *capabilities;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *uniqueIDOverride;
@property (readonly, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) struct { long long x0; long long x1; long long x2; } operatingSystemVersion;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSString *deviceColor;
@property (readonly, nonatomic) NSString *enclosureColor;
@property (readonly, nonatomic) char isHSATrusted;
@property (readonly, nonatomic) char isDefaultPairedDevice;
@property (readonly, nonatomic) char isLocallyPaired;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) long long relationship;
@property (readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property (readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property (readonly, nonatomic, getter=isNearby) char nearby;
@property (readonly, nonatomic, getter=isConnected) char connected;
@property (readonly, nonatomic) IDSDestination *destination;
@property (readonly, nonatomic) char locallyPresent;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)fullDescription;
- (id)_internal;
- (void)_addIdentity:(id)a0;
- (id)_initWithDictionary:(id)a0;
- (void)_setAccount:(id)a0;
- (void)_setService:(id)a0;
- (id)compactDescription;

@end
