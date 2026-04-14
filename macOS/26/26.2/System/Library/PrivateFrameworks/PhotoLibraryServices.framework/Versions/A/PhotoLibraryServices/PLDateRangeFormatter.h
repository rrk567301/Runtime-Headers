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

- (struct UDateIntervalFormat { } *)_monthDayIntervalFormat;
- (id)initWithPreset:(long long)a0;
- (struct UDateIntervalFormat { } *)_dayOfTheWeekIntervalFormat;
- (void)_handleUseLocalDatesDidChange;
- (id)_relativeDateFormatter;
- (id)_dayDifferentMonthsTemplate;
- (id)stringFromDate:(id)a0 toDate:(id)a1;
- (id)_dayTemplate;
- (id)_sameDayNoYearDateFormatter;
- (id)stringFromDate:(id)a0;
- (id)_sameMonthTemplate;
- (void).cxx_destruct;
- (struct UDateIntervalFormat { } *)_differentMonthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthYearIntervalFormat;
- (id)_dayOfTheWeekDateFormatter;
- (struct UDateIntervalFormat { } *)_timeIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthIntervalFormat;
- (id)stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (struct UDateIntervalFormat { } *)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat { } *)_monthDayNoYearIntervalFormat;
- (void)_currentLocaleDidChange:(id)a0;
- (void)_systemTimeZoneDidChange:(id)a0;
- (void)_significantTimeChange:(id)a0;
- (id)_yearDateFormatter;
- (id)_monthDateFormatter;
- (id)localTimeZone;
- (void)_handlePresetDidChange;
- (void)_resetFormatters;
- (id)_sameDayDateFormatter;
- (id)init;
- (struct UDateIntervalFormat { } *)_yearIntervalFormat;
- (id)_stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (id)_monthYearDateFormatter;
- (void)dealloc;

@end
