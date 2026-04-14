@interface DNDSAnyModeAssertionInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)predicateType;

@end
