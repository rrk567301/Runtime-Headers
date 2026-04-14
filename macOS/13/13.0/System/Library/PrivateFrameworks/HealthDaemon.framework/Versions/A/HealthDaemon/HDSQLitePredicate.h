@interface HDSQLitePredicate : NSObject <NSCopying>

+ (id)truePredicate;
+ (id)falsePredicate;
+ (id)compoundPredicateWithPredicate:(id)a0 otherPredicate:(id)a1;
+ (id)disjunctionWithPredicate:(id)a0 otherPredicate:(id)a1;
+ (id)booleanPredicateWithValue:(BOOL)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
