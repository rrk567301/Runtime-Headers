@class BMSource, NSTimer;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
    id /* block */ _shutdownHandler;
    NSTimer *_lastAliveDateTimer;
}

+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setIsBacklit:(BOOL)a0;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (id)entitlements;
+ (id)_eventWithState:(id)a0;
+ (id)eventStream;

- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)dealloc;
- (void)stop;
- (id)_lastAliveDate;
- (id)_shutdownDateFromSpringBoard;
- (id)_shutdownDateFromSysctl;
- (id)init;
- (id)checkShutdownConditionOfBacklightStream;
- (id)bootDate;
- (void)handleShutdownNotification;
- (void)donateRetroactiveShutdownBacklightOffEvent;
- (id /* block */)shutdownHandler;
- (id)shutdownDate;
- (void)donateToBiome:(unsigned long long)a0 startDate:(id)a1;
- (void)deactivate;
- (id)lastBacklightEvent;
- (void)obtainCurrentValue;
- (void)setShutdownHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_setLastAliveDate:(id)a0;

@end
