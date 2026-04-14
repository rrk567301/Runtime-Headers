@interface DNDModeAssertionCurrentLocationLifetime : DNDModeAssertionLifetime

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (unsigned long long)lifetimeType;

@end
