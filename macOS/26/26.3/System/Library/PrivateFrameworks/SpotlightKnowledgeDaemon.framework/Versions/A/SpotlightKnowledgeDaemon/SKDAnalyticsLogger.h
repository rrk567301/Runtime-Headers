@class NSMutableArray;
@protocol SKDLogProviding;

@interface SKDAnalyticsLogger : SKDEventLogger {
    unsigned long long _maxLogCount;
    NSMutableArray *_logs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<SKDLogProviding> _analyticsProvider;
}

- (void)logEvent:(id)a0;
- (id)logs;
- (void)flush;
- (void).cxx_destruct;
- (void)dealloc;
- (void)logEvent:(id)a0 level:(unsigned long long)a1;
- (void)setMaxLogCount:(unsigned long long)a0;
- (BOOL)supportedEvent:(id)a0;
- (id)initWithDomain:(id)a0 analyticsProvider:(id)a1;
- (BOOL)supportedTrackingEvent:(id)a0;
- (id)trackingEventBeginWithName:(id)a0 event:(id)a1;
- (void)trackingEventEnd:(id)a0;

@end
