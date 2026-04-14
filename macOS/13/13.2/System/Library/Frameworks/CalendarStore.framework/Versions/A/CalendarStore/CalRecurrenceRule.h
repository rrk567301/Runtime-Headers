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

+ (id)iCalendarValueFromRecurrenceType:(int)a0;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)a0;
+ (id)iCalendarValueFromDate:(id)a0 isDateOnly:(BOOL)a1 isFloating:(BOOL)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEKRecurrenceRule:(id)a0;
- (id)initDailyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initWeeklyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initWeeklyRecurrenceWithInterval:(unsigned long long)a0 forDaysOfTheWeek:(id)a1 end:(id)a2;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 forDaysOfTheMonth:(id)a1 end:(id)a2;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)a0 forDayOfTheWeek:(unsigned long long)a1 forWeekOfTheMonth:(long long)a2 end:(id)a3;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 end:(id)a1;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 forMonthsOfTheYear:(id)a1 end:(id)a2;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)a0 forDayOfTheWeek:(unsigned long long)a1 forWeekOfTheMonth:(long long)a2 forMonthsOfTheYear:(id)a3 end:(id)a4;
- (id)stringValueAsDateOnly:(BOOL)a0 isFloating:(BOOL)a1;

@end
