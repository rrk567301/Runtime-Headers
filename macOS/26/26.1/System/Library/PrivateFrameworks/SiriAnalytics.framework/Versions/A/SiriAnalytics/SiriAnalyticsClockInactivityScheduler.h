@interface SiriAnalyticsClockInactivityScheduler : NSObject {
    void /* unknown type, empty encoding */ interval;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ creation;
    void /* unknown type, empty encoding */ expiration;
    void /* unknown type, empty encoding */ inactivityTimer;
    void /* unknown type, empty encoding */ timerLock;
}

- (void).cxx_destruct;
- (id)init;
- (void)startScheduling;
- (void)clockCreated;
- (void)clockExpiredWithCompletion:(id /* block */)a0;
- (void)clockForcefullyDestroyedWithCompletion:(id /* block */)a0;
- (void)destroyInactivityTimer;
- (id)initWithSeconds:(long long)a0 queue:(id)a1 expiration:(id /* block */)a2 creation:(id /* block */)a3;

@end
