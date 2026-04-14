@class NSDate, EKEventStore;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore *_eventStore;
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (id)init;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_eventStore;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (void)_calendarEventStoreChangedWithNotification:(id)a0;
- (id)_eventForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;
- (id)activeDateIntervalForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;
- (id)_eventStoreCreatingIfNeeded;

@end
