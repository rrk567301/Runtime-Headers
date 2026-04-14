@class BMSource, NSTimer;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
    id /* block */ _shutdownHandler;
    NSTimer *_lastAliveDateTimer;
}

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (void)setIsBacklit:(BOOL)a0;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (id /* block */)shutdownHandler;
- (void)handleShutdownNotification;
- (void)setShutdownHandler:(id /* block */)a0;
- (void)synchronouslyReflectCurrentValue;
- (id)_lastAliveDate;
- (void)_setLastAliveDate:(id)a0;
- (id)_shutdownDateFromSpringBoard;
- (id)_shutdownDateFromSysctl;
- (id)bootDate;
- (id)checkShutdownConditionOfBacklightStream;
- (void)donateRetroactiveShutdownBacklightOffEvent;
- (void)donateToBiome:(unsigned long long)a0 startDate:(id)a1;
- (id)lastBacklightEvent;
- (void)obtainCurrentValue;
- (id)shutdownDate;

@end
