@class NSDate;

@interface DNDSModeAssertionDateInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

@property (readonly, copy, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)predicateType;

@end
