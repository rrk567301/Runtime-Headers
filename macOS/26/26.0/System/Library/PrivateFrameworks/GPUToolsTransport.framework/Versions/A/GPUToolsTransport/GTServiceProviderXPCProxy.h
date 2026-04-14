@class NSSet, NSString, NSMutableDictionary, GTServiceConnection;

@interface GTServiceProviderXPCProxy : NSObject <GTServiceProvider> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSString *_deviceUDID;
    NSMutableDictionary *_observerIdToPort;
}

- (unsigned long long)registerObserver:(id)a0;
- (id)allServices;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)deregisterService:(unsigned long long)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)registerService:(id)a0 forProcess:(id)a1;
- (void)waitForService:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)waitForService:(id)a0 error:(id *)a1;

@end
