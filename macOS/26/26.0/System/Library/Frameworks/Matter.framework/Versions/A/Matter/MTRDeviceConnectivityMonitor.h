@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MTRDeviceConnectivityMonitor : NSObject {
    NSString *_instanceName;
    struct vector<_DNSServiceRef_t *, std::allocator<_DNSServiceRef_t *>> { struct _DNSServiceRef_t **__begin_; struct _DNSServiceRef_t **__end_; struct _DNSServiceRef_t **__cap_; } _resolvers;
    NSMutableDictionary *_connections;
    id /* block */ _monitorHandler;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

+ (struct _DNSServiceRef_t { } *)_sharedResolverConnection;

- (void)dealloc;
- (void)_callHandler;
- (id)description;
- (id).cxx_construct;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)handleResolvedHostname:(const char *)a0 port:(unsigned short)a1 error:(int)a2;
- (id)initWithCompressedFabricID:(id)a0 nodeID:(id)a1;
- (id)initWithInstanceName:(id)a0;
- (void)startMonitoringWithHandler:(id /* block */)a0 queue:(id)a1;

@end
