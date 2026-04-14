@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSArray *properties;

- (BOOL)isCompatibleWithPredicate:(id)a0;
- (id)initWithProperties:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (id)description;

@end
