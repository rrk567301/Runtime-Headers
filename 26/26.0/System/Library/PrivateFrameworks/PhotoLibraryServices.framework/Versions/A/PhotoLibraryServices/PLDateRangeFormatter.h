@class NSTimeZone, NSDateFormatter, NSLocale;

@interface PLDateRangeFormatter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _preset;
    NSLocale *_locale;
    BOOL _useLocalDates;
    NSTimeZone *_timeZone;
    BOOL _allowUseTime;
    BOOL _allowUseRelativeDayFormatting;
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
    BOOL _monthWithYear;
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
@property (nonatomic) BOOL allowUseTime;
@property (nonatomic) BOOL allowUseRelativeDayFormatting;

+ (id)autoupdatingFormatterWithPreset:(long long)a0;

- (struct UDateIntervalFormat { } *)_differentMonthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthYearIntervalFormat;
- (id)stringFromDate:(id)a0 toDate:(id)a1;
- (id)stringFromDate:(id)a0;
- (void)_handlePresetDidChange;
- (void)_significantTimeChange:(id)a0;
- (void)dealloc;
- (id)_sameMonthTemplate;
- (id)_monthYearDateFormatter;
- (id)_dayOfTheWeekDateFormatter;
- (struct UDateIntervalFormat { } *)_differentMonthDayIntervalFormat;
- (id)_monthDateFormatter;
- (id)init;
- (id)_dayDifferentMonthsTemplate;
- (struct UDateIntervalFormat { } *)_dayOfTheWeekIntervalFormat;
- (id)localTimeZone;
- (id)initWithPreset:(long long)a0;
- (id)_sameDayDateFormatter;
- (id)stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (struct UDateIntervalFormat { } *)_monthDayNoYearIntervalFormat;
- (void)_currentLocaleDidChange:(id)a0;
- (struct UDateIntervalFormat { } *)_monthIntervalFormat;
- (id)_stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (id)_dayTemplate;
- (struct UDateIntervalFormat { } *)_timeIntervalFormat;
- (void)_systemTimeZoneDidChange:(id)a0;
- (struct UDateIntervalFormat { } *)_yearIntervalFormat;
- (id)_yearDateFormatter;
- (void)_handleUseLocalDatesDidChange;
- (void)_resetFormatters;
- (struct UDateIntervalFormat { } *)_monthDayIntervalFormat;
- (void).cxx_destruct;
- (id)_sameDayNoYearDateFormatter;
- (id)_relativeDateFormatter;

@end
