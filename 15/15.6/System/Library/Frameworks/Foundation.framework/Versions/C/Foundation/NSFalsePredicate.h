@interface NSFalsePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)supportsSecureCoding;
+ (id)defaultInstance;

- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (char)_allowsEvaluation;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (char)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;

@end
