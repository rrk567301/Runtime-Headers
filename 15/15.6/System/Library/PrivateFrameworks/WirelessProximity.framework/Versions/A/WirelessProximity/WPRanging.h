@protocol WPRangingDelegate;

@interface WPRanging : WPClient

@property (weak, nonatomic) id<WPRangingDelegate> delegate;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (id)clientAsString;
- (void)enableRanging:(char)a0;
- (void)enableRanging:(char)a0 reply:(id /* block */)a1;
- (void)isRangingEnabledReply:(id /* block */)a0;
- (void)rangingEnabled:(char)a0 withError:(id)a1;

@end
