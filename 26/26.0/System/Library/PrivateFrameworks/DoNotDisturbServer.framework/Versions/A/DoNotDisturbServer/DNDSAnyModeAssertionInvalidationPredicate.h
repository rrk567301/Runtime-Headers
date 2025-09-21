@interface DNDSAnyModeAssertionInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)predicateType;

@end
