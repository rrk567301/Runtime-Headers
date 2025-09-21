@interface DNDModeAssertionCurrentLocationLifetime : DNDModeAssertionLifetime

+ (id)sharedInstance;
+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (unsigned long long)lifetimeType;

@end
