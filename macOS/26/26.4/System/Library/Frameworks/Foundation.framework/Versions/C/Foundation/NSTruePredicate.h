@interface NSTruePredicate : NSPredicate

+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_tryRetain;
- (id)autorelease;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)_allowsEvaluation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (id)retain;
- (unsigned long long)hash;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (unsigned long long)retainCount;

@end
