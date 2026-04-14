@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSArray *properties;

- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (id)SQLForEntityClass:(Class)a0;
- (id)initWithProperties:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
