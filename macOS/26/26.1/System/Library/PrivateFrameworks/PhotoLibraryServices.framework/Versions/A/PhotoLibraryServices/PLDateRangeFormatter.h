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

- (void)_currentLocaleDidChange:(id)a0;
- (struct UDateIntervalFormat { } *)_timeIntervalFormat;
- (id)stringFromDate:(id)a0;
- (void)_handleUseLocalDatesDidChange;
- (id)_monthDateFormatter;
- (struct UDateIntervalFormat { } *)_monthYearIntervalFormat;
- (id)_relativeDateFormatter;
- (struct UDateIntervalFormat { } *)_dayOfTheWeekIntervalFormat;
- (void)_significantTimeChange:(id)a0;
- (id)_dayTemplate;
- (void)_resetFormatters;
- (struct UDateIntervalFormat { } *)_differentMonthDayNoYearIntervalFormat;
- (id)initWithPreset:(long long)a0;
- (struct UDateIntervalFormat { } *)_monthIntervalFormat;
- (id)_monthYearDateFormatter;
- (id)stringFromDate:(id)a0 toDate:(id)a1;
- (struct UDateIntervalFormat { } *)_differentMonthDayIntervalFormat;
- (void)dealloc;
- (id)_stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (struct UDateIntervalFormat { } *)_monthDayIntervalFormat;
- (id)stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (id)_dayOfTheWeekDateFormatter;
- (void).cxx_destruct;
- (void)_handlePresetDidChange;
- (id)_dayDifferentMonthsTemplate;
- (struct UDateIntervalFormat { } *)_monthDayNoYearIntervalFormat;
- (id)_yearDateFormatter;
- (void)_systemTimeZoneDidChange:(id)a0;
- (id)localTimeZone;
- (id)_sameMonthTemplate;
- (id)_sameDayDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)init;
- (struct UDateIntervalFormat { } *)_yearIntervalFormat;

@end
