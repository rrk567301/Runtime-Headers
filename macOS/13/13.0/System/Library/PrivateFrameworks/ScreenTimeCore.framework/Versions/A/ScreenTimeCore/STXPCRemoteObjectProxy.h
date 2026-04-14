@interface STXPCRemoteObjectProxy : NSObject

+ (void)proxyFromConnection:(id)a0 proxyHandler:(id /* block */)a1;
+ (void)_proxyFromConnection:(id)a0 withRetryCount:(unsigned long long)a1 proxyHandler:(id /* block */)a2;
+ (void)synchronousProxyFromConnection:(id)a0 proxyHandler:(id /* block */)a1;
+ (void)_synchronousProxyFromConnection:(id)a0 withRetryCount:(unsigned long long)a1 proxyHandler:(id /* block */)a2;

@end
