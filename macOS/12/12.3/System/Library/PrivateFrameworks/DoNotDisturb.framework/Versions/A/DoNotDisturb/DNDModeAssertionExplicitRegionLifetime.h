@class CLCircularRegion;

@interface DNDModeAssertionExplicitRegionLifetime : DNDModeAssertionLifetime

@property (readonly, copy) CLCircularRegion *region;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0;
- (unsigned long long)lifetimeType;

@end
