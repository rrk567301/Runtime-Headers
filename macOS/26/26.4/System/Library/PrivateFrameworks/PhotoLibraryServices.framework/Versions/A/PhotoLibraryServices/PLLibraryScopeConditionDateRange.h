@class NSDate;

@interface PLLibraryScopeConditionDateRange : PLLibraryScopeCondition

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;

+ (id)conditionWithSingleQueries:(id)a0 criteria:(unsigned char)a1;
+ (BOOL)supportsQueryKey:(int)a0;

- (void).cxx_destruct;
- (unsigned char)type;
- (id)description;
- (id)conditionQuery;

@end
