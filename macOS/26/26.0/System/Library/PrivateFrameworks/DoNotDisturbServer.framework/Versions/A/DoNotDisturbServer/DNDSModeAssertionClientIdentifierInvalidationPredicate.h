@class NSArray;

@interface DNDSModeAssertionClientIdentifierInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

@property (readonly, copy, nonatomic) NSArray *clientIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)predicateType;
- (id)initWithClientIdentifiers:(id)a0;

@end
