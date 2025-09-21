@interface CalDateLocalization : NSObject

+ (id)locale;
+ (id)sharedDateFormatter;
+ (id)ICUFormats;
+ (id)ICUFormatForKey:(id)a0;
+ (char)hasAMPM;
+ (struct __CFDateFormatter { } *)_dateFormatterForKey:(id)a0;
+ (id)_hourSymbolInFormat:(id)a0;
+ (id)calendarDayFormatter;
+ (struct __CFLocale { } *)createCFLocale;
+ (id)dateFormatters;
+ (char)dateIsWeekend:(id)a0;
+ (id)dateStringRepresentationForEventCompontentsStartDate:(id)a0 endDate:(id)a1 allDay:(char)a2 timeZone:(id)a3;
+ (id)dateStringRepresentationForReminderStartDate:(id)a0 allDay:(char)a1;
+ (id)formatKeyForHourString;
+ (void)generateAdditionalPrecodedFormatters:(id)a0;
+ (void)generateDerivedTimeFormats:(id)a0;
+ (void)generateLocalizedDateTimeFormats;
+ (void)generatePreferedOrders;
+ (void)generateStandardFormatters:(id)a0;
+ (void)initializeFormatters;
+ (id)longStringForDateAndTime:(id)a0 inTimeZone:(id)a1;
+ (void)rebuildFormatters;
+ (void)rebuildWeekendDays;
+ (char)requiresSingularLocalizationForDate:(id)a0;
+ (void)setupFormat:(id)a0 forKey:(id)a1 locale:(id)a2 standalone:(char)a3;
+ (void)setupFormatTemplate:(id)a0 forKey:(id)a1 locale:(id)a2;
+ (void)setupFormatTemplate:(id)a0 forKey:(id)a1 locale:(id)a2 standalone:(char)a3;
+ (void)setupFormatter:(struct __CFDateFormatter { } *)a0 forKey:(id)a1;
+ (char)shouldUseHourMinutesWithoutAMPMForHours;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)sizeOrderedDateFormats;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (id)timelineHourDateFormatter;
+ (char)uses24HourTime;
+ (char)weekdayIsWeekend:(long long)a0;
+ (id)weekendDays;

@end
