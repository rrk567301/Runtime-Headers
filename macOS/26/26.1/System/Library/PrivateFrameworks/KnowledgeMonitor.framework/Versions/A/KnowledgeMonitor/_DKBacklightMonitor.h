@class BMSource, NSTimer;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
    id /* block */ _shutdownHandler;
    NSTimer *_lastAliveDateTimer;
}

+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsBacklit:(BOOL)a0;
+ (id)_eventWithState:(id)a0;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)handleShutdownNotification;
- (void)setShutdownHandler:(id /* block */)a0;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)obtainCurrentValue;
- (id)checkShutdownConditionOfBacklightStream;
- (id)shutdownDate;
- (void)deactivate;
- (id)_shutdownDateFromSpringBoard;
- (void)dealloc;
- (void)stop;
- (void)donateRetroactiveShutdownBacklightOffEvent;
- (id)bootDate;
- (void).cxx_destruct;
- (id)_lastAliveDate;
- (id /* block */)shutdownHandler;
- (void)_setLastAliveDate:(id)a0;
- (id)_shutdownDateFromSysctl;
- (id)lastBacklightEvent;
- (void)donateToBiome:(unsigned long long)a0 startDate:(id)a1;
- (id)init;

@end
