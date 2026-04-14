@interface NSTruePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (BOOL)_allowsEvaluation;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;

@end
