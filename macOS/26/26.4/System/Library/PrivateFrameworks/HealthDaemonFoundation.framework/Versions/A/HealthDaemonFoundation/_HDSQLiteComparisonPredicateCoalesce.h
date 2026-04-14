@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSArray *properties;

- (id)SQLForEntityClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (unsigned long long)hash;
- (id)description;

@end
