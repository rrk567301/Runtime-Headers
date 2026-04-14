@class GTTransport_tools_diagnostics;

@interface GTTransportSource_tools_diagnostics : NSObject {
    id /* block */ _messageHandler;
    id /* block */ _cancellationHandler;
    id /* block */ _registrationHandler;
    struct dispatch_queue_s { } *_queue;
    struct dispatch_queue_s { } *_mqueue;
    GTTransport_tools_diagnostics *_transport;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _state;
}

@property (copy, nonatomic) id /* block */ messageHandler;
@property (copy, nonatomic) id /* block */ registrationHandler;

- (void)dealloc;
- (id)init;
- (void)resume;
- (void)setCancellationHandler:(id /* block */)a0;
- (id /* block */)cancellationHandler;
- (void)cancel;
- (void)suspend;
- (BOOL)cancelled;
- (void)_cancel;
- (void)_register;
- (void)_callRegistrationHandler;
- (void)_callCancellationHandler;
- (id)_initWithQueue:(struct dispatch_queue_s { } *)a0 transport:(id)a1;
- (void)_dispatch:(id)a0;

@end
