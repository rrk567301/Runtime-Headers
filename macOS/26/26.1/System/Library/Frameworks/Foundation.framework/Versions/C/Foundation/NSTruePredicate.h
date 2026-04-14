@interface NSTruePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;

- (void)allowEvaluation;
- (BOOL)_allowsEvaluation;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)predicateFormat;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (BOOL)isEqual:(id)a0;

@end
