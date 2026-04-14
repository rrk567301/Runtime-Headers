@class NSXPCListenerEndpoint, NSSet, NSXPCConnection, MuxNotificationSink, NSError, FrameworkCache;
@protocol SystemConfigurationProviding;

@interface CoreTelephonyClientMux : NSObject <MuxNotificationSinkDelegate> {
    struct map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::less<__unsafe_unretained id>, std::allocator<std::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext>>> { struct __tree<std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::__map_value_compare<__unsafe_unretained id, std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>, std::less<__unsafe_unretained id>>, std::allocator<std::__value_type<__unsafe_unretained id, (anonymous namespace)::DelegateContext>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _delegates;
    NSSet *_currentSelectorSet;
    struct map<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>, std::less<__CTAssertionType *>, std::allocator<std::pair<__CTAssertionType *const, std::pair<dispatch::queue, void (^)(NSError *)>>>> { struct __tree<std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, std::__map_value_compare<__CTAssertionType *, std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>, std::less<__CTAssertionType *>>, std::allocator<std::__value_type<__CTAssertionType *, std::pair<dispatch::queue, void (^)(NSError *)>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _clientCallback;
    FrameworkCache *_cache;
    id<SystemConfigurationProviding> _systemConfigProvider;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } xpcQueue;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) MuxNotificationSink *notificationSink;
@property (retain, nonatomic) NSError *reconnectError;

- (id)_connection;
- (id)synchronousProxyWithErrorHandler:(id /* block */)a0;
- (void)addDelegate:(id)a0 queue:(struct dispatch_queue_s { } *)a1;
- (id)initWithSink:(id)a0 systemConfigurationProvider:(id)a1;
- (void)cacheValue:(id)a0 forSelector:(SEL)a1;
- (unsigned long long)_getAssertionTypeId;
- (id)proxyWithQueue:(struct dispatch_queue_s { } *)a0 errorHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_connect_sync;
- (struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; } *)createCTAssertionForConnectionType:(int)a0 allocator:(struct __CFAllocator { } *)a1 proxy:(id)a2;
- (void)sink:(id)a0 handleNotification:(id)a1;
- (void)_ensureConnectionSetup_sync:(BOOL)a0;
- (void)removeDelegate:(id)a0;
- (id)cachedValueForSelector:(SEL)a0;
- (void)registerBlockForInvalidationNotification:(struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; } *)a0 callbackQueue:(struct dispatch_queue_s { } *)a1 callback:(id /* block */)a2;
- (id)init;
- (void)_registerForNotifications_sync:(id)a0 shouldForce:(BOOL)a1 completion:(id /* block */)a2;
- (void)_ensureConnectionSetup_sync;
- (id)proxyWithErrorHandler_sync:(id /* block */)a0;
- (void)_sendConnectionInterruptedNotification_sync:(id)a0;
- (void)_computeNotificationSet_sync:(BOOL)a0 completion:(id /* block */)a1;
- (id).cxx_construct;
- (void)_computeNotificationSetForced_sync;
- (void)_initializeConnection_sync;
- (id)initWithEndpoint:(id)a0 sink:(id)a1 systemConfigurationProvider:(id)a2;
- (void)_setReconnectError_sync:(id)a0;
- (void)removeAssertionForInvalidationNotification:(struct __CTAssertionType { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; id x2; int x3; } *)a0;
- (void)_computeNotificationSetForced_sync:(id /* block */)a0;
- (void)_computeNotificationSet_sync:(id /* block */)a0;
- (void).cxx_destruct;

@end
