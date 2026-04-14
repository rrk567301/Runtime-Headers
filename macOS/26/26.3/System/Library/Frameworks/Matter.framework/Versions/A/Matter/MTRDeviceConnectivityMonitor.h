@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MTRDeviceConnectivityMonitor : NSObject {
    NSString *_instanceName;
    struct vector<_DNSServiceRef_t *, std::allocator<_DNSServiceRef_t *>> { struct _DNSServiceRef_t **__begin_; struct _DNSServiceRef_t **__end_; struct { struct _DNSServiceRef_t **__cap_; } ; } _resolvers;
    NSMutableDictionary *_connectionsByHostname;
    unsigned long long _monitorID;
    id /* block */ _monitorHandler;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

+ (struct _DNSServiceRef_t { } *)_sharedResolverConnection;

- (void)_stopMonitoring;
- (void)stopMonitoring;
- (id)description;
- (void)_callHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)_clearResolvers:(struct vector<_DNSServiceRef_t *, std::allocator<_DNSServiceRef_t *>> { struct _DNSServiceRef_t **x0; struct _DNSServiceRef_t **x1; struct { struct _DNSServiceRef_t **x0; } x2; })a0;
- (void)handleResolvedHostname:(const char *)a0 port:(unsigned short)a1 error:(int)a2;
- (id)initWithCompressedFabricID:(id)a0 nodeID:(id)a1;
- (id)initWithInstanceName:(id)a0;
- (unsigned long long)monitorID;
- (BOOL)startMonitoringWithHandler:(id /* block */)a0 queue:(id)a1;

@end
