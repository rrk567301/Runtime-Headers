@class SKDPowerHUDSender, NSMutableDictionary, NSDate;
@protocol SKDLogSending;

@interface SKDPowerLogger : SKDEventLogger {
    NSMutableDictionary *_cache;
    NSDate *_lastFlushDate;
    NSDate *_cacheStartTime;
    double _interval;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<SKDLogSending> _powerLogSender;
    SKDPowerHUDSender *_powerHUDSender;
}

@property (readonly, nonatomic) SKDPowerHUDSender *powerHUDSender;

- (id)logs;
- (void)setInterval:(double)a0;
- (void)flush;
- (void).cxx_destruct;
- (void)logEvent:(id)a0;
- (void)dealloc;
- (void)logEvent:(id)a0 level:(unsigned long long)a1;
- (BOOL)supportedEvent:(id)a0;
- (id)initWithDomain:(id)a0 powerLogSender:(id)a1 powerHUDSender:(id)a2;
- (void)setCacheStartTime:(id)a0;
- (void)setLastFlushDate:(id)a0;

@end
