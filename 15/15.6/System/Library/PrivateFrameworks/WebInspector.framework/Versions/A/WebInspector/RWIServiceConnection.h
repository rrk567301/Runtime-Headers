@class NSString, RWITarget;
@protocol RWIServiceConnectionDelegate;

@interface RWIServiceConnection : NSObject <_RWIClientToRelayMessageProxy> {
    char _closed;
}

@property (retain) RWITarget *target;
@property (weak, nonatomic) id<RWIServiceConnectionDelegate> delegate;
@property (readonly, retain, nonatomic) NSString *connectionIdentifier;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)close;
- (void)sendMessage:(id)a0;
- (char)isConnected;
- (void)_closeAndNotifyDelegate:(char)a0;
- (void)closeFromConnection;
- (void)closeInternal;
- (void)dispatchRelayMessage:(id)a0;
- (id)initWithTarget:(id)a0 delegate:(id)a1;

@end
