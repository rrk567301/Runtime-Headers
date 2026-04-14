@interface IASTextInputActionsSessionManager : IASSessionManager

- (id)init;
- (void)logMessage:(id)a0;
- (void)didAction:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (void)reportStatus;
- (void)broadcastActionToSubscribingAnalyzers:(id)a0;
- (void)didActionWithSessionMetadata:(id)a0 withDictionary:(id)a1;
- (id)initWithEventHandler:(id /* block */)a0 serverDelegate:(id)a1;

@end
