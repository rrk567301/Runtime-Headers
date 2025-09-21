@class NSXPCListenerEndpoint, NSObject;
@protocol BMXPCListenerDelegate, OS_dispatch_queue, OS_xpc_object;

@interface BMXPCListener : NSObject {
    unsigned long long _type;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak) id<BMXPCListenerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSXPCListenerEndpoint *endpoint;

+ (id)serviceListener;
+ (id)anonymousListenerWithQueue:(id)a0;

- (void)invalidate;
- (void)_handleConnection:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)a0 connection:(id)a1 queue:(id)a2;
- (id /* block */)_eventHandler;
- (id)initWithMachServiceName:(id)a0 queue:(id)a1;

@end
