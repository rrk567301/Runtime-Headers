@class NSArray, NSCalendar, NSDate;

@interface KHCalendarOptionsModel : NSObject

@property (retain, nonatomic) NSCalendar *baseCalendar;
@property (nonatomic) unsigned long long startMonthIndex;
@property (nonatomic) unsigned long long startCalendarYear;
@property (nonatomic) unsigned long long numberOfMonths;
@property (retain, nonatomic) NSArray *showCalendars;
@property (nonatomic) BOOL showBirthdaysFromContacts;
@property (readonly, nonatomic) NSDate *calendarStartDate;
@property (readonly, nonatomic) NSArray *possibleCountriesToShowHolidaysFor;
@property (readonly, nonatomic) NSArray *calendarsToShow;
@property (readonly, nonatomic) unsigned long long maximumStartCalendarYear;
@property (readonly, nonatomic) unsigned long long minimumStartCalendarYear;
@property (readonly, nonatomic) unsigned long long maximumNumberOfMonths;
@property (readonly, nonatomic) unsigned long long minimumNumberOfMonths;

+ (id)countriesWithNationalHolidays;
+ (id)defaultOptionsModel;

- (void)resetToDefaults;
- (id)description;
- (id)dictionary;
- (void).cxx_destruct;

@end
