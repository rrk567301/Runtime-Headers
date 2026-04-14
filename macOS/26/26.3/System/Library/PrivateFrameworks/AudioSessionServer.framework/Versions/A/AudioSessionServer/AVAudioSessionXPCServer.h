@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionXPCServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_callbackInterface;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct { void *__ptr_; } ; } _deallocPromise;
    BOOL _needsDefaultWorldInit;
    struct shared_ptr<avas::WorkloopPool> { struct WorkloopPool *__ptr_; struct __shared_weak_count *__cntrl_; } _workloopPool;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeConnection:(id)a0;
- (void)start;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)init2;
- (id).cxx_construct;

@end
