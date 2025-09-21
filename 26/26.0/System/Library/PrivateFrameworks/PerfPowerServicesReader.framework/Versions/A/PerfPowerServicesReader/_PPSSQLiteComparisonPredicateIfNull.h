@interface _PPSSQLiteComparisonPredicateIfNull : PPSSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id ifPropertyIsNullValue;

- (id)initWithProperty:(id)a0 ifPropertyIsNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)sqlForEntity:(id)a0;

@end
