@class NSArray;

@interface DNDSModeAssertionClientIdentifierInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

@property (readonly, copy, nonatomic) NSArray *clientIdentifiers;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (unsigned long long)predicateType;
- (id)initWithClientIdentifiers:(id)a0;

@end
