@class RWITarget;
@protocol RWIServiceConnectionDelegate;

@interface RWIServiceConnection : NSObject <_RWIClientToRelayMessageProxy> {
    BOOL _closed;
}

@property (retain) RWITarget *target;
@property (weak, nonatomic) id<RWIServiceConnectionDelegate> delegate;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)close;
- (void)sendMessage:(id)a0;
- (BOOL)isConnected;
- (void)closeInternal;
- (void)_closeAndNotifyDelegate:(BOOL)a0;
- (void)closeFromConnection;
- (void)dispatchRelayMessage:(id)a0;
- (id)initWithTarget:(id)a0 delegate:(id)a1;

@end
