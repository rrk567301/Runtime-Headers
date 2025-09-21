@interface CTLazuliBusinessMessagingCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long userPreferenceForSwitch;
@property (nonatomic) char supported;
@property (nonatomic) char enabledByDefault;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct BusinessMessagingCapabilities { int x0; BOOL x1; BOOL x2; } *)a0;
- (char)isEqualToCTLazuliBusinessMessagingCapabilities:(id)a0;

@end
