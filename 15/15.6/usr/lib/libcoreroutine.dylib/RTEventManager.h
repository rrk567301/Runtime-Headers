@class NSString, RTInvocationDispatcher;

@interface RTEventManager : RTService <RTTransientObjectProtocol>

@property (retain, nonatomic) RTInvocationDispatcher *invocationDispatcher;
@property (retain, nonatomic) id eventStore;
@property (nonatomic) char accessToEventsGranted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchCurrentlyInEventWithHandler:(id /* block */)a0;
- (void)_fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 includeSuggestions:(char)a2 withHandler:(id /* block */)a3;
- (void)_fetchEventsBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_fetchFreeDateIntervalsBetweenStartDate:(id)a0 endDate:(id)a1 filterAllDayEvents:(char)a2 filterFreeTimeEvents:(char)a3 handler:(id /* block */)a4;
- (void)_fetchLastEventEndDateWithHandler:(id /* block */)a0;
- (void)_fetchNextFreeStartDateWithHandler:(id /* block */)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (id)calendars;
- (id)calendarsExcludingSuggested;
- (id)eventsBetweenStartDate:(id)a0 andEndDate:(id)a1;
- (id)eventsBetweenStartDate:(id)a0 andEndDate:(id)a1 calendars:(id)a2;
- (id)eventsSortedByEndDateBetweenStartDate:(id)a0 andEndDate:(id)a1;
- (id)eventsSortedByStartDateBetweenStartDate:(id)a0 andEndDate:(id)a1;
- (id)eventsSortedByStartDateBetweenStartDate:(id)a0 andEndDate:(id)a1 calendars:(id)a2;
- (void)fetchCurrentlyInEventWithHandler:(id /* block */)a0;
- (void)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 includeSuggestions:(char)a2 withHandler:(id /* block */)a3;
- (void)fetchEventsBetweenStartDate:(id)a0 andEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchEventsBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchFreeDateIntervalsBetweenStartDate:(id)a0 endDate:(id)a1 filterAllDayEvents:(char)a2 filterFreeTimeEvents:(char)a3 handler:(id /* block */)a4;
- (void)fetchLastEventEndDateWithHandler:(id /* block */)a0;
- (void)fetchNextFreeStartDateWithHandler:(id /* block */)a0;
- (id)initWithEventStore:(id)a0;
- (void)transientObjectDidCreateBackingObject:(id)a0;
- (void)transientObjectDidReleaseBackingObject:(id)a0;

@end
