@class NSDate;

@interface DNDSModeAssertionDateInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

@property (readonly, copy, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (unsigned long long)predicateType;

@end
