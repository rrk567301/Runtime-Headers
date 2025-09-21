@interface NSAnyKeyExpression : NSExpression

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)defaultInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_allowsEvaluation;

- (unsigned long long)expressionType;
- (id)_initPrivate;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
