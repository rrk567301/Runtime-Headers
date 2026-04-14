@class NSSet, NSMutableDictionary, GTServiceConnection, NSObject, GTURLAccessProviderXPCProxy;
@protocol OS_os_log;

@interface GTMTLCaptureServiceXPCProxy : NSObject <GTMTLCaptureService> {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    GTURLAccessProviderXPCProxy *_urlService;
    NSMutableDictionary *_observerIdToPort;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)stop;
- (BOOL)highlight:(unsigned long long)a0;
- (void)abort;
- (unsigned long long)registerObserver:(id)a0;
- (id)allCaptureObjects;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)startWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;

@end
