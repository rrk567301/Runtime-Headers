@class NSDateComponentsFormatter, NSDateFormatter, NSNumberFormatter;

@interface BSDateFormatterCache : NSObject {
    NSDateFormatter *_dayOfWeekFormatter;
    NSDateFormatter *_dayOfWeekWithTimeFormatter;
    NSDateFormatter *_dayMonthYearFormatter;
    NSDateFormatter *_shortDayMonthFormatter;
    NSDateFormatter *_shortDayMonthTimeFormatter;
    NSDateFormatter *_abbrevDayOfWeekWithMonthDayFormatter;
    NSDateFormatter *_abbrevDayMonthFormatter;
    NSDateFormatter *_abbrevDayMonthTimeFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_relativeDateTimeFormatter;
    NSDateFormatter *_relativeDateFormatter;
    NSDateFormatter *_dayOfWeekMonthDayFormatter;
    NSDateFormatter *_multiLineDayOfWeekMonthDayFormatter;
    NSDateFormatter *_timeNoAMPMFormatter;
    NSDateFormatter *_longYMDHMSZFormatter;
    NSDateFormatter *_longYMDHMSZPosixLocaleFormatter;
    NSDateFormatter *_longYMDHMSNoSpaceFormatter;
    NSNumberFormatter *_decimalFormatter;
    NSDateComponentsFormatter *_durationFormatter;
    NSNumberFormatter *_timerNumberFormatter;
    NSDateComponentsFormatter *_abbreviatedTimerFormatter;
    NSDateComponentsFormatter *_alarmSnoozeFormatter;
}

+ (id)sharedInstance;
+ (id)formatterForDateAsTimeNoAMPMWithLocale:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)formatDateAsLongYMDHMSZWithDate:(id)a0;
- (void)_resetFormatters;
- (void)resetFormatters:(id)a0;
- (void)resetFormattersIfNecessary;
- (id)formatNumberAsDecimal:(id)a0;
- (id)formatDateAsDayOfWeek:(id)a0;
- (id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)a0;
- (id)formatDateAsDayMonthYearStyle:(id)a0;
- (id)formatDateAsShortDayMonthWithTimeStyle:(id)a0;
- (id)formatDateAsAbbreviatedDayOfWeekMonthDayStyle:(id)a0;
- (id)formatDateAsAbbreviatedDayMonthStyle:(id)a0;
- (id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)a0;
- (id)formatDateAsTimeStyle:(id)a0;
- (id)formatDateAsRelativeDateAndTimeStyle:(id)a0;
- (id)formatDateAsDayOfWeekMonthDayStyle:(id)a0;
- (id)formatDateAsMultiLineDayOfWeekMonthDayStyle:(id)a0;
- (id)formatDateAsTimeNoAMPM:(id)a0;
- (id)formatDateAsLongYMDHMSZPosixLocaleWithDate:(id)a0;
- (id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)a0;
- (id)formatDateAsRelativeDateStyle:(id)a0;
- (id)formatDuration:(double)a0;
- (id)formatTimerDuration:(double)a0;
- (id)formatAbbreviatedTimerDuration:(double)a0;
- (id)formatAlarmSnoozeDuration:(double)a0;
- (BOOL)supportsMultiLineDayOfWeekMonthDayStyle;

@end
