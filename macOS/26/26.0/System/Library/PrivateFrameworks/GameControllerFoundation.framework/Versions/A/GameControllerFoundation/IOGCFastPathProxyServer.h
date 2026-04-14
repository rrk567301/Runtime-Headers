@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IOGCFastPathProxyServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
}

- (void)invalidate;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithServerName:(id)a0;

@end
