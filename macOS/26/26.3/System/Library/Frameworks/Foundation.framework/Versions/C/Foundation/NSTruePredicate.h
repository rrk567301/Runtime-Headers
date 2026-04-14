@interface NSTruePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (void)allowEvaluation;
- (id)autorelease;
- (id)predicateFormat;
- (id)retain;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)_allowsEvaluation;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;

@end
