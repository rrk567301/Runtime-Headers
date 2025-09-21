@class CLCircularRegion;

@interface DNDModeAssertionExplicitRegionLifetime : DNDModeAssertionLifetime

@property (readonly, copy) CLCircularRegion *region;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(id)a0;
- (unsigned long long)lifetimeType;

@end
