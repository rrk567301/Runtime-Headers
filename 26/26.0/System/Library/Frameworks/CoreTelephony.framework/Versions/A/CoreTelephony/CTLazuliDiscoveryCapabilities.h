@interface CTLazuliDiscoveryCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithReflection:(const struct DiscoveryCapabilities { int x0; } *)a0;
- (BOOL)isEqualToCTLazuliDiscoveryCapabilities:(id)a0;

@end
