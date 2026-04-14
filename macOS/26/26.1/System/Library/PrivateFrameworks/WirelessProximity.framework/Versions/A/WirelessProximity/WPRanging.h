@protocol WPRangingDelegate;

@interface WPRanging : WPClient

@property (weak, nonatomic) id<WPRangingDelegate> delegate;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)clientAsString;
- (void)stateDidChange:(long long)a0;
- (void)rangingEnabled:(BOOL)a0 withError:(id)a1;
- (void)invalidate;
- (void)isRangingEnabledReply:(id /* block */)a0;
- (void)enableRanging:(BOOL)a0;
- (void).cxx_destruct;
- (void)enableRanging:(BOOL)a0 reply:(id /* block */)a1;

@end
