@class NSSet, NSDictionary, NSMutableDictionary, NSDate;
@protocol SKDLogProviding;

@interface SKDPowerLogger : SKDEventLogger {
    NSSet *_supportedAttributes;
    NSDictionary *_aliases;
    NSMutableDictionary *_cache;
    NSDate *_lastFlushDate;
    double _interval;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<SKDLogProviding> _powerProvider;
}

- (void)logEvent:(id)a0;
- (id)logs;
- (void)flush;
- (void)setInterval:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)logEvent:(id)a0 level:(unsigned long long)a1;
- (BOOL)supportedEvent:(id)a0;
- (id)initWithDomain:(id)a0 powerProvider:(id)a1;
- (void)setLastFlushDate:(id)a0;

@end
