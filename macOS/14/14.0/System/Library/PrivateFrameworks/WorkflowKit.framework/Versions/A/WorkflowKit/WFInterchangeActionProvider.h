@interface WFInterchangeActionProvider : WFActionProvider

- (void)deleteCache;
- (void)createActionsForRequests:(id)a0;
- (id)actionWithInterchangeAction:(id)a0 serializedParameters:(id)a1;
- (id)availableActionIdentifiers;
- (void)fetchRemoteConfiguration:(id /* block */)a0;

@end
