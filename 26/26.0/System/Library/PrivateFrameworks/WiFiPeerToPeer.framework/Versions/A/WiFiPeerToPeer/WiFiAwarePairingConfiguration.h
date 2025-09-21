@class NSArray;

@interface WiFiAwarePairingConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *supportedPairSetupMethods;
@property (nonatomic) BOOL pairingCachingEnabled;
@property (nonatomic) long long pairingSetupMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSupportedPairSetupMethods:(id)a0 pairingCachingEnabled:(BOOL)a1;
- (id)initWithSupportedPairSetupMethods:(id)a0 pairingCachingEnabled:(BOOL)a1 pairingSetupMode:(long long)a2;

@end
