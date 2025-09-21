@interface __IMDPersistenceServiceListenerImpl : NSObject <NSXPCListenerDelegate>

- (id)init;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;

@end
