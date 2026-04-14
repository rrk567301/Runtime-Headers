@interface EXSRecurrenceProperties : NSObject

+ (id)monthsOfTheYearFromProperties:(id)a0;
+ (void)monthsOfTheYear:(id)a0 toProperties:(id)a1;
+ (void)dateComponentsDayAndMonth:(id)a0 toProperties:(id)a1;
+ (id)daysOfTheMonthFromProperties:(id)a0;
+ (void)daysOfTheMonth:(id)a0 toProperties:(id)a1;
+ (void)dateComponentsDayOfTheMonth:(id)a0 toProperties:(id)a1;
+ (id)daysOfTheWeekFromPropertiesWithREM:(id)a0;
+ (void)REMdaysOfTheWeek:(id)a0 toProperties:(id)a1;
+ (void)dateComponentsDayOfTheWeek:(id)a0 toProperties:(id)a1;
+ (long long)firstDayOfTheWeekFromProperties:(id)a0;
+ (void)firstDayOfTheWeek:(long long)a0 toProperties:(id)a1;

@end
