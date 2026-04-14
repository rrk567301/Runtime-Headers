@interface NSSelfExpression : NSExpression

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_allowsEvaluation;
+ (id)defaultInstance;

- (id)retain;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (BOOL)_isDeallocating;
- (id)predicateFormat;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (unsigned long long)expressionType;
- (unsigned long long)hash;
- (id)_initPrivate;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)init;

@end
