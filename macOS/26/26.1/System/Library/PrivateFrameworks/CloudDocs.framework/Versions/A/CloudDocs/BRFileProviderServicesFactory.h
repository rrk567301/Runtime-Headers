@interface BRFileProviderServicesFactory : NSObject

+ (id)_fetchSynchronousAutomaticErrorProxyFromURL:(id)a0 serviceName:(id)a1 interface:(id)a2;
+ (id)clientSideServiceSyncProxyForURL:(id)a0;
+ (void)fetchItemServiceAsyncProxyForURL:(id)a0 handler:(id /* block */)a1;
+ (id)itemServiceSyncProxyForURL:(id)a0;

@end
