@class NSArray, NSString;

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <NSCopying> {
    char _unary;
    char _trueIfNoPredicates;
    NSString *_combinationOperation;
}

@property (readonly, nonatomic) NSArray *predicates;

+ (id)predicateMatchingAllPredicates:(id)a0;
+ (id)predicateMatchingAnyPredicates:(id)a0;
+ (id)predicateWithProperty:(id)a0 values:(id)a1 comparisonType:(long long)a2;
+ (id)negatedPredicate:(id)a0;
+ (id)predicateWithProperty:(id)a0 equalToValues:(id)a1;
+ (id)predicateWithProperty:(id)a0 notEqualToValues:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (char)isCompatibleWithPredicate:(id)a0;

@end
