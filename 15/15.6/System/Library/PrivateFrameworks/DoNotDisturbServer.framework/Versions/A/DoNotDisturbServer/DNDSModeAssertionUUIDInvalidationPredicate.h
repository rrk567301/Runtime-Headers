@class NSArray;

@interface DNDSModeAssertionUUIDInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

@property (readonly, copy, nonatomic) NSArray *UUIDs;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (unsigned long long)predicateType;
- (id)initWithUUIDs:(id)a0;

@end
