@class NSMutableDictionary, NSDateFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator {
    NSObject<OS_dispatch_queue> *_serialFormatterEditQueue;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_abbrevDayFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_standardTimeFormatter;
    NSDateFormatter *_customFormatter;
    NSDateFormatter *_fullStyleDateFormatter;
    NSDateFormatter *_dayOfWeekFormatter;
    NSMutableDictionary *_longFormatters;
}

+ (id)sharedGenerator;
+ (id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)a0 generateLowercaseString:(char)a1;
+ (id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)a0 generateLowercaseString:(char)a1;
+ (id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)a0 generateLowercaseString:(char)a1;
+ (id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)a0 generateLowercaseString:(char)a1;

- (id)init;
- (void).cxx_destruct;
- (id)timeFormatter;
- (id)dateStringForDate:(id)a0 allDay:(char)a1 standalone:(char)a2 shortFormat:(char)a3;
- (id)_customFormatter;
- (id)_dateFormatterWithLongFormat:(id)a0;
- (id)_dateStringForDate:(id)a0 relativeToReferenceDate:(id)a1 allDay:(char)a2 shortFormat:(char)a3 lowercase:(char)a4;
- (void)_initializeFormatters;
- (id)_stringForDate:(id)a0 relativeToReferenceDate:(id)a1 withLongFormatString:(id)a2 useAbbreviatedFormats:(char)a3 lowerCase:(char)a4;
- (id)_timeStringForDate:(id)a0;
- (id)abbreviatedDayFormatter;
- (id)dateStringForDate:(id)a0 allDay:(char)a1 shortFormat:(char)a2;
- (id)dateStringForDate:(id)a0 relativeToReferenceDate:(id)a1 allDay:(char)a2 standalone:(char)a3 shortFormat:(char)a4;
- (id)dayFormatter;
- (id)dayOfWeekFormatter;
- (id)formatterForLongFormat:(id)a0;
- (id)fullStyleDateFormatter;
- (id)standardTimeFormatter;
- (id)stringForDate:(id)a0 withLongFormatString:(id)a1 useAbbreviatedFormats:(char)a2 lowerCase:(char)a3;
- (id)timeStringForDate:(id)a0 inTimeZone:(id)a1;

@end
