@class NSArray;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) BOOL contains;
@property (readonly, copy, nonatomic) NSArray *values;

+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)description;
- (id)initWithProperty:(id)a0 values:(id)a1 contains:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)SQLForEntityClass:(Class)a0;

@end
