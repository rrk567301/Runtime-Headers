@interface CNUIDate : NSObject

+ (void)initialize;
+ (id)dateByNormalizingToGMT:(id)a0;
+ (id)GMTComponentsFromDate:(id)a0 sourceCalendar:(id)a1;
+ (id)availableAlternateCalendars;
+ (id)componentsFromDate:(id)a0 sourceCalendar:(id)a1 destinationCalendar:(id)a2;
+ (id)currentCalendarGMT;
+ (id)dateFromComponents:(id)a0 destinationCalendar:(id)a1;
+ (id)gregorianCalendarGMT;
+ (BOOL)isYearlessComponents:(id)a0;
+ (void)localeDidChange:(id)a0;
+ (id)yearlessComponentsFromDate:(id)a0 calendar:(id)a1;
+ (id)yearlessGregorianComponentsFromGMTDate:(id)a0;

@end
