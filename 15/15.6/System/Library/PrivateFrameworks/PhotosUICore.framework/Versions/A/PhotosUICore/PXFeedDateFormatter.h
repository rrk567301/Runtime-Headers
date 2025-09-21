@class NSCalendar, NSString, NSDateFormatter, NSDate, NSLocale;

@interface PXFeedDateFormatter : NSObject {
    char _prepared;
    NSLocale *_locale;
    char _ignoreWhitelist;
    NSCalendar *_calendar;
    NSDate *_today;
    NSDate *_yesterday;
    NSString *_todayString;
    NSString *_yesterdayString;
    NSDateFormatter *_dateFormatterForCurrentYear;
    NSDateFormatter *_dateFormatterForNoncurrentYears;
}

+ (id)defaultFeedSectionDateFormatter;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isDateInToday:(id)a0;
- (id)stringFromDate:(id)a0;
- (void)_invalidate;
- (void)_prepare;
- (id)initWithLocale:(id)a0 ignoreWhitelist:(char)a1;
- (char)isDateInFuture:(id)a0;
- (void)_calendarDayChanged:(id)a0;
- (char)_canSubstitueDateStringsWithLocale:(id)a0;
- (id)_completeRelativeStringForDate:(id)a0 dateFormatter:(id)a1;
- (void)_currentLocaleChanged:(id)a0;

@end
