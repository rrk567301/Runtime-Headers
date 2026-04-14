@class NSArray;

@interface PPSSQLiteContainsPredicate : PPSSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) BOOL isNegative;
@property (readonly, copy, nonatomic) NSArray *values;

+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)_arrayFromValues:(id)a0;
+ (id)_containsPredicateWithProperty:(id)a0 values:(id)a1 isNegative:(BOOL)a2;

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithProperty:(id)a0 values:(id)a1 isNegative:(BOOL)a2;
- (id)sqlForEntity:(id)a0;

@end
