@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BridgeXPCSynchronousConnection : BridgeXPCConnection {
    id /* block */ errorHandler;
    NSObject<OS_dispatch_semaphore> *send_queue_sema;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } reply_mutex;
    NSObject<OS_dispatch_semaphore> *reply_sema;
    id *reply_value;
}

+ (void)connectedPair:(id *)a0 :(id *)a1;

- (id /* block */)eventHandler;
- (void)setEventHandler:(id /* block */)a0;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)sendBarrier:(id /* block */)a0;
- (id)sendSynchronousMessage:(id)a0;

@end
