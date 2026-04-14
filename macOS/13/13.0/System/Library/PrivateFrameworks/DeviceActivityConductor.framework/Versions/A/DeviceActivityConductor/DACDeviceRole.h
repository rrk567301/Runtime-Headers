@interface DACDeviceRole : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

+ (id)unknownRole;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isPrimary;
- (BOOL)isUnknown;
- (BOOL)satisfiesRole:(id)a0;
- (id)_initWithRoleFlags:(unsigned long long)a0;
- (BOOL)_isEqualToRole:(id)a0;

@end
