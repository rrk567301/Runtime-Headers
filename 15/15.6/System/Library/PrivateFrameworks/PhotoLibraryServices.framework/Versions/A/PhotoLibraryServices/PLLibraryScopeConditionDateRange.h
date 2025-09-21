@class NSDate;

@interface PLLibraryScopeConditionDateRange : PLLibraryScopeCondition

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;

+ (id)conditionWithSingleQueries:(id)a0 criteria:(unsigned char)a1;
+ (char)supportsQueryKey:(int)a0;

- (id)description;
- (void).cxx_destruct;
- (unsigned char)type;
- (id)conditionQuery;

@end
