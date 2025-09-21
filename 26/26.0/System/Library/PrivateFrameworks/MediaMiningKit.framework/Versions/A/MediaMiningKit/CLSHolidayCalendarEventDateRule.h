@class NSString, NSDateComponents;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventDateRule : NSObject

@property (weak, nonatomic) id<CLSHolidayCalendarEventDateRuleDelegate> delegate;
@property (copy, nonatomic) NSDateComponents *simpleRuleComponents;
@property (nonatomic) long long startYear;
@property (nonatomic) long long startEra;
@property (nonatomic) long long endYear;
@property (nonatomic) long long endEra;
@property (nonatomic) long long offsetDays;
@property (copy, nonatomic) NSString *relativeToRuleUUID;
@property (readonly, copy, nonatomic) NSString *calendarIdentifier;
@property (readonly, copy, nonatomic) NSDateComponents *leapYearOverrideComponents;

+ (id)_dateComponentsFromRuleDescription:(id)a0;

- (id)_startDate;
- (id)description;
- (id)_endDate;
- (void).cxx_destruct;
- (BOOL)hasExplicitYear;
- (id)_estimateBestEventDateComponentsToMatchDate:(id)a0;
- (id)_stringDescriptionForDateRuleComponentValue:(long long)a0;
- (void)enumerateDatesFromStartDate:(id)a0 toEndDate:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)hasEndEra;
- (BOOL)hasEndYear;
- (BOOL)hasExplicitEra;
- (BOOL)hasStartEra;
- (BOOL)hasStartYear;
- (id)initWithEventDescription:(id)a0;
- (id)localDateByEvaluatingRuleForDate:(id)a0;
- (BOOL)matchesExplicitEra:(long long)a0;
- (BOOL)matchesExplicitYear:(long long)a0;

@end
