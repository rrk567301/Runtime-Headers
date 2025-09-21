@protocol NSObject;

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id<NSObject> ifPropertyIsNullValue;

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)SQLForEntityClass:(Class)a0;
- (id)initWithProperty:(id)a0 ifPropertyIsNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
