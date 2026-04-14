@interface NSSelfExpression : NSExpression

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
+ (BOOL)_allowsEvaluation;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_tryRetain;
- (id)autorelease;
- (unsigned long long)expressionType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)predicateFormat;
- (id)retain;
- (unsigned long long)hash;
- (id)init;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)_initPrivate;

@end
