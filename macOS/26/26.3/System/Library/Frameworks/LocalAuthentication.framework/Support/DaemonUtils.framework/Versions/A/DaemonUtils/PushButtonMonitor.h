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

- (BOOL)startWithError:(id *)a0;
- (void)start;
- (void)stop;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)adviseDoubleTap;
- (void)doubleTappedAt:(id)a0;
- (id)prearmAssertion;
- (void)_consumeDoubleTapWithReason:(id)a0 includingAX:(BOOL)a1;
- (double)_defaultExpirationTimeout;
- (void)_expireDoubleTap:(unsigned long long)a0;
- (void)_restartWithReactivationDelay:(double)a0;
- (void)_scheduleDoubleTapExpiration;
- (void)axApplePayConfirmation;
- (void)consumeDoubleTapWithReason:(id)a0;

@end
