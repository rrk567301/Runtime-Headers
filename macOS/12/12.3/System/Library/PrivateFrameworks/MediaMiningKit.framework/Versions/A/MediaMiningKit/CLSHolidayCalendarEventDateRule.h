@class NSString, NSDateComponents;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventDateRule : NSObject

@property (weak, nonatomic) id<CLSHolidayCalendarEventDateRuleDelegate> delegate;
@property (copy, nonatomic) NSDateComponents *simpleRuleComponents;
@property (nonatomic) long long startYear;
@property (nonatomic) long long endYear;
@property (nonatomic) long long offsetDays;
@property (copy, nonatomic) NSString *relativeToRuleUUID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEventDescription:(id)a0;
- (id)localDateByEvaluatingRuleForYear:(long long)a0;
- (BOOL)hasExplicitYear;
- (BOOL)matchesExplicitYear:(long long)a0;
- (BOOL)hasStartYear;
- (BOOL)hasEndYear;
- (id)_stringDescriptionForDateRuleComponentValue:(long long)a0;

@end
