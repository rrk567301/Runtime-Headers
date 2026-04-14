@class NSMutableDictionary, NSCalendar;

@interface HKCalendarCache : NSObject {
    NSMutableDictionary *_calendarsByTimeZoneName;
    NSCalendar *_test_currentCalendar;
}

+ (id)earliestTimeZoneCalendar;
+ (id)latestTimeZoneCalendar;

- (id)calendarForTimeZone:(id)a0;
- (void).cxx_destruct;
- (void)_test_setCurrentCalendar:(id)a0;
- (id)currentCalendar;
- (id)init;

@end
