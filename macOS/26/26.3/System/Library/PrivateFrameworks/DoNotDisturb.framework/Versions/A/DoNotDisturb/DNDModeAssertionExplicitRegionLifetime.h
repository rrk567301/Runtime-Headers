@class CLCircularRegion;

@interface DNDModeAssertionExplicitRegionLifetime : DNDModeAssertionLifetime

@property (readonly, copy) CLCircularRegion *region;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRegion:(id)a0;
- (unsigned long long)lifetimeType;

@end
