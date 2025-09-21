@interface LocalAuthenticationCore.LACOnenessSessionMonitorModel : NSObject <LACOnenessSessionMonitoring> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ replyQueue;
    void /* unknown type, empty encoding */ sessionProvider;
    void /* unknown type, empty encoding */ _isOnenessActive;
    void /* unknown type, empty encoding */ sessionSubscription;
}

@property (nonatomic, readonly) char isMonitoring;
@property (nonatomic, readonly) char isSessionActive;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
