@class NSMutableDictionary, NSCalendar;

@interface HKCalendarCache : NSObject {
    NSMutableDictionary *_calendarsByTimeZoneName;
    NSCalendar *_test_currentCalendar;
}

+ (id)earliestTimeZoneCalendar;
+ (id)latestTimeZoneCalendar;

- (id)init;
- (void).cxx_destruct;
- (id)currentCalendar;
- (id)calendarForTimeZone:(id)a0;
- (void)_test_setCurrentCalendar:(id)a0;

@end
