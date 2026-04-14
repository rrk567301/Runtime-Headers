@interface CTLazuliEncryptionCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL carrierSupport;
@property (nonatomic) BOOL showSwitch;
@property (nonatomic) BOOL canSetSwitch;
@property (nonatomic) BOOL switchState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct EncryptionCapabilities { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)isEqualToCTLazuliEncryptionCapabilities:(id)a0;

@end
