@interface ASUSQLiteComparisonPredicate : ASUSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) long long comparisonType;
@property (readonly, nonatomic) id value;

+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2;
+ (id)predicateWithProperty:(id)a0 equalToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 equalToLongLong:(long long)a1;

- (id)SQLForEntityClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;

@end
