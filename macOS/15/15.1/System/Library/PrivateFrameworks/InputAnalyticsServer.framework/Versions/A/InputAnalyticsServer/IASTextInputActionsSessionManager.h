@interface IASTextInputActionsSessionManager : IASMultiClassSessionManager

- (id)init;
- (void)didAction:(id)a0;
- (void)broadcastActionToSubscribingAnalyzers:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;

@end
