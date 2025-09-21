@protocol PushButtonDelegate;

@interface PushButtonMonitor : NSObject {
    unsigned long long _lastTap;
    unsigned long long _lastDoubleTap;
    id /* block */ _axDoubleTapExpirationBlock;
    struct __IOHIDEventSystemClient { } *_hidClient;
}

@property (nonatomic) char doubleTapDetected;
@property (nonatomic) char axDoubleTapDetected;
@property (weak, nonatomic) id<PushButtonDelegate> delegate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)start;
- (void)stop;
- (void)doubleTappedAt:(id)a0;
- (id)prearmAssertion;
- (char)startWithError:(id *)a0;
- (void)adviseDoubleTap;
- (void)_consumeDoubleTapWithReason:(id)a0 includingAX:(char)a1;
- (double)_defaultExpirationTimeout;
- (void)_expireDoubleTap:(unsigned long long)a0;
- (void)_restartWithReactivationDelay:(double)a0;
- (void)_scheduleDoubleTapExpiration;
- (void)axApplePayConfirmation;
- (void)consumeDoubleTapWithReason:(id)a0;

@end
