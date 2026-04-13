@class NSArray, NSString, NSDate, NSNumber;

@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject <EKProtocolRecurrenceRule>

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
+ (long long)convertToReminderKitFrequency:(long long)a0;
+ (long long)convertToReminderKitWeekday:(long long)a0;
+ (long long)convertFromReminderKitFrequency:(long long)a0;
+ (long long)convertFromReminderKitWeekday:(long long)a0;

- (unsigned long long)count;
- (id)uuid;
- (id)uniqueIdentifier;
- (long long)interval;
- (long long)frequency;
- (id)_recurrenceRule;
- (long long)firstDayOfTheWeek;
- (id)remObjectID;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (void)loadSpecifierDaysOfTheWeek:(id *)a0 daysOfTheMonth:(id *)a1 monthsOfTheYear:(id *)a2 weeksOfTheYear:(id *)a3 daysOfTheYear:(id *)a4 setPositions:(id *)a5;
- (long long)remWeekdayToEKWeekday:(long long)a0;
- (long long)ekWeekdayToREMWeekday:(long long)a0;
- (id)daysOfTheWeekFromREMRecurrenceRule;
- (id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)a0;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)addUpdatedRecurrenceRule:(id)a0;

@end
