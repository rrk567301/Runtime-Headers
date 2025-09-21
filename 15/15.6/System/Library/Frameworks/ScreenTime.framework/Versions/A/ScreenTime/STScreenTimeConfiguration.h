@interface STScreenTimeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char enforcesChildRestrictions;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_stScreenTimeConfigurationCommonInitWithEnforcesChildRestrictions:(char)a0;
- (id)initWithEnforcesChildRestrictions:(char)a0;

@end
