@interface IASGenmojiSessionManager : IASMultiSourceSessionManager

- (id)initWithQueue:(id)a0;
- (void)didAction:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)handleGenmojiChannelSignal:(id)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 testingDelegate:(id)a2 eventHandler:(id /* block */)a3;

@end
