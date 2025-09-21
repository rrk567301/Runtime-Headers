@class NSString;

@interface PLValueComparison : NSObject

@property (readonly) NSString *key;
@property (readonly) id value;
@property (readonly) short comparisonOperation;
@property (readonly) char hasNilComparisonComponent;
@property (readonly) char hasEqualComparisonComponent;
@property (readonly) char hasGreaterThanComparisonComponent;
@property (readonly) char hasLessThanComparisonComponent;
@property (readonly) NSString *comparisonOperationString;
@property (readonly) NSString *sqlWhereClause;

- (id)description;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 withValue:(id)a1 withComparisonOperation:(short)a2;

@end
