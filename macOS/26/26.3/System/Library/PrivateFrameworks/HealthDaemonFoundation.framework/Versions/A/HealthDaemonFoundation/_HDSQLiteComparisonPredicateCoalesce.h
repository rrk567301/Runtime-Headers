@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSArray *properties;

- (id)initWithProperties:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (id)description;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)SQLForEntityClass:(Class)a0;

@end
