@class NSDate, EKEventStore;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {
    EKEventStore *_eventStore;
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (void)setDelegate:(id)a0;
- (void)_calendarEventStoreChangedWithNotification:(id)a0;
- (id)_eventStoreCreatingIfNeeded;
- (id)activeDateIntervalForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;
- (id)init;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (id)_eventStore;
- (void).cxx_destruct;
- (id)_eventForCalendarEventLifetime:(id)a0 assertionStartDate:(id)a1;

@end
