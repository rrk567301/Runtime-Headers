@interface EKEventCounterEngine : EKNotificationEngine

- (void)_performAction;
- (id)initWithEventStore:(id)a0 actionQueue:(id)a1 timerQueue:(id)a2 notificationDelegate:(id)a3;
- (void)_scheduleTimerForNextEventCounter;
- (id)_eventsFrom:(id)a0 to:(id)a1;

@end
