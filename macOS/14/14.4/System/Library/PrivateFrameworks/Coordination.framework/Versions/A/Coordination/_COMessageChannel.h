@interface _COMessageChannel : COMessageChannel

- (void)activateWithCompletion:(id /* block */)a0;
- (void)addGroupedHomeKitIdentifiers:(id)a0;
- (void)broadcastRequest:(id)a0 recipientsCallback:(id /* block */)a1 responseCompletionHandler:(id /* block */)a2;
- (id)initWithTopic:(id)a0 cluster:(id)a1 manualGrouping:(BOOL)a2;
- (void)registerHandler:(id /* block */)a0 forRequestClass:(Class)a1;
- (void)registerMemberFoundHandler:(id /* block */)a0;
- (void)registerMemberLostHandler:(id /* block */)a0;
- (void)removeGroupedHomeKitIdentifiers:(id)a0;
- (void)sendRequest:(id)a0 members:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)sendRequest:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
