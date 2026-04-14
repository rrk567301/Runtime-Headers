@interface NSFalsePredicate : NSPredicate

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultInstance;

- (id)retain;
- (id)predicateFormat;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_allowsEvaluation;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (oneway void)release;

@end
