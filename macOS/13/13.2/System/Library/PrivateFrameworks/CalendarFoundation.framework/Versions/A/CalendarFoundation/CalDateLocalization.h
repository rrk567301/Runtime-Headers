@interface CalDateLocalization : NSObject

+ (id)sharedDateFormatter;
+ (void)initializeFormatters;
+ (void)rebuildFormatters;
+ (void)rebuildWeekendDays;
+ (id)calendarDayFormatter;
+ (id)dateFormatterForKey:(id)a0 formatString:(id)a1;
+ (id)weekendDays;
+ (BOOL)dateIsWeekend:(id)a0;
+ (BOOL)weekdayIsWeekend:(long long)a0;
+ (BOOL)hasAMPM;
+ (BOOL)uses24HourTime;
+ (BOOL)shouldUseHourMinutesWithoutAMPMForHours;
+ (id)formatKeyForHourString;
+ (void)setupFormatter:(struct __CFDateFormatter { } *)a0 forKey:(id)a1;
+ (void)setupFormat:(id)a0 forKey:(id)a1 locale:(id)a2;
+ (void)setupFormatTemplate:(id)a0 forKey:(id)a1 locale:(id)a2;
+ (void)generateStandardFormatters:(id)a0;
+ (void)generateAdditionalPrecodedFormatters:(id)a0;
+ (id)_hourSymbolInFormat:(id)a0;
+ (void)generateDerivedTimeFormats:(id)a0;
+ (void)generateLocalizedDateTimeFormats;
+ (void)generatePreferedOrders;
+ (id)sizeOrderedDateFormats;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)ICUFormats;
+ (id)dateFormatters;
+ (id)ICUFormatForKey:(id)a0;
+ (struct __CFDateFormatter { } *)dateFormatterForKey:(id)a0;
+ (id)longStringForDateAndTime:(id)a0 inTimeZone:(id)a1;
+ (id)dateStringRepresentationForEventCompontentsStartDate:(id)a0 endDate:(id)a1 allDay:(BOOL)a2 timeZone:(id)a3;

@end
