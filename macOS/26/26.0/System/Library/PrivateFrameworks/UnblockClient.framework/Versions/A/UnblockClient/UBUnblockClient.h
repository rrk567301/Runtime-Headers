@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface UBUnblockClient : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_replyQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)recover:(id)a0 stackshotData:(id)a1 replyQueue:(id)a2 callback:(id /* block */)a3;
- (id)handleRecoverReply:(id)a0 input_services:(id)a1 err:(id *)a2;
- (void)openConnectionToUnblockService;
- (id)prepareRecoverRequest:(id)a0 stackshot_data:(id)a1 err:(id *)a2;

@end
