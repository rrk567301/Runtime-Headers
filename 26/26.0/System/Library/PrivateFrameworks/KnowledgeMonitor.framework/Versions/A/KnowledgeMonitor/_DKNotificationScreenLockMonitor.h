@class NSString, _DKEvent, BMSource, NSDate;

@interface _DKNotificationScreenLockMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    BOOL _enabled;
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

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (id)_eventWithState:(id)a0;
+ (id)_BMEventWithState:(id)a0;
+ (id)eventStream;
+ (void)setIsLocked:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)dealloc;
- (void)stop;
- (void)receiveNotificationEvent:(id)a0;
- (void)deactivate;
- (void).cxx_destruct;

@end
