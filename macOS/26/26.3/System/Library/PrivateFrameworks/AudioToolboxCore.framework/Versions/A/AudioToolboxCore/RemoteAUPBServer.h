@class , __end_, NSXPCConnection;
@protocol AUPBServing;

@interface RemoteAUPBServer : NSObject {
    struct vector<NSObject<OS_dispatch_semaphore> *, std::allocator<NSObject<OS_dispatch_semaphore> *>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } replySemas;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<AUPBServing> proxyInterface;
@property (nonatomic) struct OpaqueAUPBServer { } *ref;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)addSema:(id)a0;
- (void)removeSema:(id)a0;
- (void)signalAllSemaphores;

@end
