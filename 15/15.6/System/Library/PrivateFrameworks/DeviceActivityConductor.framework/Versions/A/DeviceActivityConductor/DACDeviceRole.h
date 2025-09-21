@interface DACDeviceRole : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

+ (id)unknownRole;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isPrimary;
- (char)isUnknown;
- (char)satisfiesRole:(id)a0;
- (id)_initWithRoleFlags:(unsigned long long)a0;

@end
