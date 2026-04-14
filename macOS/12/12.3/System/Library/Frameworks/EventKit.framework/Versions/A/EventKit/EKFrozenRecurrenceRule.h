@class NSArray, NSString, NSDate, NSNumber;

@interface EKFrozenRecurrenceRule : EKFrozenObject <EKProtocolRecurrenceRule>

@property BOOL allDay;
@property BOOL floating;
@property (readonly, copy, nonatomic) NSNumber *countNumber;
@property (readonly, copy, nonatomic) NSArray *daysOfTheMonth;
@property (readonly, copy, nonatomic) NSArray *daysOfTheWeek;
@property (readonly, copy, nonatomic) NSArray *daysOfTheYear;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSNumber *firstDayOfTheWeekNumber;
@property (readonly, copy, nonatomic) NSNumber *frequencyNumber;
@property (readonly, copy, nonatomic) NSNumber *intervalNumber;
@property (readonly, copy, nonatomic) NSArray *monthsOfTheYear;
@property (readonly, copy, nonatomic) NSArray *setPositions;
@property (readonly, copy, nonatomic) NSArray *weeksOfTheYear;
@property (readonly, nonatomic) BOOL ruleIsForAllDayItem;
@property (readonly, nonatomic) BOOL ruleIsForFloatingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)meltedClass;
+ (id)ruleWithRule:(id)a0 allDay:(BOOL)a1 floating:(BOOL)a2;
+ (Class)alternateUniverseClass;
+ (long long)ekFrequencyFromICSFrequency:(unsigned long long)a0;
+ (int)intervalFromICSDate:(id)a0 inTimezone:(id)a1;
+ (long long)_ekWeekdayFromICSWeekday:(long long)a0;

- (void).cxx_destruct;
- (id)meltedObjectInStore:(id)a0;
- (id)initWithRuleString:(id)a0 allDay:(BOOL)a1 floating:(BOOL)a2;

@end
