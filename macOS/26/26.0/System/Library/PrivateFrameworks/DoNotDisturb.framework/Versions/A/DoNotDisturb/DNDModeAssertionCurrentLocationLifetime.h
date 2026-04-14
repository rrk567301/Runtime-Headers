@interface DNDModeAssertionCurrentLocationLifetime : DNDModeAssertionLifetime

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)lifetimeType;

@end
