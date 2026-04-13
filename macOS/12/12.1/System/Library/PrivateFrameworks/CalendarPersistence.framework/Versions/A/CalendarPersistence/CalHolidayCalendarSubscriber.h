@class CalCalDAVTaskManager;

@interface CalHolidayCalendarSubscriber : NSObject {
    CalCalDAVTaskManager *_calDAVTaskManager;
}

+ (id)defaultSubscriber;

- (void)dealloc;
- (void).cxx_destruct;
- (id)backupCalendarSymbolicColor;
- (BOOL)_alreadySubscribedToLocalHolidayCalendar;
- (BOOL)_alreadySubscribedToCalendarWithLanguageCode:(id)a0 withLocationCode:(id)a1 orURL:(id)a2;
- (void)_subscribeToHolidayCalendar:(id)a0 withAccount:(id)a1 locationCode:(id)a2 languageCode:(id)a3;
- (void)subscribeToHolidayCalendar;
- (void)disableHolidayCalendars;

@end
