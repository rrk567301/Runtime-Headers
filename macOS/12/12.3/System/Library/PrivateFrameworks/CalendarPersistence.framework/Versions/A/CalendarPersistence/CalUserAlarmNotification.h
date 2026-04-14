@class NSString, CalManagedAlarm, NSDate, NSUserNotification;

@interface CalUserAlarmNotification : NSObject <CalUserNotification> {
    CalManagedAlarm *_alarm;
    NSDate *_date;
    BOOL _isForLocation;
    NSUserNotification *_notification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mailtoStringForEvent:(id)a0;
+ (void)travelTimeEventInformativeTextAtDate:(id)a0 eventStart:(id)a1 transportType:(int)a2 notification:(id)a3 trafficDensityString:(id)a4 estimatedTravelTime:(double)a5;
+ (id)_dateTimeStringForEventDate:(id)a0 alwaysIncludeDate:(BOOL)a1 allDayEvent:(BOOL)a2;
+ (id)timeToLeaveStringWithEta:(double)a0 transportType:(int)a1 runningLate:(BOOL)a2;
+ (id)_etaString:(double)a0;
+ (id)_travelTimeRunningLateTransitStringWithEta:(id)a0 location:(id)a1;
+ (id)_travelTimeOnTimeTransitStringWithEta:(id)a0;
+ (id)_travelTimeWalkingStringWithEta:(id)a0 location:(id)a1;
+ (id)_travelTimeOnTimeWalkingStringWithEta:(id)a0;
+ (id)_travelTimeDrivingSubstringWithEta:(id)a0 location:(id)a1 includeTransportType:(BOOL)a2;
+ (id)_travelTimeOnTimeDrivingStringWithEta:(id)a0;
+ (id)_allDayFormatter;
+ (id)_dateTimeFormatter;

- (void).cxx_destruct;
- (id)notification;
- (id)_eventStartDate;
- (id)_eventEndDate;
- (id)initWithAlarm:(id)a0 triggerDate:(id)a1 isForLocation:(BOOL)a2;
- (BOOL)_isReminderAlarm:(id)a0;
- (id)_snoozeNotificationMenuActions;
- (id)_availableSnoozeActions;
- (id)nextSnoozeExpiration;
- (id)initWithAlarm:(id)a0 triggerDate:(id)a1;

@end
