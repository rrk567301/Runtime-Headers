@class OS_dispatch_queue, NSString;

@interface LACCompanionAuthenticationSessionMonitor : NSObject <LACCompanionAuthenticationSessionMonitoring> {
    void /* unknown type, empty encoding */ _sessionProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mockedSessionProvider;
    void /* unknown type, empty encoding */ sessionSubscription;
}

@property (nonatomic, readonly) long long companion;
@property (nonatomic, retain) id observers;
@property (nonatomic, readonly) OS_dispatch_queue *replyQueue;
@property (nonatomic) BOOL isUnderlyingSessionActive;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isAvailable;
@property (nonatomic, readonly) BOOL isMonitoring;
@property (nonatomic, readonly) BOOL isSessionActive;

- (void)refreshWithCompletion:(id /* block */)a0;
- (void)startMonitoring;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (id)initForCompanion:(long long)a0 environmentProvider:(id)a1 replyQueue:(id)a2;

@end
