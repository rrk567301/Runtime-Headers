@interface FinanceKit.CoreDataStoreServerHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy

- (id)allowableClassesForClientWithContext:(id)a0;
- (id)init;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;

@end
