@class NSArray;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) char contains;
@property (readonly, copy, nonatomic) NSArray *values;

+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)initWithProperty:(id)a0 values:(id)a1 contains:(char)a2;
- (char)isCompatibleWithPredicate:(id)a0;

@end
