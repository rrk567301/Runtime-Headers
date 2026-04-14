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

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)_eventWithState:(id)a0;
+ (id)_BMEventWithState:(id)a0;
+ (void)setIsLocked:(BOOL)a0;
+ (id)entitlements;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void).cxx_destruct;
- (void)receiveNotificationEvent:(id)a0;
- (void)start;
- (void)dealloc;

@end
