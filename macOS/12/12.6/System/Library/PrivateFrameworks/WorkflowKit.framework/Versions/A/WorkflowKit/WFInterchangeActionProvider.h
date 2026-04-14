@interface WFInterchangeActionProvider : WFActionProvider

- (void)updateCache:(id /* block */)a0;
- (void)deleteCache;
- (void)createActionsForRequests:(id)a0;
- (id)availableActionIdentifiers;
- (id)actionWithInterchangeAction:(id)a0 serializedParameters:(id)a1;

@end
