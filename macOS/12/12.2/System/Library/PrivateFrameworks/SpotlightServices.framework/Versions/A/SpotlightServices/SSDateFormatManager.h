@class NSCalendar, CNDateComponentsFormatter, NSDateFormatter, NSDateComponents, NSDateIntervalFormatter, NSDateComponentsFormatter;

@interface SSDateFormatManager : NSObject

@property (retain) NSCalendar *calendar;
@property (retain) NSDateComponents *oneDayComponents;
@property (retain) CNDateComponentsFormatter *birthdayDateComponentsFormatter;
@property (retain) NSDateComponentsFormatter *dateComponentsFormatter;
@property (retain) NSDateFormatter *shortRelativeDateFormatter;
@property (retain) NSDateFormatter *dayOfWeekFormatter;
@property (retain) NSDateFormatter *shortDateTimeFormatter;
@property (retain) NSDateFormatter *shortTimeFormatter;
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) NSDateIntervalFormatter *shortDateTimeIntervalFormatter;
@property (retain) NSDateIntervalFormatter *mediumDayOfWeekDateTimeIntervalFormatter;
@property (retain) NSDateIntervalFormatter *shortDateIntervalFormatter;
@property (retain) NSDateIntervalFormatter *mediumDayOfWeekDateIntervalFormatter;
@property (retain) NSDateIntervalFormatter *allDayDateFormatter;
@property (retain) NSDateIntervalFormatter *dateIntervalFormatter;

+ (void)initialize;
+ (id)calendar;
+ (id)stringFromTimeInterval:(double)a0;
+ (id)dateFormatter;
+ (id)tomorrow;
+ (id)dateIntervalFormatter;
+ (id)dateLastOpenedStringFormat;
+ (id)dyanmicStringFromDate:(id)a0;
+ (id)dynamicCompactStringFromDate:(id)a0;
+ (id)stringFromDate:(id)a0 toDate:(id)a1 isAllDay:(BOOL)a2;
+ (id)shortDateTimeStringFromDate:(id)a0;
+ (id)shortDateTimeFormatter;
+ (id)dateModifiedStringFormat;
+ (id)dynamicDateTimeStringsFromDate:(id)a0;
+ (id)dateCompletedStringFormat;
+ (id)dateDueStringFormat;
+ (id)dateLastCalledStringFormat;
+ (id)dateLastPlayedStringFormat;
+ (BOOL)isDate:(id)a0 withinTimeInterval:(double)a1 includePast:(BOOL)a2;
+ (BOOL)hasRelativeFormatForDate:(id)a0;
+ (BOOL)isDateWithinWeeksTime:(id)a0;
+ (BOOL)isDateWithinMonthsTime:(id)a0;
+ (id)allDayDateFormatter;
+ (BOOL)date:(id)a0 isBetweenDate:(id)a1 andDate:(id)a2;
+ (id)stringFromBirthdayComponents:(id)a0;
+ (id)dateCreatedStringFormat;

- (id)init;
- (void).cxx_destruct;
- (void)setupFormatters;
- (void)setupFormattersWithTemplate;

@end
