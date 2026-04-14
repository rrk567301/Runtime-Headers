@interface NSSelfExpression : NSExpression

+ (BOOL)_allowsEvaluation;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)defaultInstance;

- (id)_initPrivate;
- (id)retain;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)hash;
- (id)predicateFormat;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)expressionType;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
