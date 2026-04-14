@interface IASGenmojiSessionManager : IASMultiSourceSessionManager

- (id)init;
- (void)didAction:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;
- (void)handleGenmojiChannelSignal:(id)a0;

@end
