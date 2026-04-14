@class NSMutableDictionary;

@interface SOSystemIdleMonitor : NSObject {
    id _globalEventMonitor;
    id _localEventMonitor;
    NSMutableDictionary *_listenerLookup;
    NSMutableDictionary *_timerLookup;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (double)idleTime;
- (void)_receivedEvent;
- (void)_timeoutTimerFired:(id)a0;
- (void)addTimeoutListener:(id)a0 seconds:(unsigned long long)a1;
- (void)removeTimeoutListener:(id)a0;
- (id)_createTimerWithInterval:(double)a0 originalInterval:(double)a1;
- (void)_timerActionOnSystemBecameActive;
- (void)listenForNextSystemActivity;

@end
