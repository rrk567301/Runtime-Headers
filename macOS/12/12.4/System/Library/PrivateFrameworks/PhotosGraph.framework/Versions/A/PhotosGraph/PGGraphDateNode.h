@class PGGraphCalendarUnitNode, NSString, MARelation, PGGraphSeasonNode, PGGraphDateNodeCollection, MANodeFilter;

@interface PGGraphDateNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode>

@property (class, readonly) MARelation *seasonOfDate;
@property (class, readonly) MARelation *yearOfDate;
@property (class, readonly) MARelation *monthDayOfDate;
@property (class, readonly) MARelation *momentOfDate;

@property (readonly) NSString *name;
@property (readonly) PGGraphCalendarUnitNode *dayNode;
@property (readonly) PGGraphCalendarUnitNode *monthNode;
@property (readonly) PGGraphCalendarUnitNode *monthDayNode;
@property (readonly) PGGraphCalendarUnitNode *yearNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfYearNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfMonthNode;
@property (readonly, nonatomic) PGGraphSeasonNode *seasonNode;
@property (readonly) long long day;
@property (readonly) long long month;
@property (readonly) long long monthDay;
@property (readonly) long long year;
@property (readonly) PGGraphDateNodeCollection *collection;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (id)dateNodeForDayNode:(id)a0 monthNode:(id)a1 yearNode:(id)a2;
+ (id)filterWithDateNames:(id)a0;
+ (id)monthOfDate;
+ (id)dayOfDate;
+ (id)weekOfYearOfDate;
+ (id)weekOfMonthOfDate;
+ (id)holidayOfDate;

- (id)description;
- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyDictionary;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)localDate;
- (void)enumerateHolidayNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHolidayEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)associatedNodesForRemoval;
- (id)sameWeekDateNodes;
- (id)lastWeekDateNodes;

@end
