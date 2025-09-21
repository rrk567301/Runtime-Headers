@class NSArray;

@interface WiFiAwarePairingConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *supportedPairSetupMethods;
@property (readonly, nonatomic) char pairingCachingEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSupportedPairSetupMethods:(id)a0 pairingCachingEnabled:(char)a1;

@end
