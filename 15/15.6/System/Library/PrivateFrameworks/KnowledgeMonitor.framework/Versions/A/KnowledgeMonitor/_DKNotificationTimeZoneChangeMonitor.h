@class BMDeviceTimeZone, NSString, _DKEvent, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _DKNotificationTimeZoneChangeMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    char _enabled;
    char _resumed;
    char _cancel;
    double _lastUpdate;
    BMDeviceTimeZone *_timeZone;
    NSObject<OS_dispatch_queue> *_donationQueue;
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

+ (id)log;
+ (id)eventStream;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)receiveNotificationEvent:(id)a0;
- (void)_updateWithTimeZone:(id)a0 timestamp:(double)a1;
- (void)enqueueTimeZoneUpdate;

@end
