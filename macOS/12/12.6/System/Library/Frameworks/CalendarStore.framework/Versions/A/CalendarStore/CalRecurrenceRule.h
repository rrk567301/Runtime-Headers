@class CalRecurrenceEnd, NSArray;

@interface CalRecurrenceRule : NSObject <NSCopying> {
    id _objectID;
    void *_reserved;
}

@property (readonly) CalRecurrenceEnd *recurrenceEnd;
@property (readonly) int recurrenceType;
@property (readonly) unsigned long long recurrenceInterval;
@property (readonly) unsigned long long firstDayOfTheWeek;
@property (readonly) NSArray *daysOfTheWeek;
@property (readonly) NSArray *daysOfTheMonth;
@property (readonly) NSArray *nthWeekDaysOfTheMonth;
@property (readonly) NSArray *monthsOfTheYear;

+ (id)recurrenceRuleWithString:(id)a0;
+ (id)iCalendarValueFromRecurrenceType:(int)a0;
+ (id)iCalendarValueFromDate:(id)a0 isDateOnly:(BOOL)a1 isFloating:(BOOL)a2;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)stringValueAsDateOnly:(BOOL)a0 isFloating:(BOOL)a1;
- (id)initRecurrenceWithType:(int)a0 interval:(unsigned long long)a1 forDaysOfTheWeek:(id)a2 forDaysOfTheMonth:(id)a3 forNthWeekDaysOfTheMonth:(id)a4 forMonthsOfTheYear:(id)a5 end:(id)a6;
- (id)initDailyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initWeeklyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initWeeklyRecurrenceWithInterval:(unsigned long long)a0 forDaysOfTheWeek:(id)a1 end:(id)a2;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 forDaysOfTheMonth:(id)a1 end:(id)a2;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 forDayOfTheWeek:(unsigned long long)a1 forWeekOfTheMonth:(long long)a2 end:(id)a3;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 forMonthsOfTheYear:(id)a1 end:(id)a2;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 forDayOfTheWeek:(unsigned long long)a1 forWeekOfTheMonth:(long long)a2 forMonthsOfTheYear:(id)a3 end:(id)a4;

@end
