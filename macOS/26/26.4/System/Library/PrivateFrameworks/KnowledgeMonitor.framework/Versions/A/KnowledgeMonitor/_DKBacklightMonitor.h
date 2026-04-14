@class BMSource, NSTimer;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
    id /* block */ _shutdownHandler;
    NSTimer *_lastAliveDateTimer;
}

+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)_eventWithState:(id)a0;
+ (id)entitlements;
+ (void)setIsBacklit:(BOOL)a0;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (id)_shutdownDateFromSysctl;
- (void)donateToBiome:(unsigned long long)a0 startDate:(id)a1;
- (void)setShutdownHandler:(id /* block */)a0;
- (id)shutdownDate;
- (void)deactivate;
- (id)_lastAliveDate;
- (void)handleShutdownNotification;
- (void)obtainCurrentValue;
- (void).cxx_destruct;
- (id /* block */)shutdownHandler;
- (id)bootDate;
- (id)init;
- (void)_setLastAliveDate:(id)a0;
- (id)_shutdownDateFromSpringBoard;
- (id)lastBacklightEvent;
- (void)start;
- (void)donateRetroactiveShutdownBacklightOffEvent;
- (id)checkShutdownConditionOfBacklightStream;
- (void)dealloc;

@end
