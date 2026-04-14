@class BMSource, NSTimer;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
    id /* block */ _shutdownHandler;
    NSTimer *_lastAliveDateTimer;
}

+ (id)entitlements;
+ (id)_eventWithState:(id)a0;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setIsBacklit:(BOOL)a0;
+ (id)eventStream;

- (void)setShutdownHandler:(id /* block */)a0;
- (void)start;
- (id)_lastAliveDate;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (id)shutdownDate;
- (void)handleShutdownNotification;
- (id)init;
- (id)checkShutdownConditionOfBacklightStream;
- (id)_shutdownDateFromSpringBoard;
- (id)bootDate;
- (id)lastBacklightEvent;
- (void)_setLastAliveDate:(id)a0;
- (void).cxx_destruct;
- (void)donateRetroactiveShutdownBacklightOffEvent;
- (void)dealloc;
- (void)deactivate;
- (id /* block */)shutdownHandler;
- (void)donateToBiome:(unsigned long long)a0 startDate:(id)a1;
- (id)_shutdownDateFromSysctl;
- (void)obtainCurrentValue;

@end
