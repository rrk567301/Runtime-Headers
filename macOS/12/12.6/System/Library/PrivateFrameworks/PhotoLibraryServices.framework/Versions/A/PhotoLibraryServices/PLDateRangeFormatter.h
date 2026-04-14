@class NSTimeZone, NSDateFormatter, NSLocale;

@interface PLDateRangeFormatter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _preset;
    NSLocale *_locale;
    BOOL _useLocalDates;
    NSTimeZone *_timeZone;
    BOOL _includeDayNumbers;
    BOOL _includeDayNumbersWhenMonthsDiffer;
    BOOL _useRelativeDayFormatting;
    BOOL _useShortMonths;
    BOOL _useShortDaysInRanges;
    BOOL _useTime;
    BOOL _yearOnly;
    BOOL _monthOnly;
    BOOL _timeOnly;
    BOOL _omitYear;
    BOOL _monthWithDelimiterAndYear;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_sameDayNoYearDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSDateFormatter *_yearDateFormatter;
    NSDateFormatter *_monthDateFormatter;
    NSDateFormatter *_monthYearDateFormatter;
    NSDateFormatter *_relativeDateFormatter;
    struct UDateIntervalFormat { } *_monthDayIntervalFormat;
    struct UDateIntervalFormat { } *_monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } *_differentMonthDayIntervalFormat;
    struct UDateIntervalFormat { } *_differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } *_dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat { } *_timeIntervalFormat;
    struct UDateIntervalFormat { } *_monthIntervalFormat;
    struct UDateIntervalFormat { } *_monthYearIntervalFormat;
    struct UDateIntervalFormat { } *_yearIntervalFormat;
}

@property (nonatomic) long long preset;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL useLocalDates;

+ (id)autoupdatingFormatterWithPreset:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)localTimeZone;
- (id)stringFromDate:(id)a0;
- (id)stringFromDate:(id)a0 toDate:(id)a1;
- (void)_resetFormatters;
- (id)_relativeDateFormatter;
- (id)initWithPreset:(long long)a0;
- (void)_currentLocaleDidChange:(id)a0;
- (void)_handlePresetDidChange;
- (void)_handleUseLocalDatesDidChange;
- (void)_systemTimeZoneDidChange:(id)a0;
- (void)_significantTimeChange:(id)a0;
- (id)_sameMonthTemplate;
- (id)_dayTemplate;
- (id)_dayDifferentMonthsTemplate;
- (struct UDateIntervalFormat { } *)_dayOfTheWeekIntervalFormat;
- (struct UDateIntervalFormat { } *)_yearIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthYearIntervalFormat;
- (struct UDateIntervalFormat { } *)_differentMonthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat { } *)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthDayIntervalFormat;
- (id)_yearDateFormatter;
- (id)_monthDateFormatter;
- (id)_monthYearDateFormatter;
- (struct UDateIntervalFormat { } *)_timeIntervalFormat;
- (id)_dayOfTheWeekDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)_sameDayDateFormatter;
- (id)_stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (id)stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;

@end
