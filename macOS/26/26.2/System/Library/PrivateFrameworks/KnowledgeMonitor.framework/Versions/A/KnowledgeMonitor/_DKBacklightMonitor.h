@class BMSource, NSTimer;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
    id /* block */ _shutdownHandler;
    NSTimer *_lastAliveDateTimer;
}

+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setIsBacklit:(BOOL)a0;
+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;

- (void)synchronouslyReflectCurrentValue;
- (id)bootDate;
- (id)shutdownDate;
- (void)setShutdownHandler:(id /* block */)a0;
- (void)donateRetroactiveShutdownBacklightOffEvent;
- (id)_shutdownDateFromSpringBoard;
- (void)stop;
- (void)donateToBiome:(unsigned long long)a0 startDate:(id)a1;
- (void).cxx_destruct;
- (id /* block */)shutdownHandler;
- (void)start;
- (id)lastBacklightEvent;
- (id)init;
- (void)handleShutdownNotification;
- (id)checkShutdownConditionOfBacklightStream;
- (void)deactivate;
- (id)_lastAliveDate;
- (id)_shutdownDateFromSysctl;
- (void)_setLastAliveDate:(id)a0;
- (void)dealloc;
- (void)obtainCurrentValue;

@end
