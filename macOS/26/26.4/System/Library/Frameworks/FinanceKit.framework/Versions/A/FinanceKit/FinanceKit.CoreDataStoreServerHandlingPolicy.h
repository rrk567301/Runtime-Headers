@interface FinanceKit.CoreDataStoreServerHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy

- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (id)allowableClassesForClientWithContext:(id)a0;
- (id)init;

@end
