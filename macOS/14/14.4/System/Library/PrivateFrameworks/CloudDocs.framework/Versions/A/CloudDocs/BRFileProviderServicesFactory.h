@interface BRFileProviderServicesFactory : NSObject

+ (id)clientSideServiceSyncProxyForURL:(id)a0;
+ (void)fetchItemServiceSyncProxyForURL:(id)a0 handler:(id /* block */)a1;
+ (id)itemServiceSyncProxyForURL:(id)a0;

@end
