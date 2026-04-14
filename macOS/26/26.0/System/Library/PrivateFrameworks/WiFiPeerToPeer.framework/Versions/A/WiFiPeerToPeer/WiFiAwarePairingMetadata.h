@class NSString;

@interface WiFiAwarePairingMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *selfPairingName;
@property (copy, nonatomic) NSString *peerDeviceName;
@property (nonatomic) long long storageClass;
@property (nonatomic) double lifetime;
@property (nonatomic) long long pairingClient;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 selfPairingName:(id)a1 peerDeviceName:(id)a2 storageClass:(long long)a3 lifetime:(double)a4 pairingClient:(long long)a5;

@end
