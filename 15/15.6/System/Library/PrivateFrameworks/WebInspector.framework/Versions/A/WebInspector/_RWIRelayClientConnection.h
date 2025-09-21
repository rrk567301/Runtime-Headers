@class NSString;
@protocol _RWIRelayClientConnectionDelegate;

@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy> {
    char _closed;
}

@property (readonly, nonatomic) id<_RWIRelayClientConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) char sleeping;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)close;
- (id)initWithDelegate:(id)a0;
- (void)sendMessage:(id)a0;
- (void)_closeAndNotifyDelegate:(char)a0;
- (void)closeFromConnection;
- (void)closeInternal;
- (void)dispatchRelayMessage:(id)a0;

@end
