@interface FinanceKit.CoreDataStoreServerHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy

- (id)init;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (id)allowableClassesForClientWithContext:(id)a0;

@end
