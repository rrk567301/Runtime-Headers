@interface BSServiceInitiatingConnection : BSServiceConnection <BSServiceConnectionClient, BSXPCServiceConnectionMessaging>

- (id)initWithEndpoint:(id)a0;
- (void)configure:(id /* block */)a0;
- (id)remoteTargetWithLaunchingAssertionAttributes:(id)a0;
- (void)_configure:(id /* block */)a0;
- (id)initWithEndpoint:(id)a0 options:(id /* block */)a1;

@end
