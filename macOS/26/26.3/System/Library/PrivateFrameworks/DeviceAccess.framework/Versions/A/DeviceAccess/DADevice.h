@class NSData, DADiscoveryConfiguration, NSString, NSURL, NSUUID, NSMutableDictionary, NSDictionary, DACryptoInfo, NSObject, UTType, NSNumber;
@protocol OS_nw_endpoint;

@interface DADevice : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *appAccessInfoDeviceMap;
@property (retain, nonatomic) NSMutableDictionary *accessoryServicesInternalMap;
@property (copy, nonatomic) NSString *bluetoothOTAName;
@property (copy, nonatomic) NSDictionary *bluetoothAdvertisementData;
@property (nonatomic) unsigned short bluetoothAppearance;
@property (copy, nonatomic) NSNumber *bluetoothRSSI;
@property (copy, nonatomic) DACryptoInfo *cryptoInfo;
@property (copy, nonatomic) NSURL *displayImageFileURL;
@property (nonatomic) BOOL bluetoothSetupInProgress;
@property (nonatomic) BOOL wifiAwareSetupInProgress;
@property (nonatomic) BOOL bluetoothSetupFinished;
@property (nonatomic) BOOL wifiAwareSetupFinished;
@property (nonatomic) BOOL upgradeInProgress;
@property (nonatomic) BOOL upgradeFinished;
@property (nonatomic) BOOL upgradeFailed;
@property (readonly, copy, nonatomic) NSDictionary *appAccessInfoMap;
@property (readonly, copy, nonatomic) NSDictionary *accessoryServicesMap;
@property (nonatomic) double approveTime;
@property (nonatomic) unsigned long long connectionStatus;
@property (copy, nonatomic) DADiscoveryConfiguration *discoveryConfiguration;
@property (copy, nonatomic) NSDictionary *endpoints;
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) BOOL pendingRemoval;
@property (nonatomic) BOOL allowPairing;
@property (copy, nonatomic) NSData *bluetoothClassicAddress;
@property (retain, nonatomic) NSUUID *bluetoothIdentifier;
@property (nonatomic) BOOL discoveredInExtension;
@property (copy, nonatomic) NSString *displayImageName;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long mediaPlaybackState;
@property (copy, nonatomic) NSString *mediaContentTitle;
@property (copy, nonatomic) NSString *mediaContentArtistName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpoint;
@property (nonatomic) long long protocol;
@property (retain, nonatomic) UTType *protocolType;
@property (copy, nonatomic) NSString *SSID;
@property (nonatomic) BOOL networkUnsecured;
@property (nonatomic) long long state;
@property (nonatomic) BOOL supportsGrouping;
@property (copy, nonatomic) NSData *txtRecordData;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) long long signature;
@property (copy, nonatomic) NSString *wifiAwareOTAName;
@property (copy, nonatomic) NSUUID *wifiAwareDevicePairingID;
@property (copy, nonatomic) NSString *wifiAwareModelName;
@property (copy, nonatomic) NSString *wifiAwareVendorName;
@property (readonly, nonatomic) BOOL requiresBluetoothSetup;
@property (readonly, nonatomic) BOOL requiresWiFiSoftAPSetup;
@property (readonly, nonatomic) BOOL requiresWiFiAwareSetup;
@property (readonly, nonatomic) BOOL stillTrackableWhenUnpaired;

+ (void)mergePersistentDictionary:(id)a0 into:(id)a1;
+ (BOOL)deviceMetadataURLValid:(id)a0;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 error:(id *)a1;
- (void)setBluetoothOnboardingFinished:(BOOL)a0;
- (void)setWiFiAwareOnboardingFinished:(BOOL)a0;
- (void)decodeAdvDataWithCoder:(id)a0;
- (void)decodeAdvDataWithCoder:(id)a0 xpcObject:(id)a1;
- (void)decodeAdvDataWithXPC:(id)a0;
- (void)encodeAdvDataWithCoder:(id)a0;
- (void)encodeAdvDataWithCoder:(id)a0 xpcObject:(id)a1;
- (void)encodeAdvDataWithXPC:(id)a0;
- (void)setDeviceUpgradeFinished:(BOOL)a0 inProgress:(BOOL)a1 failed:(BOOL)a2;

@end
