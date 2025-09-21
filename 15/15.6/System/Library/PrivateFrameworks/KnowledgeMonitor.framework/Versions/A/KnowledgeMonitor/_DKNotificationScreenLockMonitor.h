@class NSString, _DKEvent, BMSource, NSDate;

@interface _DKNotificationScreenLockMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    char _enabled;
    BMSource *_source;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ instantHandler;
@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (copy, nonatomic) id /* block */ historicalHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsLocked:(char)a0;
+ (id)_BMEventWithState:(id)a0;
+ (id)_eventWithState:(id)a0;
+ (char)shouldMergeUnchangedEvents;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)receiveNotificationEvent:(id)a0;
- (void)synchronouslyReflectCurrentValue;

@end
