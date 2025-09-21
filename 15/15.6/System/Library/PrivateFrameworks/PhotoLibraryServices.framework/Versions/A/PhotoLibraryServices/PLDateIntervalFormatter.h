@class NSLocale, NSCalendar, NSDateIntervalFormatter;

@interface PLDateIntervalFormatter : NSObject

@property (readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;
@property (readonly, nonatomic) NSCalendar *gmtCalendar;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) char alwaysShowYear;

+ (id)_currentLocalDate;
+ (id)_dateFormatForDateFormatterType:(unsigned long long)a0 displayYear:(char)a1 displayLongMonth:(char)a2;
+ (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2;
+ (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 showLongMonthFormatIfNeeded:(char)a3;

- (id)init;
- (void).cxx_destruct;
- (char)_yearIsNeededForDisplayingDate:(id)a0;
- (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2;
- (id)stringFromStartDate:(id)a0 endDate:(id)a1 type:(unsigned long long)a2 showLongMonthFormatIfNeeded:(char)a3;

@end
