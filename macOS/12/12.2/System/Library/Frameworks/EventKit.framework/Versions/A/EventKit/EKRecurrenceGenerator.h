@interface EKRecurrenceGenerator : NSObject

+ (id)nextOccurrenceDateForRecurrenceRuleString:(id)a0 afterDate:(id)a1 recurrenceStartDate:(id)a2 timezone:(id)a3 occurrenceCount:(long long *)a4;
+ (id)datesByExpandingRule:(id)a0 fromDate:(id)a1 toDate:(id)a2 recurrenceStartDate:(id)a3 inTimezone:(id)a4 isAllDay:(BOOL)a5 duration:(long long)a6 lunarCalendarString:(id)a7;
+ (id)datesByExpandingRule:(id)a0 fromDate:(id)a1 toDate:(id)a2 inTimezone:(id)a3 isAllDay:(BOOL)a4 lunarCalendarString:(id)a5;
+ (id)nextNDates:(long long)a0 forRecurrenceRuleString:(id)a1 recurrenceStart:(id)a2 timeZone:(id)a3 inCalendar:(id)a4 isAllDay:(BOOL)a5;
+ (id)nextOccurrenceDateForRecurrenceRuleString:(id)a0 afterDate:(id)a1 recurrenceStartDate:(id)a2 timezone:(id)a3 inCalendar:(id)a4 occurrenceCount:(long long *)a5;
+ (id)nextNDatesInUTC:(long long)a0 forRecurrenceRuleString:(id)a1 recurrenceStart:(id)a2 isAllDay:(BOOL)a3;

@end
