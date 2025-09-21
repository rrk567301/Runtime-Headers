@class CalRecurrenceEnd, NSArray, EKRecurrenceRule;

@interface CalRecurrenceRule : NSObject <NSCopying>

@property (retain, nonatomic) EKRecurrenceRule *ekRecurrenceRule;
@property (readonly) CalRecurrenceEnd *recurrenceEnd;
@property (readonly) int recurrenceType;
@property (readonly) unsigned long long recurrenceInterval;
@property (readonly) unsigned long long firstDayOfTheWeek;
@property (readonly) NSArray *daysOfTheWeek;
@property (readonly) NSArray *daysOfTheMonth;
@property (readonly) NSArray *nthWeekDaysOfTheMonth;
@property (readonly) NSArray *monthsOfTheYear;

+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)a0;
+ (id)iCalendarValueFromDate:(id)a0 isDateOnly:(char)a1 isFloating:(char)a2;
+ (id)iCalendarValueFromRecurrenceType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initDailyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 forDayOfTheWeek:(unsigned long long)a1 forWeekOfTheMonth:(long long)a2 end:(id)a3;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 forDaysOfTheMonth:(id)a1 end:(id)a2;
- (id)initWeeklyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initWeeklyRecurrenceWithInterval:(unsigned long long)a0 forDaysOfTheWeek:(id)a1 end:(id)a2;
- (id)initWithEKRecurrenceRule:(id)a0;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 forDayOfTheWeek:(unsigned long long)a1 forWeekOfTheMonth:(long long)a2 forMonthsOfTheYear:(id)a3 end:(id)a4;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 forMonthsOfTheYear:(id)a1 end:(id)a2;
- (id)stringValueAsDateOnly:(char)a0 isFloating:(char)a1;

@end
