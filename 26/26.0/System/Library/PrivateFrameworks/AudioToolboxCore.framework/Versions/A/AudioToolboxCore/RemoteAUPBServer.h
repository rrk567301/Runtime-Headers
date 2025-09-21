@class __end_, __cap_, NSXPCConnection;
@protocol AUPBServing;

@interface RemoteAUPBServer : NSObject {
    struct vector<NSObject<OS_dispatch_semaphore> *, std::allocator<NSObject<OS_dispatch_semaphore> *>> { __end_ **__begin_; __cap_ **x0; id *x1; } replySemas;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<AUPBServing> proxyInterface;
@property (nonatomic) struct OpaqueAUPBServer { } *ref;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSema:(id)a0;
- (void)removeSema:(id)a0;
- (void)signalAllSemaphores;

@end
