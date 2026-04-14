@class NSString, NSData, DADiscoveryConfiguration;

@interface DADeviceAppAccessInfo : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long accessoryOptions;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) DADiscoveryConfiguration *appDiscoveryConfiguration;
@property (nonatomic) double approveTime;
@property (nonatomic) double endTime;
@property (readonly, copy, nonatomic) NSString *associationIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *devicePushTopic;
@property (copy, nonatomic) NSData *devicePushToken;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long wifiAwarePairingID;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 error:(id *)a1;
- (id)persistentDictionaryRepresentation;
- (id)initWithBundleIdentifier:(id)a0 deviceIdentifier:(id)a1 accessoryOptions:(unsigned long long)a2 state:(long long)a3;
- (id)initWithBundleIdentifier:(id)a0 deviceIdentifier:(id)a1 state:(long long)a2;

@end
