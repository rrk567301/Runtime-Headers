@interface DNDModeAssertionUserRequestedLifetime : DNDModeAssertionLifetime

+ (char)supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)lifetimeType;

@end
