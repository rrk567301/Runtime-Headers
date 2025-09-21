@class NSArray;

@interface PPSSQLiteContainsPredicate : PPSSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) char isNegative;
@property (readonly, copy, nonatomic) NSArray *values;

+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)_arrayFromValues:(id)a0;
+ (id)_containsPredicateWithProperty:(id)a0 values:(id)a1 isNegative:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)initWithProperty:(id)a0 values:(id)a1 isNegative:(char)a2;
- (id)sqlForEntity:(id)a0;

@end
