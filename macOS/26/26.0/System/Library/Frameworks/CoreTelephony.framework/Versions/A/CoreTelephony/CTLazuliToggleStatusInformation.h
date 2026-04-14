@interface CTLazuliToggleStatusInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long userPreferenceForSwitch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithReflection:(const struct ToggleStatusInformation { int x0; int x1; } *)a0;
- (BOOL)isEqualToCTLazuliToggleStatusInformation:(id)a0;

@end
