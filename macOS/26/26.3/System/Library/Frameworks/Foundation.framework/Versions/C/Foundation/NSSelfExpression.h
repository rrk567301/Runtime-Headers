@interface NSSelfExpression : NSExpression

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (BOOL)_allowsEvaluation;
+ (id)defaultInstance;

- (unsigned long long)retainCount;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)autorelease;
- (id)predicateFormat;
- (id)retain;
- (id)init;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)_initPrivate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;

@end
