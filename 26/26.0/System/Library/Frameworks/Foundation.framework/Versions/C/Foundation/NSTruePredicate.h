@interface NSTruePredicate : NSPredicate

+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)autorelease;
- (BOOL)_isDeallocating;
- (void)allowEvaluation;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (unsigned long long)hash;
- (BOOL)_allowsEvaluation;
- (BOOL)isEqual:(id)a0;

@end
