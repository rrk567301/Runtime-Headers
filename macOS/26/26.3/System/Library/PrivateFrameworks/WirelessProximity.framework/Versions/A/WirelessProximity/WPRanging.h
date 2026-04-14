@protocol WPRangingDelegate;

@interface WPRanging : WPClient

@property (weak, nonatomic) id<WPRangingDelegate> delegate;

- (void)invalidate;
- (void)enableRanging:(BOOL)a0 reply:(id /* block */)a1;
- (void)stateDidChange:(long long)a0;
- (void)isRangingEnabledReply:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)enableRanging:(BOOL)a0;
- (id)clientAsString;
- (void)rangingEnabled:(BOOL)a0 withError:(id)a1;
- (void).cxx_destruct;

@end
