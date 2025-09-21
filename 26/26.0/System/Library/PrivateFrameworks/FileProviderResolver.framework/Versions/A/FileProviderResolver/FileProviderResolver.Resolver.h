@interface FileProviderResolver.Resolver : NSObject <FPResolverProtocol>

- (id)init;
- (void).cxx_destruct;
- (void)URLForItemID:(id)a0 reply:(id /* block */)a1;
- (void)itemIDForURL:(id)a0 allowReadOnlyLocations:(BOOL)a1 reply:(id /* block */)a2;
- (void)connectionInfoWithReply:(id /* block */)a0;

@end
