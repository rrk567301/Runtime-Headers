@class GTTransport_replayer, NSObject;
@protocol OS_dispatch_queue;

@interface GTTransportSource_replayer : NSObject {
    id /* block */ _messageHandler;
    id /* block */ _cancellationHandler;
    id /* block */ _registrationHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_mqueue;
    GTTransport_replayer *_transport;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _state;
}

@property (copy, nonatomic) id /* block */ messageHandler;
@property (copy, nonatomic) id /* block */ registrationHandler;

- (id /* block */)cancellationHandler;
- (void)resume;
- (void)_cancel;
- (void)setCancellationHandler:(id /* block */)a0;
- (void)suspend;
- (void)cancel;
- (id)init;
- (id).cxx_construct;
- (BOOL)cancelled;
- (void)dealloc;
- (void)_register;
- (void)_callCancellationHandler;
- (void)_callRegistrationHandler;
- (void)_dispatch:(id)a0;
- (id)_initWithQueue:(id)a0 transport:(id)a1;

@end
