@interface _VZVirtioSocketDeviceObserver : NSObject {
    struct unique_ptr<SocketDeviceObserverMessenger, std::default_delete<SocketDeviceObserverMessenger>> { struct SocketDeviceObserverMessenger *__ptr_; } _messenger;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithConnection:(id)a0 queue:(id)a1 delegate:(id)a2;

@end
