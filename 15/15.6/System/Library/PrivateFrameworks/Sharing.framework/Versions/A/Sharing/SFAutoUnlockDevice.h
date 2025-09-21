@class NSString, NSUUID, NSDictionary, NSData;

@interface SFAutoUnlockDevice : SFPeerDevice <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *modelDescription;
@property (nonatomic) char unlockEnabled;
@property (nonatomic) char bluetoothCloudPaired;
@property (retain, nonatomic) NSUUID *bluetoothID;
@property (copy, nonatomic) NSUUID *proxyBluetoothID;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSDictionary *results;
@property (retain, nonatomic) NSData *hintToken;
@property (nonatomic) char placeholder;
@property (nonatomic) char supportsAlwaysDirect;
@property (nonatomic) char supportsApproveWithWatch;
@property (nonatomic) char supportsApproveIcon;
@property (nonatomic) char supportsEncryption;
@property (nonatomic) char supportsAdvertisingUnlocked;
@property (nonatomic) char supportsConnectionCache;
@property (nonatomic) char supportsHEIC;
@property (nonatomic) long long majorOSVersion;
@property (nonatomic) char keyExists;
@property (nonatomic) char canUnlockDevice;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
