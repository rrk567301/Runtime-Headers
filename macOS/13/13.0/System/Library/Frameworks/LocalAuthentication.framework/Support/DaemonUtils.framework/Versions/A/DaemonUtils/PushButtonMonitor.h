@protocol PushButtonDelegate;

@interface PushButtonMonitor : NSObject {
    unsigned long long _lastTap;
    unsigned long long _lastDoubleTap;
    id /* block */ _axDoubleTapExpirationBlock;
    struct __IOHIDEventSystemClient { } *_hidClient;
}

@property (nonatomic) BOOL doubleTapDetected;
@property (nonatomic) BOOL axDoubleTapDetected;
@property (weak, nonatomic) id<PushButtonDelegate> delegate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)prearmAssertion;
- (void)consumeDoubleTapWithReason:(id)a0;
- (void)_consumeDoubleTapWithReason:(id)a0 includingAX:(BOOL)a1;
- (void)_scheduleDoubleTapExpiration;
- (double)_defaultExpirationTimeout;
- (void)_expireDoubleTap:(unsigned long long)a0;
- (void)doubleTappedAt:(id)a0;
- (void)adviseDoubleTap;
- (void)axApplePayConfirmation;
- (void)_restartWithReactivationDelay:(double)a0;
- (BOOL)startWithError:(id *)a0;

@end
